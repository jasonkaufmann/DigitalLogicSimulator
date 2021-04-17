using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class IO : MonoBehaviour {
    public enum logic {
        HIGH,
        LOW
    }

    public enum state {
        PLACING,
        INSCENE,
        WAITING,
        CHANGE,
        COPYING
    }

    public enum type {
        IN,
        OUT,
        CLOCK
    }

    public bool snapIOToNearestPin = true;

    public List<GameObject> connectedWires;
    public WireManager manager;
    public Pin pin;
    public type IOType;
    public bool noChange;
    public bool connectingWire;
    private Vector3 lastDragPoint, currentDragPoint;
    private Camera moveCam;
    private bool firstFrame = true;
    private Vector3 difference;
    private Vector3 copyOffset;
    private float lastTime = 0;
    public float clockFrequency = 1; //in Hz
    public bool clockOn = false;
    public GameObject textField;
    public bool loadedFromFile = false;

    public logic log;

    public state currentState;
    public bool createdFromCopy;

    // Start is called before the first frame update
    private void Start() {
        noChange = true;
        manager = GameObject.FindGameObjectWithTag("startup").GetComponent<WireManager>();
        currentState = createdFromCopy ? state.COPYING : state.PLACING;
        if (loadedFromFile) {
            currentState = state.INSCENE;
        }
        Camera moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
        Vector3 movePos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
            Mathf.Abs(moveCam.transform.position.z + 10)));
        copyOffset = transform.position - movePos;
        pin = gameObject.GetComponentInChildren<Pin>();
        pin.io = this;
        pin.gateOrIO = false;
        if (IOType == type.IN)
            pin.IO_Type = Pin.inOut.INPUT;
        else
            pin.IO_Type = Pin.inOut.OUTPUT;
        if (!createdFromCopy) {
            gameObject.transform.Find("circle").gameObject.AddComponent<IOButton>();
            log = logic.LOW;
        }
    }

    // Update is called once per frame
    private void Update() {
        if (Time.timeScale == 0) return;
        if (currentState == state.PLACING) {
            Camera moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
            Vector3 movePos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                Mathf.Abs(moveCam.transform.position.z + 10)));
            transform.position = movePos;
            if (Input.GetKeyDown(KeyCode.R)) transform.Rotate(Vector3.forward, 45);
            if (GameObject.FindGameObjectWithTag("manageCanvas").GetComponent<ControlsManager>().snapBool) {
                (Pin, Pin) closestPins = getClosestPinXY();
                Debug.DrawLine(pin.transform.position, closestPins.Item1.transform.position, Color.red);
                Debug.DrawLine(pin.transform.position, closestPins.Item2.transform.position, Color.blue);
                var pintoCenterDistanceY = pin.transform.position.y - transform.position.y;
                if (pin.transform.position.y <
                    closestPins.Item1.transform.position.y + closestPins.Item1.transform.localScale.y / 2 &&
                    pin.transform.position.y >
                    closestPins.Item1.transform.position.y - closestPins.Item1.transform.localScale.y / 2)
                    transform.position = new Vector3(transform.position.x,
                        closestPins.Item1.transform.position.y - pintoCenterDistanceY,
                        transform.position.z);

                var pintoCenterDistanceX = pin.transform.position.x - transform.position.x;
                if (pin.transform.position.x <
                    closestPins.Item2.transform.position.x + closestPins.Item2.transform.localScale.x / 2 &&
                    pin.transform.position.x >
                    closestPins.Item2.transform.position.x - closestPins.Item2.transform.localScale.x / 2)
                    transform.position = new Vector3(closestPins.Item2.transform.position.x - pintoCenterDistanceX,
                        transform.position.y,
                        transform.position.z);
            }

            if (Input.GetMouseButtonDown(0)) currentState = state.INSCENE;
            if (IOType == type.IN) {
                if (manager.getConnectedWireIO(this).Count == 0) pin.value = false;
                if (pin.value)
                    log = logic.HIGH;
                else
                    log = logic.LOW;
            }
        }
        else if (currentState == state.COPYING) {
            Camera moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
            Vector3 movePos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                Mathf.Abs(moveCam.transform.position.z + 10)));
            transform.position = movePos + copyOffset;
            if (Input.GetKeyDown(KeyCode.R)) transform.Rotate(Vector3.forward, 45);
            if (GameObject.FindGameObjectWithTag("manageCanvas").GetComponent<ControlsManager>().snapBool) {
                (Pin, Pin) closestPins = getClosestPinXY();
                Debug.DrawLine(pin.transform.position, closestPins.Item1.transform.position, Color.red);
                Debug.DrawLine(pin.transform.position, closestPins.Item2.transform.position, Color.blue);
                var pintoCenterDistanceY = pin.transform.position.y - transform.position.y;
                if (pin.transform.position.y <
                    closestPins.Item1.transform.position.y + closestPins.Item1.transform.localScale.y / 2 &&
                    pin.transform.position.y >
                    closestPins.Item1.transform.position.y - closestPins.Item1.transform.localScale.y / 2)
                    transform.position = new Vector3(transform.position.x,
                        closestPins.Item1.transform.position.y - pintoCenterDistanceY,
                        transform.position.z);

                var pintoCenterDistanceX = pin.transform.position.x - transform.position.x;
                if (pin.transform.position.x <
                    closestPins.Item2.transform.position.x + closestPins.Item2.transform.localScale.x / 2 &&
                    pin.transform.position.x >
                    closestPins.Item2.transform.position.x - closestPins.Item2.transform.localScale.x / 2)
                    transform.position = new Vector3(closestPins.Item2.transform.position.x - pintoCenterDistanceX,
                        transform.position.y,
                        transform.position.z);
            }

            if (Input.GetMouseButtonDown(0)) currentState = state.INSCENE;
            if (IOType == type.IN) {
                if (manager.getConnectedWireIO(this).Count == 0) pin.value = false;
                if (pin.value)
                    log = logic.HIGH;
                else
                    log = logic.LOW;
            }
        }

        if (textField != null) {
            textField.transform.position = gameObject.transform.GetChild(0).transform.position +
                                           new Vector3(0, gameObject.transform.localScale.y/8, 0);
            if (Input.GetKeyDown(KeyCode.Return)) {
                clockFrequency = float.Parse(textField.GetComponent<TMP_InputField>().text);
            }
        }
        
        if (IOType == type.CLOCK && clockOn) {
            //print("clock running");
            float currentTime = Time.time;
            float timeDiff = currentTime - lastTime;
            if (timeDiff >= 1 / clockFrequency / 2) {
                lastTime = currentTime;
                var wires = manager.getConnectedWireIO(this);
                if (log == logic.LOW) {
                    log = logic.HIGH;
                    pin.value = true;
                    foreach (GameObject wire in wires) {
                        if(wire.GetComponent<Wire>().currentState != Wire.state.STARTED)
                            wire.GetComponent<Wire>().propogateSignalHigh();
                    }
                }
                else {
                    log = logic.LOW;
                    pin.value = false;
                    foreach (GameObject wire in wires) {
                        if(wire.GetComponent<Wire>().currentState != Wire.state.STARTED)
                            wire.GetComponent<Wire>().propogateSignalLow();
                    }
                }
            }
        }
        if (IOType == type.OUT) {
            var wires = manager.getConnectedWireIO(this);
            if (log == logic.HIGH && wires.Count > 0 && !manager.connectionInProgress() && noChange) {
                pin.value = true;
                foreach (GameObject wire in wires) wire.GetComponent<Wire>().propogateSignalHigh();
                noChange = false;
            }
            else if (log == logic.LOW && wires.Count > 0 && !manager.connectionInProgress() && noChange) {
                pin.value = false;
                foreach (GameObject wire in wires) {
                    if (wire.GetComponent<Wire>().lineDrawn ||
                        wire.GetComponent<Wire>().currentState == Wire.state.DRAWING)
                        wire.GetComponent<Wire>().propogateSignalLow();
                    noChange = false;
                }
            }
        }
        else {
            if (manager.getConnectedWireIO(this).Count == 0) pin.value = false;
            if (pin.value)
                log = logic.HIGH;
            else
                log = logic.LOW;
        }
        
        if (currentState == state.CHANGE) {
        }
        else if (currentState == state.WAITING) {
            currentState = state.PLACING;
        }

        if (Input.GetKeyDown(KeyCode.Escape) && currentState == state.PLACING) DestroyImmediate(gameObject);
    }

    private void OnMouseOver() {
        if (Input.GetMouseButtonDown(0) && currentState == state.INSCENE) {
            currentState = state.WAITING;
        }
        else if (Input.GetMouseButtonDown(2)) {
            connectedWires = manager.getConnectedWireIO(this);
            foreach (GameObject wire in connectedWires) manager.removeWire(wire);
            DestroyImmediate(gameObject);
            if (textField != null) {
                DestroyImmediate(textField);
            }
        }
    }

    private (Pin, Pin) getClosestPinXY() {
        var pins = new List<Pin>(FindObjectsOfType<Pin>());
        Pin closestPinX = pin;
        Pin closestPinY = pin;
        var closestDistanceX = float.PositiveInfinity;
        var closestDistanceY = float.PositiveInfinity;
        foreach (Pin pinInQuestion in pins) //print(pinInQuestion.name);
            if (pinInQuestion != pin) {
                Vector3 position = pinInQuestion.gameObject.transform.position;
                Vector3 diff = position - pin.transform.position;
                if (Mathf.Abs(diff.x) < closestDistanceX) {
                    closestDistanceX = Mathf.Abs(diff.x);
                    closestPinX = pinInQuestion;
                }

                if (Mathf.Abs(diff.y) < closestDistanceY) {
                    closestDistanceY = Mathf.Abs(diff.y);
                    closestPinY = pinInQuestion;
                }
            }
        return (closestPinY, closestPinX);
    }
}