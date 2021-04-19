using System;
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
        float largestAngle = Single.NegativeInfinity;
        List<Vector2> endPoints = new List<Vector2>(anchorPoints.Take(2));
        foreach (var point1 in anchorPoints) {
            foreach (var point2 in anchorPoints) {
                Vector2 dist1 = new Vector2(mousePos.x, mousePos.y) - point1;
                Vector2 dist2 = new Vector2(mousePos.x, mousePos.y) - point2;
                float value = Vector2.Angle(dist1, dist2);
                if (value > largestAngle) {
                    largestAngle = value;
                    endPoints[0] = point1;
                    endPoints[1] = point2;
                }
            }
        }

        int index1 = anchorPoints.IndexOf(endPoints[0]);
        int index2 = anchorPoints.IndexOf(endPoints[1]);
        var anchorCopy = new List<Vector2>(anchorPoints);
        int index;
        if (startPin.IO_Type == Pin.inOut.INPUT) {
            //reverse it
            print("reverse it");
            anchorCopy.Reverse();
            index = anchorCopy.IndexOf(index1>index2 ? endPoints[0] : endPoints[1]);
        }
        else {
            index = anchorCopy.IndexOf(index1<index2 ? endPoints[0] : endPoints[1]);
        }
        
        GameObject newObj = new GameObject();
        newObj.name = "wire";
        newObj.AddComponent<Wire>();
        newObj.GetComponent<Wire>().anchorPoints = new List<Vector2>(anchorCopy.Take(index + 1));
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
            if ((wire.GetComponent<Wire>().startPin == pin || wire.GetComponent<Wire>().endPin == pin) &&
                wire.GetComponent<Wire>().currentState != Wire.state.WAITING &&
                wire.GetComponent<Wire>().currentState != Wire.state.STARTED)
                connectedWires.Add(wire);

        return connectedWires;
    }

    public void propogateHighToAllConnectedWires(Pin pin) {
        var wires = getConnectedWiresPin(pin);
        foreach (GameObject wire in wires)
            if (wire.GetComponent<Wire>().currentState
                != Wire.state.STARTED)
                wire.GetComponent<Wire>().propogateSignalHigh();
    }

    public void setHIZToAllConnectedWires(Pin pin) {
        var wires = getConnectedWiresPin(pin);
        foreach (GameObject wire in wires)
            if (wire.GetComponent<Wire>().currentState
                != Wire.state.STARTED)
                wire.GetComponent<Wire>().setHIZ();
    }

    public void removeHIZToAllConnectedWires(Pin pin) {
        var wires = getConnectedWiresPin(pin);
        foreach (GameObject wire in wires)
            if (wire.GetComponent<Wire>().currentState
                != Wire.state.STARTED)
                wire.GetComponent<Wire>().removeHIZ();
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
        DestroyImmediate(wire);
    }
}