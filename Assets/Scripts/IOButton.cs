using TMPro;
using UnityEngine;

public class IOButton : MonoBehaviour {
    private IO.state currentState;


    private void Update() {
        if (Time.timeScale == 0) return;
        if (gameObject.transform.parent.GetComponent<IO>().IOType == IO.type.IN) {
            if (gameObject.transform.parent.GetComponent<IO>().log == IO.logic.HIGH)
                gameObject.GetComponent<SpriteRenderer>().color = new Color(236f / 255f, 34f / 255f, 56f / 255f, 1f);
            else if (gameObject.transform.parent.GetComponent<IO>().log == IO.logic.LOW)
                gameObject.GetComponent<SpriteRenderer>().color = new Color(82f / 255f, 80f / 255f, 80f / 255f, 1f);
        }
    }

    private void OnMouseOver() {
        currentState = gameObject.transform.parent.GetComponent<IO>().currentState;
        if (Input.GetMouseButtonDown(0) && currentState == IO.state.INSCENE &&
            gameObject.transform.parent.GetComponent<IO>().IOType == IO.type.OUT) {
            gameObject.transform.parent.GetComponent<IO>().noChange = true;
            if (gameObject.transform.parent.GetComponent<IO>().log == IO.logic.LOW) {
                gameObject.GetComponent<SpriteRenderer>().color = new Color(236f / 255f, 34f / 255f, 56f / 255f, 1f);
                gameObject.transform.parent.GetComponent<IO>().log = IO.logic.HIGH;
            }
            else {
                gameObject.transform.parent.GetComponent<IO>().log = IO.logic.LOW;
                gameObject.GetComponent<SpriteRenderer>().color = new Color(82f / 255f, 80f / 255f, 80f / 255f, 1f);
            }
        }

        if (Input.GetMouseButtonDown(0) && currentState == IO.state.INSCENE &&
            gameObject.transform.parent.GetComponent<IO>().IOType == IO.type.CLOCK) {
            gameObject.transform.parent.GetComponent<IO>().clockOn = !gameObject.transform.parent.GetComponent<IO>().clockOn;
            if(gameObject.transform.parent.GetComponent<IO>().clockOn) {
                gameObject.GetComponent<SpriteRenderer>().color = new Color(236f / 255f, 34f / 255f, 56f / 255f, 1f);
            }
            else {
                var wires = gameObject.transform.parent.GetComponent<IO>().manager.getConnectedWireIO(gameObject.transform.parent.GetComponent<IO>());
                gameObject.transform.parent.GetComponent<IO>().log = IO.logic.LOW;
                gameObject.transform.parent.GetComponent<IO>().pin.value = false;
                foreach (GameObject wire in wires) wire.GetComponent<Wire>().propogateSignalLow();
                gameObject.GetComponent<SpriteRenderer>().color = new Color(82f / 255f, 80f / 255f, 80f / 255f, 1f);
            }
        }
        
        if (Input.GetMouseButtonDown(1) && currentState == IO.state.INSCENE &&
            gameObject.transform.parent.GetComponent<IO>().IOType == IO.type.CLOCK) {
            if (gameObject.transform.parent.GetComponent<IO>().textField == null) {
                GameObject textObj =
                    Instantiate(
                        GameObject.FindGameObjectWithTag("manageCanvas").GetComponent<ControlsManager>()
                            .textFrequencyField,
                        gameObject.transform.position + new Vector3(0, gameObject.transform.localScale.y, 0),
                        Quaternion.identity);
                textObj.transform.SetParent(GameObject.FindGameObjectWithTag("manageCanvas").transform, false);
                textObj.transform.localScale = new Vector3(0.25f, 0.25f, 1);
                gameObject.transform.parent.GetComponent<IO>().textField = textObj;
                textObj.GetComponent<TMP_InputField>().text =
                    gameObject.transform.parent.GetComponent<IO>().clockFrequency.ToString();
            }
            else {
                DestroyImmediate(gameObject.transform.parent.GetComponent<IO>().textField);
            }

        }
    }
}