using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControlsManager : MonoBehaviour {

    public enum type {
        PLAY,
        PAUSE
        
    }

    public type _type;

    private void OnMouseEnter() {
        gameObject.GetComponent<SpriteRenderer>().color = Color.white;
    }
    
    private void OnMouseExit() {
        gameObject.GetComponent<SpriteRenderer>().color = Color.black;
    }

    private void OnMouseDown() {
        if (_type == type.PLAY) {
            print("play button pressed");
            Time.timeScale = 1;
        } else if (_type == type.PAUSE) {
            print("pause button pressed");
            Time.timeScale = 0;
        }
    }
}
