using System;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Button : MonoBehaviour {
    
    public MenuControls manager;
    public void Start() {
        manager = GameObject.FindGameObjectWithTag("manageCanvas").GetComponent<MenuControls>();
    }

    public void startButton() {
        //SceneManager.LoadScene("MainGame");
        manager.startButtonClicked();
    }
}