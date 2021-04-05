using System.Collections.Generic;
using UnityEngine;

public class WireManager: MonoBehaviour {
    public List<GameObject> wires;

    public void Awake() {
        wires = new List<GameObject>();
    }

    public GameObject connectionInProgress() {
        if (wires != null)
            foreach (GameObject wire in wires)
                if (wire.GetComponent<Wire>().currentState == Wire.state.STARTED)
                    return wire;
        return null;
    }

    public List<GameObject> getConnectedWiresGate(Gate gate) {
        var connectedWires = new List<GameObject>();
        foreach (GameObject wire in wires)
            if (wire.GetComponent<Wire>().startGate == gate || wire.GetComponent<Wire>().endGate == gate) {
                connectedWires.Add(wire);
            }
        print(connectedWires);
        return connectedWires;
    }

    public List<GameObject> getConnectedWiresPin(Pin pin) {
        var connectedWires = new List<GameObject>();
        foreach (GameObject wire in wires)
            if (wire.GetComponent<Wire>().startPin == pin || wire.GetComponent<Wire>().endPin == pin) {
                connectedWires.Add(wire);
            }

        return connectedWires;
    }

    public void propogateHighToAllConnectedWires(Pin pin) {
        List<GameObject> wires = getConnectedWiresPin(pin);
        foreach (GameObject wire in wires) {
            wire.GetComponent<Wire>().propogateSignalHigh();
        }
    }
    
    public void propogateLowToAllConnectedWires(Pin pin) {
        List<GameObject> wires = getConnectedWiresPin(pin);
        foreach (GameObject wire in wires) {
            wire.GetComponent<Wire>().propogateSignalLow();
        }
    }
    public List<GameObject> getConnectedWireIO(IO io) {
        var connectedWires = new List<GameObject>();
        foreach (GameObject wire in wires)
            if (wire.GetComponent<Wire>().startIO == io || wire.GetComponent<Wire>().endIO == io) {
                connectedWires.Add(wire);
            }

        return connectedWires;
    }

    public void createWire(Pin pin) {
        GameObject wireObject = new GameObject("wire");
        wireObject.AddComponent<Wire>();
        wireObject.GetComponent<Wire>().startWire(pin);
        addWire(wireObject);
    }

    public void addWire(GameObject wire) {
        wires.Add(wire);
    }

    public void removeWire(GameObject wire) {
        wires.Remove(wire);
        Destroy(wire);
    }
}