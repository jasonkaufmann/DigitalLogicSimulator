using System.Collections.Generic;
using System.Security.Cryptography;
using UnityEngine;
using UnityEngine.UI;

public class Wire : MonoBehaviour {
    public enum state {
        STARTED,
        FINISHED,
        DRAWING,
        UNDRAWING,
        WAITING
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


    public List<Vector2> drawPoints;
    public List<Vector2> drawPointsRed;

    public int resolution = 1000;
    public state currentState;
    public bool lineDrawn = false;
    private readonly int numSteps = 30;

    private float distance;
    private Vector3 drawingPoint;
    private Vector3 end;
    private bool highOrLow;
    private List<Vector3> interpolatedPoints;
    private float iterator1;
    private float iterator2;
    private int j;
    private int k;
    private LineRenderer line;
    private List<Vector3> linePoints;
    private LineRenderer lineRed;
    private Vector3 start;
    private float startTime;
    private int steps;
    private int timestep1;
    private int timestep2;
    private Vector3 undrawingPoint;
    public bool createdFromCopy = false;

    private void Start() {
        
        if (!createdFromCopy) {
            line = gameObject.AddComponent<LineRenderer>();
            line.material = new Material(Shader.Find("Sprites/Default"));
            line.startWidth = 0.01f;
            line.endWidth = 0.01f;
            line.sortingOrder = 0;
            meshCollide = gameObject.AddComponent<MeshCollider>();
            manager = GameObject.FindGameObjectWithTag("startup").GetComponent<WireManager>();
            empty = new GameObject();
            empty.transform.parent = gameObject.transform;
            lineRed = empty.AddComponent<LineRenderer>();
            lineRed.positionCount = 0;
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
            //print(line);
            line.material = new Material(Shader.Find("Sprites/Default"));
            line.startWidth = 0.01f;
            line.endWidth = 0.01f;
            line.sortingOrder = 0;
            meshCollide = gameObject.AddComponent<MeshCollider>();
            manager = GameObject.FindGameObjectWithTag("startup").GetComponent<WireManager>();
            lineRed = empty.AddComponent<LineRenderer>();
            lineRed.positionCount = 0;
            lineRed.material = new Material(Shader.Find("Sprites/Default"));
            lineRed.material.color = new Color(236f / 255f, 34f / 255f, 56f / 255f, 1f);
            lineRed.sortingOrder = 1;
            lineRed.startWidth = 0.01f;
            lineRed.endWidth = 0.01f;
            manager.addWire(this.gameObject);
            updatePinInfo();
            print(leftPin.value);
            if (leftPin.value) propogateSignalHigh();
        }
    }

    // Update is called once per frame
    private void Update() {
        updateMesh();
        propogateResolution = 105 - (int)GameObject.FindGameObjectWithTag("slider").GetComponent<Slider>().value;
        if (currentState == state.STARTED) {
            Camera moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
            Vector3 mousePos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                Mathf.Abs(moveCam.transform.position.z + 10)));

            anchorPoints.Add(mousePos);
            GenerateDrawPoints();
            line.positionCount = drawPoints.Count;
            for (var i = 0; i <= drawPoints.Count - 1; i++)
                line.SetPosition(i, new Vector3(drawPoints[i].x, drawPoints[i].y, -10));
            if (anchorPoints.Count > 0) anchorPoints.RemoveAt(anchorPoints.Count - 1);
            if (Input.GetMouseButtonDown(0)) anchorPoints.Add(mousePos);
            if (Input.GetMouseButtonDown(2)) manager.removeWire(gameObject);
        }
        else if (currentState == state.WAITING) {
            currentState = state.STARTED;
        }
        else if (currentState == state.FINISHED) {
            anchorPoints[0] = startPin.transform.position;
            anchorPoints[anchorPoints.Count - 1] = endPin.transform.position;
            GenerateDrawPoints();
            line.positionCount = drawPoints.Count;
            for (var i = 0; i <= drawPoints.Count - 1; i++)
                line.SetPosition(i, new Vector3(drawPoints[i].x, drawPoints[i].y, -10));
            if (lineDrawn) {
                lineRed.positionCount = drawPoints.Count;
                for (var i = 0; i <= drawPoints.Count - 1; i++)
                    lineRed.SetPosition(i, new Vector3(drawPoints[i].x, drawPoints[i].y, -10));
            }
        }
        else if (currentState == state.DRAWING) {
            anchorPoints[0] = startPin.transform.position;
            anchorPoints[anchorPoints.Count - 1] = endPin.transform.position;
            GenerateDrawPoints();
            line.positionCount = drawPoints.Count;
            for (var i = 0; i <= drawPoints.Count - 1; i++)
                line.SetPosition(i, new Vector3(drawPoints[i].x, drawPoints[i].y, -10));
            GenerateDrawPointsRed();
            lineRed.positionCount = drawPointsRed.Count;
            for (var i = 0; i <= drawPointsRed.Count - 1; i++)
                lineRed.SetPosition(i, new Vector3(drawPointsRed[i].x, drawPointsRed[i].y, -10));
        }
        else if (currentState == state.UNDRAWING) {
            //print("undrawing");
            anchorPoints[0] = startPin.transform.position;
            anchorPoints[anchorPoints.Count - 1] = endPin.transform.position;
            GenerateDrawPoints();
            line.positionCount = drawPoints.Count;
            for (var i = 0; i <= drawPoints.Count - 1; i++)
                line.SetPosition(i, new Vector3(drawPoints[i].x, drawPoints[i].y, -10));
            /*lineRed.positionCount = drawPoints.Count;
            for (var i = 0; i <= drawPoints.Count - 1; i++)
                    lineRed.SetPosition(i, new Vector3(drawPoints[i].x, drawPoints[i].y, -10));*/
            //drawPointsRed = drawPoints;
            GenerateDrawPointsRed();
            GenerateUnDrawPointsRed();
            lineRed.positionCount = drawPointsRed.Count;
            for (var i = 0; i <= drawPointsRed.Count - 1; i++)
                lineRed.SetPosition(i, new Vector3(drawPointsRed[i].x, drawPointsRed[i].y, -10));
        }

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
        if (Input.GetMouseButtonDown(2) && currentState != state.STARTED) {
            rightPin.value = false;
            if (!leftPin.gateOrIO) {
                if (leftPin.io.IOType != IO.type.OUT) leftPin.value = false;
            }
            else {
                leftPin.value = false;
            }

            manager.removeWire(gameObject);
        }
    }

    public void propogateSignalHigh() {
        lineDrawn = false;
        timestep1 = 0;
        //print("got high command");
        highOrLow = true;
        rightPin.value = false;
        j = 0;
        k = 0;
        drawPointsRed = new List<Vector2>();
        lineRed.positionCount = 0;
        currentState = state.DRAWING;
    }

    public void propogateSignalLow() {
        timestep2 = 0;
        //print("got low command");
        highOrLow = false;
        iterator2 = 0;
        currentState = state.UNDRAWING;
    }

    private void updateMesh() {
        Mesh mesh = new Mesh();
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
        anchorPoints.Add(endPin.transform.position);
        currentState = state.FINISHED;
        if (leftPin.value) propogateSignalHigh();
    }

    private void GenerateUnDrawPointsRed() {
        var drawPointsNew = new List<Vector2>(drawPoints);
        //drawPointsRed.Clear();
        if (startPin.IO_Type == Pin.inOut.INPUT) {
            drawPointsNew.Reverse();
            //drawPointsRed.Add(anchorPoints[anchorPoints.Count - 1]);
        }
        
        j = 0;
        k = 0;
        steps = 0;
        distance = Vector2.Distance(drawPoints[0], drawPoints[1]);
        steps = Mathf.RoundToInt(distance * propogateResolution);

        for (var i = 0; i < timestep2; i++) {
            if (steps > 0) {
                drawingPoint = Lerp(drawPointsNew[j], drawPointsNew[j + 1], k / (float) steps);
                k++;
                drawPointsRed.Remove(drawingPoint);
            }
            else {
                drawPointsRed.Remove(drawPointsNew[j]);
            }

            if (k == steps) {
                j++;
                if (j > drawPoints.Count - 2) {
                    lineDrawn = false;
                    lineRed.positionCount = 0;
                    currentState = state.FINISHED;
                    //print(rightPin.name);
                    rightPin.value = false;
                    return;
                }

                distance = Vector2.Distance(drawPointsNew[j], drawPointsNew[j + 1]);
                steps = Mathf.RoundToInt(distance * propogateResolution);
                k = 0;
            }
        }

        timestep2++;
    }

    private void GenerateDrawPointsRed() {
        var drawPointsNew = new List<Vector2>(drawPoints);
        drawPointsRed.Clear();
        if (startPin.IO_Type == Pin.inOut.INPUT) {
            drawPointsNew.Reverse();
        }

        j = 0;
        k = 0;
        steps = 0;
        distance = Vector2.Distance(drawPoints[0], drawPoints[1]);
        steps = Mathf.RoundToInt(distance * propogateResolution);

        for (var i = 0; i < timestep1; i++) {
            if (steps > 0) {
                drawingPoint = Lerp(drawPointsNew[j], drawPointsNew[j + 1], k / (float) steps);
                k++;
                drawPointsRed.Add(drawingPoint);
            }
            else {
                drawPointsRed.Add(drawPointsNew[j]);
            }

            if (k == steps) {
                j++;
                if (j > drawPoints.Count - 2) {
                    drawPointsRed.Add(rightPin.transform.position);
                    if (currentState != state.UNDRAWING) {
                        lineDrawn = true;
                        currentState = state.FINISHED;
                    }
                    //print(rightPin.name);
                    rightPin.value = true;
                    return;
                }

                distance = Vector2.Distance(drawPointsNew[j], drawPointsNew[j + 1]);
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

                if ((p - drawPoints[drawPoints.Count - 1]).sqrMagnitude > 0.0005f) drawPoints.Add(p);
            }
        }

        drawPoints.Add(anchorPoints[anchorPoints.Count - 1]);
    }

    private Vector3 Lerp(Vector3 start, Vector3 end, float t) {
        return start + (end - start) * t;
    }
}