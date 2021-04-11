using UnityEngine;

public class Pin : MonoBehaviour {
    public enum highOrLow {
        HIGH,
        LOW
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
    private bool pastValue;

    private void Awake() {
        manager = GameObject.FindGameObjectWithTag("startup").GetComponent<WireManager>();
        value = false;
    }

    private void Update() {
        if(Time.timeScale == 0)return;
        var currentValue = value;
        if (currentValue != pastValue && gate != null) {
            //print("value changed!");
            gate.noChange = true;
        } else if (currentValue != pastValue && io != null) {
            //print("value changed!");
            io.noChange = true;
        }

        pastValue = currentValue;
    }

    private void OnMouseEnter() {
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
                        wire.GetComponent<Wire>().endWire(this);
                    }
                }
            }
            else {
                if (!gateOrIO) {
                    if (io.IOType == IO.type.IN && manager.getConnectedWiresPin(this).Count > 0) {
                    }
                    else {
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