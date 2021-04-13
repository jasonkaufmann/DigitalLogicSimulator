using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Controls : MonoBehaviour {
    private ControlsManager manager;

    private void Start() {
        manager = GameObject.FindObjectOfType<ControlsManager>();
    }

    private void OnMouseDown() {
        manager.changeCommand = true;
    }

    private void OnMouseEnter() {
        gameObject.GetComponent<SpriteRenderer>().color = Color.white;
    }

    private void OnMouseExit() {
        gameObject.GetComponent<SpriteRenderer>().color = Color.black;
    }
}
