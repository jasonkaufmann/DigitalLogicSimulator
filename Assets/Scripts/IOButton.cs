using TMPro;
using UnityEngine;
using UnityEngine.UI;

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
                        gameObject.transform.position,
                        Quaternion.identity);
                GameObject newCanvas = new GameObject();
                newCanvas.name = "frequencyFieldCanvas";
                newCanvas.AddComponent<Canvas>();
                newCanvas.AddComponent<CanvasScaler>();
                newCanvas.AddComponent<GraphicRaycaster>();
                textObj.transform.SetParent(newCanvas.transform);
                newCanvas.GetComponent<Canvas>().renderMode = RenderMode.WorldSpace;
                newCanvas.GetComponent<Canvas>().worldCamera =
                    GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
                textObj.transform.localScale = new Vector3(0.0025f, 0.0025f, 1);
                gameObject.transform.parent.GetComponent<IO>().textField = textObj;
                gameObject.transform.parent.GetComponent<IO>().textCanvas = newCanvas;
                textObj.GetComponent<TMP_InputField>().text =
                    gameObject.transform.parent.GetComponent<IO>().clockFrequency.ToString();
                textObj.AddComponent<BoxCollider2D>();
                textObj.GetComponent<BoxCollider2D>().offset = new Vector2(0, 0);
                textObj.GetComponent<BoxCollider2D>().size = new Vector2(40, 30);
            }
            else {
                DestroyImmediate(gameObject.transform.parent.GetComponent<IO>().textCanvas);
            }

        }
    }
}