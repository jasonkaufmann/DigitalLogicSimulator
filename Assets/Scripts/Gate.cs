using System.Collections.Generic;
using UnityEngine;

public class Gate : MonoBehaviour {
    public enum state {
        PLACING,
        INSCENE,
        WAITING
    }

    public enum type {
        NOT,
        OR,
        AND
    }

    public state currentState;
    public List<GameObject> connectedWires;
    public WireManager manager;
    public List<Pin> pins;
    public bool noChange;

    public type gateType;

    // Start is called before the first frame update
    private void Start() {
        manager = GameObject.FindGameObjectWithTag("startup").GetComponent<WireManager>();
        currentState = state.PLACING;
        pins = new List<Pin>(gameObject.GetComponentsInChildren<Pin>());
        foreach (Pin pin in pins) {
            pin.gate = this;
            pin.gateOrIO = true;
        }

        noChange = true;
    }

    // Update is called once per frame
    private void Update() {
        if (currentState == state.PLACING) {
            Camera moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
            Vector3 movePos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                Mathf.Abs(moveCam.transform.position.z + 10)));
            transform.position = movePos;
            if (Input.GetMouseButtonDown(0)) currentState = state.INSCENE;
        } else if (currentState == state.WAITING) {
            currentState = state.PLACING;
        }

        if (gateType == type.AND) {
            if (pins[0].value && pins[1].value && noChange && !pins[2].value) {
                pins[2].value = true;
                manager.propogateHighToAllConnectedWires(pins[2]);
                noChange = false;
            }
            else if (!(pins[0].value && pins[1].value) && noChange && pins[2].value) {
                pins[2].value = false;
                manager.propogateLowToAllConnectedWires(pins[2]);
                noChange = false;
            }
        }
        else if (gateType == type.OR) {
            if ((pins[0].value || pins[1].value) && noChange && !pins[2].value) {
                pins[2].value = true;
                manager.propogateHighToAllConnectedWires(pins[2]);
                noChange = false;
            }
            else if (!(pins[0].value || pins[1].value) && noChange && pins[2].value) {
                pins[2].value = false;
                manager.propogateLowToAllConnectedWires(pins[2]);
                noChange = false;
            }
        }
        else if (gateType == type.NOT) {
            if (pins[0].value && noChange) {
                pins[1].value = false;
                manager.propogateLowToAllConnectedWires(pins[1]);
                noChange = false;
            }
            else if (!pins[0].value && noChange) {
                pins[1].value = true;
                manager.propogateHighToAllConnectedWires(pins[1]);
                noChange = false;
            }
        }

        

        if (Input.GetKeyDown(KeyCode.Escape) && currentState == state.PLACING) Destroy(gameObject);
    }

    private void OnMouseOver() {
        if (Input.GetMouseButtonDown(0) && currentState == state.INSCENE) {
            currentState = state.WAITING;
        }
        else if (Input.GetMouseButtonDown(2)) {
            connectedWires = manager.getConnectedWiresGate(this);
            foreach (GameObject wire in connectedWires) manager.removeWire(wire);
            Destroy(gameObject);
        }
    }
}