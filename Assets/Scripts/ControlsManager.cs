using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.PlayerLoop;
using UnityEngine.UIElements;

public class ControlsManager : MonoBehaviour {
    public bool currentState = true;
    public bool changeCommand = false;
    public GameObject gates;
    private int speed = 10;
    public Camera mainCam;
    public bool snapBool = true;
    public bool raBool = false;
    public GameObject textFrequencyField;
    public bool immediateSim = false;
    public bool typing;

    private void Start() {
        GameObject.FindGameObjectWithTag("play").GetComponent<SpriteRenderer>().enabled = false;
        GameObject.FindGameObjectWithTag("play").GetComponent<BoxCollider2D>().enabled = false;
        GameObject.FindGameObjectWithTag("title").GetComponent<TMP_Text>().text =
            PlayerPrefs.GetString("currentProjectName");
    }

    public void updateSnapSettings() {
        print("snap changed");
        snapBool = !snapBool;
    }
    
    public void updateRASettings() {
        print("ra changed");
        raBool = !raBool;
    }
    
    public void updateSimSettings() {
        print("sim changed");
        immediateSim = !immediateSim;
    }

    private void Update() {
        if (EventSystem.current.currentSelectedGameObject == null && (Input.GetKeyDown(KeyCode.S) || changeCommand)) {
            if (changeCommand) changeCommand = false;
            print("change timescale");
            Time.timeScale = Time.timeScale == 0 ? 1 : 0;
            currentState = !currentState;
            if (currentState) {
                GameObject.FindGameObjectWithTag("play").GetComponent<SpriteRenderer>().enabled = false;
                GameObject.FindGameObjectWithTag("pause").GetComponent<SpriteRenderer>().enabled = true;
                GameObject.FindGameObjectWithTag("play").GetComponent<BoxCollider2D>().enabled = false;
                GameObject.FindGameObjectWithTag("pause").GetComponent<BoxCollider2D>().enabled = true;
            }
            else {
                GameObject.FindGameObjectWithTag("play").GetComponent<SpriteRenderer>().enabled = true;
                GameObject.FindGameObjectWithTag("pause").GetComponent<SpriteRenderer>().enabled = false;
                GameObject.FindGameObjectWithTag("play").GetComponent<BoxCollider2D>().enabled = true;
                GameObject.FindGameObjectWithTag("pause").GetComponent<BoxCollider2D>().enabled = false;
            }
        }

        Vector3 position = mainCam.ScreenToWorldPoint(new Vector3(Screen.width, Screen.height, -10));
        if (Input.GetKey(KeyCode.RightArrow)) {
            if(gates.transform.position.x + gates.transform.localScale.x/2 < -position.x)
                gates.transform.position += Time.deltaTime * speed * Vector3.right;
        } else if (Input.GetKey(KeyCode.LeftArrow)) {
            if(gates.transform.position.x - gates.transform.localScale.x/2 >= position.x)
                gates.transform.position -= Time.deltaTime * speed * Vector3.right;
        }
    }
}