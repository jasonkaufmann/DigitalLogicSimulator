using System.Collections.Generic;
using UnityEngine;

public class IO : MonoBehaviour {
    public enum logic {
        HIGH,
        LOW
    }

    public enum state {
        PLACING,
        INSCENE,
        WAITING,
        CHANGE
    }

    public enum type {
        IN,
        OUT
    }

    public bool snapIOToNearestPin = true;

    public List<GameObject> connectedWires;
    public WireManager manager;
    public Pin pin;
    public type IOType;
    public bool noChange;
    public bool connectingWire;

    public logic log;

    public state currentState;
    public bool createdFromCopy;

    // Start is called before the first frame update
    private void Start() {
        noChange = true;
        manager = GameObject.FindGameObjectWithTag("startup").GetComponent<WireManager>();
        currentState = createdFromCopy ? state.INSCENE : state.PLACING;
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
            if (Input.GetKeyDown(KeyCode.R)) {
                transform.Rotate(Vector3.forward, 45);
            }
            if (snapIOToNearestPin) {
                Pin closestPin = getClosestPin();
                Transform pinObjectPosition = closestPin.gameObject.transform;
                Vector3 diff = gameObject.transform.position - pinObjectPosition.position;
                if (Mathf.Abs(diff.x) > Mathf.Abs(diff.y)) {
                    if (gameObject.transform.position.y <
                        pinObjectPosition.position.y + pinObjectPosition.localScale.y / 2 &&
                        gameObject.transform.position.y >
                        pinObjectPosition.position.y - pinObjectPosition.localScale.y / 2) {
                        transform.position = new Vector3(transform.position.x, pinObjectPosition.position.y,
                            transform.position.z);
                    }
                }
                else {
                    float pintoCenterDistance = pin.transform.position.x - transform.position.x;
                    if (pin.transform.position.x <
                        pinObjectPosition.position.x + pinObjectPosition.localScale.x / 2 &&
                        pin.transform.position.x >
                        pinObjectPosition.position.x - pinObjectPosition.localScale.x / 2) {
                        print("snap it");
                        transform.position = new Vector3(pinObjectPosition.position.x - pintoCenterDistance, transform.position.y, 
                            transform.position.z);
                    }
                }

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
        else if (currentState == state.INSCENE) {
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
        }
        else if (currentState == state.CHANGE) {
        }
        else if (currentState == state.WAITING) {
            currentState = state.PLACING;
        }

        if (Input.GetKeyDown(KeyCode.Escape) && currentState == state.PLACING) Destroy(gameObject);
    }

    private void OnMouseOver() {
        if (Input.GetMouseButtonDown(0) && currentState == state.INSCENE) {
            currentState = state.WAITING;
        }
        else if (Input.GetMouseButtonDown(2)) {
            connectedWires = manager.getConnectedWireIO(this);
            foreach (GameObject wire in connectedWires) manager.removeWire(wire);
            Destroy(gameObject);
        }
    }

    private Pin getClosestPin() {
        var pins = new List<Pin>(FindObjectsOfType<Pin>());
        Pin closestPin = this.pin;
        var closestDistance = float.PositiveInfinity;
        foreach (Pin pin in pins) {
            //print(pin.name);
            Vector3 position = pin.gameObject.transform.position;
            var distance = Vector3.Distance(gameObject.transform.position, position);
            if (distance < closestDistance && pin.IO_Type != this.pin.IO_Type) {
                closestDistance = distance;
                closestPin = pin;
            }
        }

        return closestPin;
    }
}