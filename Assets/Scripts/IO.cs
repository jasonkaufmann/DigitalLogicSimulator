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

    public List<GameObject> connectedWires;
    public WireManager manager;
    public Pin pin;
    public type IOType;
    public bool noChange;
    public bool connectingWire;

    public logic log;

    public state currentState;
    public bool createdFromCopy = false;

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
        if(Time.timeScale == 0)return;
        if (currentState == state.PLACING) {
            Camera moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
            Vector3 movePos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                Mathf.Abs(moveCam.transform.position.z + 10)));
            transform.position = movePos;
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
                //print(pin.value);
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
}