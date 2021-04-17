using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TextControls : MonoBehaviour
{
    
    public enum state {
        PLACING,
        INSCENE,
        WAITING,
        COPYING
    }

    public state currentState;

    public bool createdFromCopy;
    public bool createdFromFile = false;
    public string createdFromFileString;

    private Vector3 copyOffset;
    // Start is called before the first frame update
    void Start() {
        currentState = createdFromCopy? state.COPYING: state.PLACING;
        Camera moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
        Vector3 movePos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
            Mathf.Abs(moveCam.transform.position.z + 10)));
        copyOffset = transform.position - movePos;
        if (createdFromFile) {
            this.transform.GetComponent<InputField>().text = createdFromFileString;
            currentState = state.INSCENE;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
        if (currentState == state.PLACING) {
            Camera moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
            Vector3 movePos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                Mathf.Abs(moveCam.transform.position.z + 10)));
            transform.position = movePos;
            if (Input.GetMouseButtonDown(0)) currentState = state.INSCENE;
        }

        if (currentState == state.COPYING) {
            print("copying");
            Camera moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
            Vector3 movePos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                Mathf.Abs(moveCam.transform.position.z + 10)));
            transform.position = movePos + copyOffset;
            if (Input.GetMouseButtonDown(0)) currentState = state.INSCENE;
        }
        if (currentState == state.WAITING) {
            currentState = state.PLACING;
        }
    }

    private void OnMouseOver() {
        if (Input.GetMouseButtonDown(2) && currentState == state.INSCENE) {
            print("place again");
            currentState = state.WAITING;
        }
    }
}
