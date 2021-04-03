using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Pin : MonoBehaviour {
    
    private void OnMouseEnter() {
        this.GetComponent<SpriteRenderer>().color = Color.white;
    }

    private void OnMouseExit() {
        this.GetComponent<SpriteRenderer>().color = Color.black;
    }
}
