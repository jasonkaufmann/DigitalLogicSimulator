using System;
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
        AND,
        AND3,
        NAND,
        NOR
    }

    public bool snapIOToNearestPin = true;
    public state currentState;
    public List<GameObject> connectedWires;
    public WireManager manager;
    public List<Pin> pins;
    public bool noChange;
    public bool createdFromCopy;

    public type gateType;

    // Start is called before the first frame update
    private void Start() {
        manager = GameObject.FindGameObjectWithTag("startup").GetComponent<WireManager>();
        currentState = createdFromCopy ? state.INSCENE : state.PLACING;
        pins = new List<Pin>(gameObject.GetComponentsInChildren<Pin>());
        foreach (Pin pin in pins) {
            pin.gate = this;
            pin.gateOrIO = true;
        }

        noChange = true;
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
                var closestPins = getClosestPinGate();
                if (closestPins.Item1 != null && closestPins.Item2 != null) {
                    
                    Transform pinObjectPosition = closestPins.Item2.gameObject.transform;
                    Vector3 diff = closestPins.Item1.gameObject.transform.position - pinObjectPosition.position;
                    //sDebug.DrawLine(pinObjectPosition.position, closestPins.Item1.gameObject.transform.position);
                    if (Mathf.Abs(diff.x) > Mathf.Abs(diff.y)) {
                        float pintoCenterDistance = closestPins.Item1.transform.position.y - transform.position.y;
                        if (closestPins.Item1.gameObject.transform.position.y <
                            pinObjectPosition.position.y + pinObjectPosition.localScale.y / 2 &&
                            closestPins.Item1.gameObject.transform.position.y >
                            pinObjectPosition.position.y - pinObjectPosition.localScale.y / 2)
                            transform.position = new Vector3(transform.position.x,
                                pinObjectPosition.position.y - pintoCenterDistance,
                                transform.position.z);
                    }
                    else {
                        float pintoCenterDistance = closestPins.Item1.transform.position.x - transform.position.x;
                        if (closestPins.Item1.gameObject.transform.position.x <
                            pinObjectPosition.position.x + pinObjectPosition.localScale.x / 2 &&
                            closestPins.Item1.gameObject.transform.position.x >
                            pinObjectPosition.position.x - pinObjectPosition.localScale.x / 2)
                            transform.position = new Vector3(pinObjectPosition.position.x - pintoCenterDistance,
                                transform.position.y,
                                transform.position.z);
                    }
                }
            }

            if (Input.GetMouseButtonDown(0)) currentState = state.INSCENE;
        }
        else if (currentState == state.WAITING) {
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
        else if (gateType == type.NAND) {
            if (!(pins[0].value && pins[1].value) && noChange && !pins[2].value) {
                pins[2].value = true;
                if (manager.getConnectedWiresPin(pins[2]).Count > 0) manager.propogateHighToAllConnectedWires(pins[2]);

                noChange = false;
            }
            else if (pins[0].value && pins[1].value && noChange && pins[2].value) {
                pins[2].value = false;
                if (manager.getConnectedWiresPin(pins[2]).Count > 0) manager.propogateLowToAllConnectedWires(pins[2]);
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
        else if (gateType == type.NOR) {
            if (!(pins[0].value || pins[1].value) && noChange && !pins[2].value) {
                pins[2].value = true;
                manager.propogateHighToAllConnectedWires(pins[2]);
                noChange = false;
            }
            else if ((pins[0].value || pins[1].value) && noChange && pins[2].value) {
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
        else if (gateType == type.AND3) {
            if (pins[0].value && pins[1].value && pins[2].value && noChange && !pins[3].value) {
                pins[3].value = true;
                manager.propogateHighToAllConnectedWires(pins[3]);
                noChange = false;
            }
            else if (!(pins[0].value && pins[1].value && pins[2].value) && noChange && pins[3].value) {
                pins[3].value = false;
                manager.propogateLowToAllConnectedWires(pins[3]);
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

    private Tuple<Pin, Pin> getClosestPinGate() {
        var otherPins = new List<Pin>(FindObjectsOfType<Pin>());
        var bestFriends = new Tuple<Pin, Pin>(null, null);
        var closestDistance = float.PositiveInfinity;
        foreach (Pin pin in pins)
        foreach (Pin otherPin in otherPins) {
            Vector3 position = pin.gameObject.transform.position;
            var distance = Vector3.Distance(otherPin.transform.position, position);
            if (distance < closestDistance && pin != otherPin && pin.IO_Type != otherPin.IO_Type &&
                !pins.Contains(otherPin)) {
                closestDistance = distance;
                bestFriends = new Tuple<Pin, Pin>(pin, otherPin);
            }
        }


        return bestFriends;
    }
}