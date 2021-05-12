using UnityEngine;

public class Pin : MonoBehaviour {
    public enum highOrLow {
        LOW,
        HIGH,
        HIZ
    }

    public enum inOut {
        INPUT,
        OUTPUT
    }

    public inOut IO_Type;
    public bool value;
    public WireManager manager;
    public Gate gate;
    public IO io;
    public bool gateOrIO;
    public bool mouseOver;
    public highOrLow actualValue;
    public bool firstFrame = true;
    private highOrLow pastValue;

    private void Awake() {
        manager = GameObject.FindGameObjectWithTag("startup").GetComponent<WireManager>();
        actualValue = highOrLow.LOW;
    }

    private void Update() {
        if (Time.timeScale == 0) return;
        highOrLow currentValue = actualValue;
        if ((firstFrame || currentValue != pastValue) && gate != null) {
            //print("value changed!");
            gate.noChange = true;
            firstFrame = false;
        }
        else if ((firstFrame || currentValue != pastValue) && io != null) {
            //print("value changed!");
            io.noChange = true;
            firstFrame = false;
        }

        pastValue = currentValue;
    }

    private void OnMouseEnter() {
        mouseOver = true;
        if (gateOrIO) {
            if (gate.GetComponent<Gate>().currentState != Gate.state.PLACING)
                GetComponent<SpriteRenderer>().color = Color.white;
        }
        else {
            if (io.GetComponent<IO>().currentState != IO.state.PLACING)
                GetComponent<SpriteRenderer>().color = Color.white;
        }
    }

    private void OnMouseExit() {
        mouseOver = false;
        GetComponent<SpriteRenderer>().color = Color.black;
    }

    private void OnMouseOver() {
        if (Input.GetMouseButtonDown(0)) {
            GameObject wire = manager.connectionInProgress();
            if (wire) {
                if (wire.GetComponent<Wire>().startPin.IO_Type != IO_Type) {
                    if (IO_Type == inOut.INPUT && manager.getConnectedWiresPin(this).Count > 0) {
                    }
                    else {
                        print("end wire");
                        wire.GetComponent<Wire>().endWire(this);
                    }
                }
            }
            else {
                if (!gateOrIO) {
                    if (io.IOType == IO.type.IN && manager.getConnectedWiresPin(this).Count > 0) {
                    }
                    else {
                        if (io.textField == null)
                            manager.createWire(this);
                    }
                }
                else {
                    if (IO_Type == inOut.INPUT && manager.getConnectedWiresPin(this).Count > 0) {
                    }
                    else {
                        manager.createWire(this);
                    }
                }
            }
        }
    }
}