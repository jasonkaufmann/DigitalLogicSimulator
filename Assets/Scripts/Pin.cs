using System;
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

    private void Update() {
        bool currentValue = value;
        if (currentValue != pastValue && gate!=null) {
            print("value changed!");
            gate.noChange = true;
        }
        pastValue = currentValue;
    }

    private void OnMouseOver() {
        if (Input.GetMouseButtonDown(0)) {
            GameObject wire = manager.connectionInProgress();
            if (wire) {
                if (wire.GetComponent<Wire>().startPin.IO_Type == IO_Type &&
                    wire.GetComponent<Wire>().startPin.gateOrIO != gateOrIO)
                    wire.GetComponent<Wire>().endWire(this);
                else if (wire.GetComponent<Wire>().startPin.IO_Type != IO_Type &&
                         wire.GetComponent<Wire>().startPin.gateOrIO == gateOrIO)
                    wire.GetComponent<Wire>().endWire(this);
            }
            else {
                if (true) manager.createWire(this);
            }
        }
    }
}