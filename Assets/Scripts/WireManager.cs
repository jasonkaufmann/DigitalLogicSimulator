using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class WireManager : MonoBehaviour {
    public List<GameObject> wires;
    public GameObject wire;

    public void Awake() {
        wires = new List<GameObject>();
    }

    public void createWireFromClick(List<Vector2> anchorPoints, Vector3 mousePos, Pin leftPin, Pin startPin) {
        List<Vector2> anchorCopy = new List<Vector2>(anchorPoints);
        if (startPin.IO_Type == Pin.inOut.INPUT) {
            anchorCopy.Reverse();
        }
        Vector2 closestPoint = new Vector2();
        float closestDistance = float.PositiveInfinity;
        for(int i = 0; i < anchorCopy.Count - 1; i++) {
            float distance = Vector2.Distance(anchorCopy[i], new Vector2(mousePos.x, mousePos.y));
            if (distance < closestDistance) {
                closestDistance = distance;
                closestPoint = anchorCopy[i];
            }
        }

        int index = anchorCopy.IndexOf(closestPoint);
        GameObject newObj = new GameObject();
        newObj.name = "wire";
        newObj.AddComponent<Wire>();
        newObj.GetComponent<Wire>().anchorPoints = new List<Vector2>(anchorCopy.Take(index+1));
        newObj.GetComponent<Wire>().anchorPoints.Add(mousePos);
        newObj.GetComponent<Wire>().startPin = leftPin;
        if (!leftPin.gateOrIO)
            newObj.GetComponent<Wire>().startIO = leftPin.io;
        else
            newObj.GetComponent<Wire>().startGate = startPin.gate;
        newObj.GetComponent<Wire>().currentState = Wire.state.WAITING;
        newObj.GetComponent<Wire>().drawPoints = new List<Vector2>();
        addWire(newObj);

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
            if (wire.GetComponent<Wire>().startGate == gate || wire.GetComponent<Wire>().endGate == gate)
                connectedWires.Add(wire);
        print(connectedWires);
        return connectedWires;
    }

    public List<GameObject> getConnectedWiresPin(Pin pin) {
        var connectedWires = new List<GameObject>();
        foreach (GameObject wire in wires)
            if (wire.GetComponent<Wire>().startPin == pin || wire.GetComponent<Wire>().endPin == pin)
                connectedWires.Add(wire);

        return connectedWires;
    }

    public void propogateHighToAllConnectedWires(Pin pin) {
        var wires = getConnectedWiresPin(pin);
        foreach (GameObject wire in wires) wire.GetComponent<Wire>().propogateSignalHigh();
    }

    public void propogateLowToAllConnectedWires(Pin pin) {
        var wires = getConnectedWiresPin(pin);
        foreach (GameObject wire in wires) wire.GetComponent<Wire>().propogateSignalLow();
    }

    public List<GameObject> getConnectedWireIO(IO io) {
        var connectedWires = new List<GameObject>();
        foreach (GameObject wire in wires)
            if (wire.GetComponent<Wire>().startIO == io || wire.GetComponent<Wire>().endIO == io)
                connectedWires.Add(wire);

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