using UnityEngine;

public class ControlsManager : MonoBehaviour {
    public bool currentState = true;
    public bool changeCommand = false;

    private void Start() {
        GameObject.FindGameObjectWithTag("play").GetComponent<SpriteRenderer>().enabled = false;
        GameObject.FindGameObjectWithTag("play").GetComponent<BoxCollider2D>().enabled = false;
    }

    private void Update() {
        if (Input.GetKeyDown(KeyCode.S) || changeCommand) {
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
    }
}