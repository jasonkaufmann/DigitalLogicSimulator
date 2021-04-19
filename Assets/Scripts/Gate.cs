using System;
using System.Collections.Generic;
using UnityEngine;

public class Gate : MonoBehaviour {
    public enum state {
        PLACING,
        INSCENE,
        WAITING,
        COPYING
    }

    public enum type {
        NOT,
        OR,
        AND,
        AND3,
        NAND,
        NOR,
        SR,
        DLATCH,
        FLIPFLOP,
        TRISTATE,
        XOR
    }

    public bool snapIOToNearestPin = true;
    public state currentState;
    public List<GameObject> connectedWires;
    public WireManager manager;
    public List<Pin> pins;
    public bool noChange;
    public bool createdFromCopy;
    public bool loadedFromFile = false;

    public type gateType;
    private Vector3 difference;
    private bool firstFrame = true;
    private Vector3 lastDragPoint, currentDragPoint;
    private Camera moveCam;
    private Pin.highOrLow pastactualValue;
    private Vector3 copyOffset;

    // Start is called before the first frame update
    private void Start() {
        manager = GameObject.FindGameObjectWithTag("startup").GetComponent<WireManager>();
        currentState = createdFromCopy ? state.COPYING : state.PLACING;
        if (loadedFromFile && !createdFromCopy) {
            currentState = state.INSCENE;
        }
        Camera moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
        Vector3 movePos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
            Mathf.Abs(moveCam.transform.position.z + 10)));
        copyOffset = transform.position - movePos;
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
            if (Input.GetKeyDown(KeyCode.R)) transform.Rotate(Vector3.forward, 45);
            if (GameObject.FindGameObjectWithTag("manageCanvas").GetComponent<ControlsManager>().snapBool) {
                var closestPins = getClosestPinGate();
                if (closestPins.Item1.Item1 != null && closestPins.Item1.Item2 != null  && closestPins.Item2.Item1 != null && closestPins.Item2.Item2 != null) {
                    Debug.DrawLine(closestPins.Item1.Item1.transform.position,
                        closestPins.Item1.Item2.transform.position, Color.red);
                    Debug.DrawLine(closestPins.Item2.Item1.transform.position,
                        closestPins.Item2.Item2.transform.position, Color.blue);
                    var pintoCenterDistanceY = closestPins.Item1.Item1.transform.position.y - transform.position.y;
                    if (closestPins.Item1.Item1.gameObject.transform.position.y <
                        closestPins.Item1.Item2.gameObject.transform.position.y +
                        closestPins.Item1.Item2.gameObject.transform.localScale.y / 2 &&
                        closestPins.Item1.Item1.gameObject.transform.position.y >
                        closestPins.Item1.Item2.gameObject.transform.position.y -
                        closestPins.Item1.Item2.gameObject.transform.localScale.y / 2)
                        transform.position = new Vector3(transform.position.x,
                            closestPins.Item1.Item2.gameObject.transform.position.y - pintoCenterDistanceY,
                            transform.position.z);

                    var pintoCenterDistanceX = closestPins.Item2.Item1.transform.position.x - transform.position.x;
                    if (closestPins.Item2.Item1.gameObject.transform.position.x <
                        closestPins.Item2.Item2.gameObject.transform.position.x +
                        closestPins.Item2.Item2.gameObject.transform.localScale.x / 2 &&
                        closestPins.Item2.Item1.gameObject.transform.position.x >
                        closestPins.Item2.Item2.gameObject.transform.position.x -
                        closestPins.Item2.Item2.gameObject.transform.localScale.x / 2)
                        transform.position = new Vector3(
                            closestPins.Item2.Item2.gameObject.transform.position.x - pintoCenterDistanceX,
                            transform.position.y,
                            transform.position.z);
                }
            }

            if (Input.GetMouseButtonDown(0)) currentState = state.INSCENE;
        }
        else if (currentState == state.COPYING) {
            Camera moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
            Vector3 movePos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                Mathf.Abs(moveCam.transform.position.z + 10)));
            transform.position = movePos + copyOffset;
            if (Input.GetKeyDown(KeyCode.R)) transform.Rotate(Vector3.forward, 45);
            if (GameObject.FindGameObjectWithTag("manageCanvas").GetComponent<ControlsManager>().snapBool) {
                var closestPins = getClosestPinGate();
                Debug.DrawLine(closestPins.Item1.Item1.transform.position, closestPins.Item1.Item2.transform.position,
                    Color.red);
                Debug.DrawLine(closestPins.Item2.Item1.transform.position, closestPins.Item2.Item2.transform.position,
                    Color.blue);
                if (closestPins.Item1.Item1 != null && closestPins.Item1.Item2 != null &&
                    closestPins.Item2.Item1 != null && closestPins.Item2.Item2 != null) {
                    var pintoCenterDistanceY = closestPins.Item1.Item1.transform.position.y - transform.position.y;
                    if (closestPins.Item1.Item1.gameObject.transform.position.y <
                        closestPins.Item1.Item2.gameObject.transform.position.y +
                        closestPins.Item1.Item2.gameObject.transform.localScale.y / 2 &&
                        closestPins.Item1.Item1.gameObject.transform.position.y >
                        closestPins.Item1.Item2.gameObject.transform.position.y -
                        closestPins.Item1.Item2.gameObject.transform.localScale.y / 2)
                        transform.position = new Vector3(transform.position.x,
                            closestPins.Item1.Item2.gameObject.transform.position.y - pintoCenterDistanceY,
                            transform.position.z);

                    var pintoCenterDistanceX = closestPins.Item2.Item1.transform.position.x - transform.position.x;
                    if (closestPins.Item2.Item1.gameObject.transform.position.x <
                        closestPins.Item2.Item2.gameObject.transform.position.x +
                        closestPins.Item2.Item2.gameObject.transform.localScale.x / 2 &&
                        closestPins.Item2.Item1.gameObject.transform.position.x >
                        closestPins.Item2.Item2.gameObject.transform.position.x -
                        closestPins.Item2.Item2.gameObject.transform.localScale.x / 2)
                        transform.position = new Vector3(
                            closestPins.Item2.Item2.gameObject.transform.position.x - pintoCenterDistanceX,
                            transform.position.y,
                            transform.position.z);
                }
            }

            if (Input.GetMouseButtonDown(0)) currentState = state.INSCENE;
        }
        else if (currentState == state.WAITING) {
            currentState = state.PLACING;
        }

        if (gateType == type.AND) {
            if (pins[0].actualValue == Pin.highOrLow.HIGH && pins[1].actualValue == Pin.highOrLow.HIGH && noChange && pins[2].actualValue == Pin.highOrLow.LOW) {
                pins[2].actualValue = Pin.highOrLow.HIGH;
                manager.propogateHighToAllConnectedWires(pins[2]);
                noChange = false;
            }
            else if (!(pins[0].actualValue == Pin.highOrLow.HIGH && pins[1].actualValue == Pin.highOrLow.HIGH) && noChange && pins[2].actualValue == Pin.highOrLow.HIGH) {
                pins[2].actualValue = Pin.highOrLow.LOW;
                manager.propogateLowToAllConnectedWires(pins[2]);
                noChange = false;
            }
        }
        else if (gateType == type.NAND) {
            if (!(pins[0].actualValue == Pin.highOrLow.HIGH && pins[1].actualValue == Pin.highOrLow.HIGH) && noChange && pins[2].actualValue == Pin.highOrLow.LOW) {
                pins[2].actualValue = Pin.highOrLow.HIGH;
                if (manager.getConnectedWiresPin(pins[2]).Count > 0) manager.propogateHighToAllConnectedWires(pins[2]);

                noChange = false;
            }
            else if (pins[0].actualValue == Pin.highOrLow.HIGH && pins[1].actualValue == Pin.highOrLow.HIGH && noChange && pins[2].actualValue == Pin.highOrLow.HIGH) {
                pins[2].actualValue = Pin.highOrLow.LOW;
                if (manager.getConnectedWiresPin(pins[2]).Count > 0) manager.propogateLowToAllConnectedWires(pins[2]);
                noChange = false;
            }
        }
        else if (gateType == type.OR) {
            if ((pins[0].actualValue == Pin.highOrLow.HIGH || pins[1].actualValue == Pin.highOrLow.HIGH) && noChange && pins[2].actualValue == Pin.highOrLow.LOW) {
                pins[2].actualValue = Pin.highOrLow.HIGH;
                manager.propogateHighToAllConnectedWires(pins[2]);
                noChange = false;
            }
            else if (!(pins[0].actualValue == Pin.highOrLow.HIGH || pins[1].actualValue == Pin.highOrLow.HIGH) && noChange && pins[2].actualValue == Pin.highOrLow.HIGH) {
                pins[2].actualValue = Pin.highOrLow.LOW;
                manager.propogateLowToAllConnectedWires(pins[2]);
                noChange = false;
            }
        }
        else if (gateType == type.XOR) {
            if (((pins[0].actualValue == Pin.highOrLow.HIGH && pins[1].actualValue == Pin.highOrLow.LOW) || (pins[0].actualValue == Pin.highOrLow.LOW && pins[1].actualValue == Pin.highOrLow.HIGH)) && noChange && pins[2].actualValue == Pin.highOrLow.LOW) {
                //print("go high");
                pins[2].actualValue = Pin.highOrLow.HIGH;
                manager.propogateHighToAllConnectedWires(pins[2]);
                noChange = false;
            }
            else if (((pins[0].actualValue == Pin.highOrLow.LOW && pins[1].actualValue == Pin.highOrLow.LOW) || pins[0].actualValue == Pin.highOrLow.HIGH && pins[1].actualValue == Pin.highOrLow.HIGH) && noChange &&
                     pins[2].actualValue == Pin.highOrLow.HIGH) {
                pins[2].actualValue = Pin.highOrLow.LOW;
                //print("go low");
                manager.propogateLowToAllConnectedWires(pins[2]);
                noChange = false;
            }
        }
        else if (gateType == type.NOR) {
            if (!(pins[0].actualValue == Pin.highOrLow.HIGH || pins[1].actualValue == Pin.highOrLow.HIGH) && noChange && pins[2].actualValue == Pin.highOrLow.LOW) {
                pins[2].actualValue = Pin.highOrLow.HIGH;
                manager.propogateHighToAllConnectedWires(pins[2]);
                noChange = false;
            }
            else if ((pins[0].actualValue == Pin.highOrLow.HIGH || pins[1].actualValue == Pin.highOrLow.HIGH) && noChange && pins[2].actualValue == Pin.highOrLow.HIGH) {
                pins[2].actualValue = Pin.highOrLow.LOW;
                manager.propogateLowToAllConnectedWires(pins[2]);
                noChange = false;
            }
        }
        else if (gateType == type.NOT) {
            if (pins[0].actualValue == Pin.highOrLow.HIGH && noChange) {
                pins[1].actualValue = Pin.highOrLow.LOW;
                manager.propogateLowToAllConnectedWires(pins[1]);
                noChange = false;
            }
            else if (pins[0].actualValue == Pin.highOrLow.LOW && noChange) {
                pins[1].actualValue = Pin.highOrLow.HIGH;
                manager.propogateHighToAllConnectedWires(pins[1]);
                noChange = false;
            }
        }
        else if (gateType == type.AND3) {
            if (pins[0].actualValue == Pin.highOrLow.HIGH && pins[1].actualValue == Pin.highOrLow.HIGH && pins[2].actualValue == Pin.highOrLow.HIGH && noChange && pins[3].actualValue == Pin.highOrLow.LOW) {
                pins[3].actualValue = Pin.highOrLow.HIGH;
                manager.propogateHighToAllConnectedWires(pins[3]);
                noChange = false;
            }
            else if (!(pins[0].actualValue == Pin.highOrLow.HIGH && pins[1].actualValue == Pin.highOrLow.HIGH && pins[2].actualValue == Pin.highOrLow.HIGH) && noChange && pins[3].actualValue == Pin.highOrLow.HIGH) {
                pins[3].actualValue = Pin.highOrLow.LOW;
                manager.propogateLowToAllConnectedWires(pins[3]);
                noChange = false;
            }
        }
        else if (gateType == type.SR) {
            if (pins[0].actualValue == Pin.highOrLow.HIGH && pins[1].actualValue == Pin.highOrLow.LOW && pins[2].actualValue == Pin.highOrLow.LOW && noChange) {
                pins[2].actualValue = Pin.highOrLow.HIGH;
                pins[3].actualValue = Pin.highOrLow.LOW;
                manager.propogateHighToAllConnectedWires(pins[2]);
                manager.propogateLowToAllConnectedWires(pins[3]);
                noChange = false;
            }
            else if (pins[0].actualValue == Pin.highOrLow.LOW && pins[1].actualValue == Pin.highOrLow.HIGH && pins[3].actualValue == Pin.highOrLow.LOW && noChange) {
                pins[3].actualValue = Pin.highOrLow.HIGH;
                pins[2].actualValue = Pin.highOrLow.LOW;
                manager.propogateLowToAllConnectedWires(pins[2]);
                manager.propogateHighToAllConnectedWires(pins[3]);
                noChange = false;
            }
        }
        else if (gateType == type.DLATCH) {
            if (pins[0].actualValue == Pin.highOrLow.HIGH && pins[1].actualValue == Pin.highOrLow.HIGH && pins[2].actualValue == Pin.highOrLow.LOW && noChange) {
                pins[2].actualValue = Pin.highOrLow.HIGH;
                pins[3].actualValue = Pin.highOrLow.LOW;
                manager.propogateHighToAllConnectedWires(pins[2]);
                manager.propogateLowToAllConnectedWires(pins[3]);
                noChange = false;
            }
            else if (pins[0].actualValue == Pin.highOrLow.LOW && pins[1].actualValue == Pin.highOrLow.HIGH && pins[3].actualValue == Pin.highOrLow.LOW && noChange) {
                pins[3].actualValue = Pin.highOrLow.HIGH;
                pins[2].actualValue = Pin.highOrLow.LOW;
                manager.propogateLowToAllConnectedWires(pins[2]);
                manager.propogateHighToAllConnectedWires(pins[3]);
                noChange = false;
            }
        }
        else if (gateType == type.FLIPFLOP) {
            if (pins[1].actualValue != pastactualValue  && pins[1].actualValue == Pin.highOrLow.HIGH) {
                if (pins[0].actualValue == Pin.highOrLow.HIGH && pins[2].actualValue == Pin.highOrLow.LOW)
                    manager.propogateHighToAllConnectedWires(pins[2]);
                else if (pins[0].actualValue == Pin.highOrLow.LOW && pins[2].actualValue == Pin.highOrLow.HIGH) manager.propogateLowToAllConnectedWires(pins[2]);
                pins[2].actualValue = pins[0].actualValue;
            }

            pastactualValue = pins[1].actualValue;
        }
        else if (gateType == type.TRISTATE) {
            if (pins[1].actualValue == Pin.highOrLow.HIGH && pins[0].actualValue != pins[2].actualValue) {
                if (pins[0].actualValue == Pin.highOrLow.HIGH) {
                    pins[2].actualValue = Pin.highOrLow.HIGH;
                    manager.removeHIZToAllConnectedWires(pins[2]);
                    manager.propogateHighToAllConnectedWires(pins[2]);
                }
            }
            if (pins[1].actualValue == Pin.highOrLow.HIGH && noChange) {
                print("got high change");
                if (pins[0].actualValue == Pin.highOrLow.HIGH) {
                    //print("tri state high");
                    pins[2].actualValue = Pin.highOrLow.HIGH;
                    manager.removeHIZToAllConnectedWires(pins[2]);
                    manager.propogateHighToAllConnectedWires(pins[2]);
                    
                }
                else if (pins[0].actualValue == Pin.highOrLow.LOW) {
                    //print("tri state low");
                    pins[2].actualValue = Pin.highOrLow.LOW;
                    //print(pastactualValue);
                    manager.removeHIZToAllConnectedWires(pins[2]);
                    if (pastactualValue == Pin.highOrLow.HIGH) {
                        manager.propogateLowToAllConnectedWires(pins[2]);
                    }
                }

                pins[2].actualValue = pins[0].actualValue;
                pastactualValue = pins[2].actualValue;
                noChange = false;
            }
            else if (pins[1].actualValue == Pin.highOrLow.LOW && noChange) {
                print("got low change");
                pins[2].actualValue = Pin.highOrLow.HIZ;
                pastactualValue = pins[2].actualValue;
                manager.setHIZToAllConnectedWires(pins[2]);
                noChange = false;
            }

            
        }


        if (Input.GetKeyDown(KeyCode.Escape) && currentState == state.PLACING) DestroyImmediate(gameObject);
    }

    private void OnMouseOver() {
        if (Input.GetMouseButtonDown(0) && currentState == state.INSCENE) {
            currentState = state.WAITING;
        }
        else if (Input.GetMouseButtonDown(2)) {
            connectedWires = manager.getConnectedWiresGate(this);
            foreach (GameObject wire in connectedWires) manager.removeWire(wire);
            DestroyImmediate(gameObject);
        }
    }

    private Tuple<Tuple<Pin, Pin>, Tuple<Pin, Pin>> getClosestPinGate() {
        var bestFriendsX = new Tuple<Pin, Pin>(null, null);
        var bestFriendsY = new Tuple<Pin, Pin>(null, null);
        var otherPins = new List<Pin>(FindObjectsOfType<Pin>());
        var closestDistanceX = float.PositiveInfinity;
        var closestDistanceY = float.PositiveInfinity;
        foreach (Pin pin in pins)
        foreach (Pin pinInQuestion in otherPins)
            if (!pins.Contains(pinInQuestion)) {
                Vector3 position = pinInQuestion.gameObject.transform.position;
                Vector3 diff = position - pin.transform.position;
                if (Mathf.Abs(diff.x) < closestDistanceX) {
                    closestDistanceX = Mathf.Abs(diff.x);
                    bestFriendsX = Tuple.Create(pin, pinInQuestion);
                }

                if (Mathf.Abs(diff.y) < closestDistanceY) {
                    closestDistanceY = Mathf.Abs(diff.y);
                    bestFriendsY = Tuple.Create(pin, pinInQuestion);
                }
            }

        return Tuple.Create(bestFriendsY, bestFriendsX);
    }
}