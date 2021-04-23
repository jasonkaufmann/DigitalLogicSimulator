using System;
using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography;
using UnityEngine;
using UnityEngine.UIElements;
using Slider = UnityEngine.UI.Slider;

public class Wire : MonoBehaviour {
    public enum state {
        STARTED,
        FINISHED,
        HIZ,
        DRAWING,
        UNDRAWING,
        WAITING,
        DRAWIMMEDIATE,
        UNDRAWIMMEDIATE
    }

    public Pin startPin;
    public Pin endPin;
    public Pin leftPin;
    public Pin rightPin;
    public Gate startGate;
    public Gate endGate;
    public IO startIO;
    public IO endIO;
    public float curveSize = 0.1f;
    public MeshCollider meshCollide;
    public WireManager manager;
    public GameObject empty;
    public List<Vector2> anchorPoints;
    public int propogateResolution;
    private bool preHiZvalue;


    public List<Vector2> drawPoints;
    public List<Vector2> drawPointsCopy1;
    public List<Vector2> drawPointsCopy2;
    public List<Vector2> drawPointsRed;

    public int resolution = 1000;
    public state currentState;
    public bool lineDrawn = false;

    private float distance;
    private Vector3 drawingPoint;
    private bool highOrLow;
    public bool immediateSim = true;
    
    private int j;
    private int k;
    private LineRenderer line;
    private LineRenderer lineRed;

    private int steps;
    public int timestep1;
    public int timestep2;
    
    public bool loadedFromFile = false;

    public Camera moveCam; 
    public bool createdFromCopy = false;
    private Mesh mesh;
    private bool rightAngleDrawDirection = false;
    private List<Vector2> pastAnchorPoints;

    private void Start() {
        moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
        pastAnchorPoints = new List<Vector2>(2);
        pastAnchorPoints.Add(new Vector2(0, 0));
        pastAnchorPoints.Add(new Vector2(0, 0));
        mesh = new Mesh();
        
        if (!createdFromCopy) {
            line = gameObject.AddComponent<LineRenderer>();
            line.material = new Material(Shader.Find("Sprites/Default"));
            line.material.color = new Color(82f / 255f, 81f / 255f, 81f / 255f, 1f);
            line.startWidth = 0.01f;
            line.endWidth = 0.01f;
            line.sortingOrder = 0;
            meshCollide = gameObject.AddComponent<MeshCollider>();
            manager = GameObject.FindGameObjectWithTag("startup").GetComponent<WireManager>();
            empty = new GameObject();
            empty.transform.parent = gameObject.transform;
            lineRed = empty.AddComponent<LineRenderer>();
            //lineRed.positionCount = 0;
            lineRed.material = new Material(Shader.Find("Sprites/Default"));
            lineRed.material.color = new Color(236f / 255f, 34f / 255f, 56f / 255f, 1f);
            lineRed.sortingOrder = 1;
            lineRed.startWidth = 0.01f;
            lineRed.endWidth = 0.01f;
        }
        else {
            DestroyImmediate(gameObject.GetComponent<LineRenderer>());
            DestroyImmediate(gameObject.transform.GetChild(0).gameObject.GetComponent<LineRenderer>());
            line = gameObject.AddComponent<LineRenderer>();
            line.material = new Material(Shader.Find("Sprites/Default"));
            line.material.color = new Color(82f / 255f, 81f / 255f, 81f / 255f, 1f);
            line.startWidth = 0.01f;
            line.endWidth = 0.01f;
            line.sortingOrder = 0;
            meshCollide = gameObject.AddComponent<MeshCollider>();
            manager = GameObject.FindGameObjectWithTag("startup").GetComponent<WireManager>();
            lineRed = empty.AddComponent<LineRenderer>();
            //lineRed.positionCount = 0;
            lineRed.material = new Material(Shader.Find("Sprites/Default"));
            lineRed.material.color = new Color(236f / 255f, 34f / 255f, 56f / 255f, 1f);
            lineRed.sortingOrder = 1;
            lineRed.startWidth = 0.01f;
            lineRed.endWidth = 0.01f;
            manager.addWire(this.gameObject);
            updatePinInfo();
            immediateSim = GameObject.FindGameObjectWithTag("manageCanvas").GetComponent<ControlsManager>().immediateSim;
            if (leftPin.actualValue == Pin.highOrLow.HIGH) propogateSignalHigh();
        }
        if (loadedFromFile && !createdFromCopy) {
            if (!this.leftPin.gateOrIO)
                this.startIO = this.leftPin.io;
            else
                this.startGate = this.leftPin.gate;
            if (!this.rightPin.gateOrIO)
                this.endIO = this.rightPin.io;
            else
                this.endGate = this.rightPin.gate;
            GenerateDrawPoints();
            line.positionCount = drawPoints.Count;
            for (var i = 0; i < drawPoints.Count; i++)
                line.SetPosition(i, new Vector3(drawPoints[i].x, drawPoints[i].y, -10));
        }
        line.BakeMesh(mesh, GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>(), true);
        meshCollide.sharedMesh = mesh;
        StartCoroutine(meshUpdater());
    }

    IEnumerator meshUpdater() {
        while (true) {
            updateMesh();
            yield return new WaitForSeconds(0.5f);
        }
    }
    // Update is called once per frame
    private void Update() {
        if(Time.timeScale == 0)return;
        propogateResolution = 105 - (int)GameObject.FindGameObjectWithTag("slider").GetComponent<Slider>().value;
        immediateSim = GameObject.FindGameObjectWithTag("manageCanvas").GetComponent<ControlsManager>().immediateSim;
        if (currentState == state.STARTED) {
            line.material.color = Color.black;
            Vector3 mousePos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                Mathf.Abs(moveCam.transform.position.z + 10)));
            if (GameObject.FindGameObjectWithTag("manageCanvas").GetComponent<ControlsManager>().raBool) {
                if (anchorPoints.Count > 1) {
                    anchorPoints.RemoveAt(anchorPoints.Count - 1);
                }
                Vector2 diff = new Vector2(mousePos.x, mousePos.y) - anchorPoints[anchorPoints.Count - 1];
                if (rightAngleDrawDirection) {
                    anchorPoints.Add(new Vector2(mousePos.x, anchorPoints[anchorPoints.Count - 1].y));
                    anchorPoints.Add(mousePos);
                }
                else {
                    anchorPoints.Add(new Vector2(anchorPoints[anchorPoints.Count - 1].x,mousePos.y));
                    anchorPoints.Add(mousePos);
                }

                if (Input.GetKeyDown(KeyCode.Space)) {
                    rightAngleDrawDirection = !rightAngleDrawDirection;
                }
                
            }
            else {
                anchorPoints.Add(mousePos);
            }

            GenerateDrawPoints();
            line.positionCount = drawPoints.Count;
            for (var i = 0; i <= drawPoints.Count - 1; i++)
                line.SetPosition(i, new Vector3(drawPoints[i].x, drawPoints[i].y, -10));
            if (anchorPoints.Count > 0) anchorPoints.RemoveAt(anchorPoints.Count - 1);
            if (Input.GetMouseButtonDown(0)) {
                if (GameObject.FindGameObjectWithTag("manageCanvas").GetComponent<ControlsManager>().raBool) {
                    anchorPoints.Add(mousePos);
                    rightAngleDrawDirection = !rightAngleDrawDirection;
                }
                anchorPoints.Add(mousePos);
            }
            if (Input.GetMouseButtonDown(2)) manager.removeWire(gameObject);
        }
        else if (currentState == state.WAITING) {
            currentState = state.STARTED;
        }
        else if (currentState == state.FINISHED) {
            anchorPoints[0] = startPin.transform.position;
            anchorPoints[anchorPoints.Count - 1] = endPin.transform.position;
            if (anchorPoints[0] != pastAnchorPoints[0] || anchorPoints[anchorPoints.Count - 1] != pastAnchorPoints[1]) {
                GenerateDrawPoints();
                line.positionCount = drawPoints.Count;
                for (var i = 0; i < drawPoints.Count; i++)
                    line.SetPosition(i, new Vector3(drawPoints[i].x, drawPoints[i].y, -10));
            }
            if (lineDrawn) {
                lineRed.positionCount = drawPoints.Count;
                for (var i = 0; i <= drawPoints.Count - 1; i++)
                    lineRed.SetPosition(i, new Vector3(drawPoints[i].x, drawPoints[i].y, -10));
            }
           
        }
        else if (currentState == state.DRAWING) {
            anchorPoints[0] = startPin.transform.position;
            anchorPoints[anchorPoints.Count - 1] = endPin.transform.position;
            if (anchorPoints[0] != pastAnchorPoints[0] || anchorPoints[anchorPoints.Count - 1] != pastAnchorPoints[1]) {
                GenerateDrawPoints();
                line.positionCount = drawPoints.Count;
                for (var i = 0; i < drawPoints.Count; i++)
                    line.SetPosition(i, new Vector3(drawPoints[i].x, drawPoints[i].y, -10));
            }
            GenerateDrawPointsRed();
            lineRed.positionCount = drawPointsRed.Count;
            for (var i = 0; i <= drawPointsRed.Count - 1; i++)
                lineRed.SetPosition(i, new Vector3(drawPointsRed[i].x, drawPointsRed[i].y, -10));
        }
        else if (currentState == state.UNDRAWING) {
            anchorPoints[0] = startPin.transform.position;
            anchorPoints[anchorPoints.Count - 1] = endPin.transform.position;
            if (anchorPoints[0] != pastAnchorPoints[0] || anchorPoints[anchorPoints.Count - 1] != pastAnchorPoints[1]) {
                GenerateDrawPoints();
                line.positionCount = drawPoints.Count;
                for (var i = 0; i < drawPoints.Count; i++)
                    line.SetPosition(i, new Vector3(drawPoints[i].x, drawPoints[i].y, -10));
            }
            GenerateDrawPointsRed();
            GenerateUnDrawPointsRed();
            lineRed.positionCount = drawPointsRed.Count;
            for (var i = 0; i < drawPointsRed.Count; i++)
                lineRed.SetPosition(i, new Vector3(drawPointsRed[i].x, drawPointsRed[i].y, -10));
        }
        else if (currentState == state.DRAWIMMEDIATE) {
            rightPin.actualValue = Pin.highOrLow.HIGH;
            lineDrawn = true;
            timestep1 = 1000;
            currentState = state.FINISHED;
        } 
        else if (currentState == state.UNDRAWIMMEDIATE) {
            lineDrawn = false;
            rightPin.actualValue = Pin.highOrLow.LOW;
            lineRed.positionCount = 0;
            currentState = state.FINISHED;
        } 
        else if (currentState == state.HIZ) {
            anchorPoints[0] = startPin.transform.position;
            anchorPoints[anchorPoints.Count - 1] = endPin.transform.position;
            if (anchorPoints[0] != pastAnchorPoints[0] || anchorPoints[anchorPoints.Count - 1] != pastAnchorPoints[1]) {
                GenerateDrawPoints();
                line.positionCount = drawPoints.Count;
                for (var i = 0; i < drawPoints.Count; i++)
                    line.SetPosition(i, new Vector3(drawPoints[i].x, drawPoints[i].y, -10));
            }
        }
        pastAnchorPoints[0] = anchorPoints[0];
        pastAnchorPoints[1] = anchorPoints[anchorPoints.Count - 1];

        if (Input.GetKeyDown(KeyCode.Escape) && currentState == state.STARTED) manager.removeWire(gameObject);
    }

    private void OnMouseEnter() {
        if (currentState == state.FINISHED || currentState == state.DRAWING || currentState == state.UNDRAWING) {
            line.startWidth = 0.02f;
            line.endWidth = 0.02f;
            lineRed.startWidth = 0.02f;
            lineRed.endWidth = 0.02f;
        }
    }

    private void OnMouseExit() {
        line.startWidth = 0.01f;
        line.endWidth = 0.01f;
        lineRed.startWidth = 0.01f;
        lineRed.endWidth = 0.01f;
    }

    private void OnMouseOver() {
        if ((Input.GetMouseButtonDown(2) || Input.GetKeyDown(KeyCode.Escape)) && currentState != state.STARTED) {
            rightPin.actualValue = Pin.highOrLow.LOW;
            if (!leftPin.gateOrIO) {
                if (leftPin.io.IOType != IO.type.OUT) leftPin.actualValue = Pin.highOrLow.LOW;
            }
            else {
                leftPin.actualValue = Pin.highOrLow.LOW;
            }

            manager.removeWire(gameObject);
        } else if (Input.GetMouseButtonDown(0) && currentState != state.STARTED && !manager.connectionInProgress()) {
            Vector3 mousePos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                Mathf.Abs(moveCam.transform.position.z + 10)));
            if(!leftPin.mouseOver)
                manager.createWireFromClick(anchorPoints, mousePos, leftPin, startPin);
        }
    }

    public void propogateSignalHigh() {
        lineDrawn = false;
        timestep1 = 0;
        highOrLow = true;
        
        rightPin.actualValue = Pin.highOrLow.LOW;

        drawPointsRed = new List<Vector2>();

        if (lineRed != null) {
            lineRed.positionCount = 0;
        }

        //print("got high command");
        //print(leftPin.name);

        currentState = state.DRAWING;
        if (immediateSim) {
            //print("draw immediate");
            currentState = state.DRAWIMMEDIATE;
        } else if (leftPin.io != null) {
            if (leftPin.io.IOType == IO.type.CLOCK) {
                currentState = state.DRAWIMMEDIATE;
            }
        }
    }

    public void setHIZ() {
        if (lineRed != null) {
            lineRed.positionCount = 0;
        }

        if (line != null) {
            line.material.color = Color.black;
        }
        
        lineDrawn = false;

        rightPin.actualValue = Pin.highOrLow.HIZ;
        currentState = state.HIZ;
    }

    public void removeHIZ() {
        //print("remove HIZ");
        if (line != null) {
            line.material.color = new Color(82f / 255f, 81f / 255f, 81f / 255f, 1f);
        }

        preHiZvalue = false;
        rightPin.actualValue = leftPin.actualValue;
        currentState = state.FINISHED;
        if(leftPin.actualValue == Pin.highOrLow.HIGH) propogateSignalHigh();
    }

    public void propogateSignalLow() {
        //print("got low signal");
        drawPointsRed = new List<Vector2>();
        timestep2 = 0;
        lineDrawn = false;
        highOrLow = false;
        currentState = state.UNDRAWING;
        //print(immediateSim);

        if (immediateSim) {
            currentState = state.UNDRAWIMMEDIATE;
        } else if (leftPin.io != null) {
            if (leftPin.io.IOType == IO.type.CLOCK) {
                currentState = state.UNDRAWIMMEDIATE;
            }
        }

        //print(currentState);
    }

    private void updateMesh() {
        line.BakeMesh(mesh, GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>(), true);
        meshCollide.sharedMesh = mesh;
    }

    public void startWire(Pin pin) {
        drawPoints = new List<Vector2>();
        anchorPoints = new List<Vector2>();
        startPin = pin;
        if (!pin.gateOrIO)
            startIO = pin.io;
        else
            startGate = pin.gate;
        anchorPoints.Add(pin.transform.position);
        //print("FLAG");
        //print(anchorPoints);
        currentState = state.WAITING;
    }

    public void updatePinInfo() {
        if (startPin.IO_Type == Pin.inOut.OUTPUT) {
            leftPin = startPin;
            rightPin = endPin;
        }
        else {
            leftPin = endPin;
            rightPin = startPin;
        }
    }
    public void endWire(Pin pin) {
        endPin = pin;
        updatePinInfo();
        if (leftPin.gateOrIO) {
            startGate = leftPin.gate;
        }
        else {
            startIO = leftPin.io;
        }
        if (rightPin.gateOrIO) {
            endGate = rightPin.gate;
        }
        else {
            endIO = rightPin.io;
        }
        //print("FLAG");
        anchorPoints.Add(endPin.transform.position);
        currentState = state.FINISHED;
        line.material.color = new Color(82f / 255f, 81f / 255f, 81f / 255f, 1f);
        if (leftPin.actualValue == Pin.highOrLow.HIGH) propogateSignalHigh();
    }

    private void GenerateUnDrawPointsRed() {
        drawPointsCopy2 = drawPoints;
        j = 0;
        k = 0;
        steps = 0;
        distance = Vector2.Distance(drawPointsCopy2[0], drawPointsCopy2[1]);
        steps = Mathf.RoundToInt(distance * propogateResolution);

        for (var i = 0; i < timestep2; i++) {
            if (steps > 0) {
                drawingPoint = Lerp(drawPointsCopy2[j], drawPointsCopy2[j + 1], k / (float) steps);
                k++;
                drawPointsRed.Remove(drawingPoint);
            }
            else {
                drawPointsRed.Remove(drawPointsCopy2[j]);
            }

            if (k == steps) {
                j++;
                if (j > drawPoints.Count - 2) {
                    //print("undrawn");
                    lineDrawn = false;
                    lineRed.positionCount = 0;
                    drawPointsRed.Clear();
                    currentState = state.FINISHED;
                    rightPin.actualValue = Pin.highOrLow.LOW;
                    return;
                }

                distance = Vector2.Distance(drawPointsCopy2[j], drawPointsCopy2[j + 1]);
                steps = Mathf.RoundToInt(distance * propogateResolution);
                k = 0;
            }
        }

        timestep2++;
    }

    private void GenerateDrawPointsRed() {
        drawPointsCopy1 = drawPoints;
        drawPointsRed.Clear();
        if (startPin.IO_Type == Pin.inOut.INPUT) {
            drawPointsCopy1.Reverse();
        }

        j = 0;
        k = 0;
        steps = 0;
        distance = Vector2.Distance(drawPointsCopy1[0], drawPointsCopy1[1]);
        steps = Mathf.RoundToInt(distance * propogateResolution);

        for (var i = 0; i < timestep1; i++) {
            if (steps > 0) {
                drawingPoint = Lerp(drawPointsCopy1[j], drawPointsCopy1[j + 1], k / (float) steps);
                k++;
                drawPointsRed.Add(drawingPoint);
            }
            else {
                drawPointsRed.Add(drawPointsCopy1[j]);
            }

            if (k == steps) {
                j++;
                if (j > drawPoints.Count - 2) {
                    drawPointsRed.Add(rightPin.transform.position);
                    //drawPointsRed.Add(rightPin.transform.position);
                    if (currentState != state.UNDRAWING) {
                        lineDrawn = true;
                        currentState = state.FINISHED;
                    }
                    //print(rightPin.name);
                    rightPin.actualValue = Pin.highOrLow.HIGH;
                    return;
                }

                distance = Vector2.Distance(drawPointsCopy1[j], drawPointsCopy1[j + 1]);
                steps = Mathf.RoundToInt(distance * propogateResolution);
                k = 0;
            }
        }

        timestep1++;
    }

    private void GenerateDrawPoints() {
        drawPoints.Clear();

        drawPoints.Add(anchorPoints[0]);

        for (var i = 1; i < anchorPoints.Count - 1; i++) {
            Vector2 targetPoint = anchorPoints[i];
            Vector2 targetDir = (anchorPoints[i] - anchorPoints[i - 1]).normalized;
            var dstToTarget = (anchorPoints[i] - anchorPoints[i - 1]).magnitude;
            var dstToCurveStart = Mathf.Max(dstToTarget - curveSize, dstToTarget / 2);

            Vector2 nextTarget = anchorPoints[i + 1];
            Vector2 nextTargetDir = (anchorPoints[i + 1] - anchorPoints[i]).normalized;
            var nextLineLength = (anchorPoints[i + 1] - anchorPoints[i]).magnitude;

            Vector2 curveStartPoint = anchorPoints[i - 1] + targetDir * dstToCurveStart;
            Vector2 curveEndPoint = targetPoint + nextTargetDir * Mathf.Min(curveSize, nextLineLength / 2);

            // Bezier
            for (var j = 0; j < resolution; j++) {
                var t = j / (resolution - 1f);
                Vector2 a = Vector2.Lerp(curveStartPoint, targetPoint, t);
                Vector2 b = Vector2.Lerp(targetPoint, curveEndPoint, t);
                Vector2 p = Vector2.Lerp(a, b, t);

                if ((p - drawPoints[drawPoints.Count - 1]).sqrMagnitude > 0.0001f) drawPoints.Add(p);
            }
        }

        drawPoints.Add(anchorPoints[anchorPoints.Count - 1]);
    }

    private Vector3 Lerp(Vector3 start, Vector3 end, float t) {
        return start + (end - start) * t;
    }
}