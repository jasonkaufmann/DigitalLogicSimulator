using UnityEngine;

public class Wire : MonoBehaviour {
    public enum state {
        STARTED,
        FINISHED,
        DRAWING,
        UNDRAWING
    }

    public Pin startPin;
    public Pin endPin;
    public Pin leftPin;
    public Pin rightPin;
    public Gate startGate;
    public Gate endGate;
    public IO startIO;
    public IO endIO;
    public MeshCollider meshCollide;
    public WireManager manager;
    public GameObject empty;

    public state currentState;
    public bool lineDrawn;
    private readonly int numSteps = 30;
    private Vector3 drawingPoint;
    private Vector3 end;
    private bool highOrLow;
    private float iterator1;
    private float iterator2;
    private LineRenderer line;
    private LineRenderer lineRed;
    private Vector3 start;
    private float startTime;
    private Vector3 undrawingPoint;

    private void Awake() {
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
        lineRed.material = new Material(Shader.Find("Sprites/Default"));
        lineRed.material.color = new Color(236f / 255f, 34f / 255f, 56f / 255f, 1f);
        lineRed.sortingOrder = 1;
        lineRed.startWidth = 0.01f;
        lineRed.endWidth = 0.01f;
    }

    // Update is called once per frame
    private void Update() {
        updateMesh();
        if (currentState == state.STARTED) {
            Camera moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
            Vector3 mousePos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                Mathf.Abs(moveCam.transform.position.z + 10)));
            line.SetPosition(0, startPin.transform.position);
            line.SetPosition(1, mousePos);
            lineRed.SetPosition(0, startPin.transform.position);
            lineRed.SetPosition(1, startPin.transform.position);
        }
        else if (currentState == state.FINISHED) {
            line.SetPosition(0, startPin.transform.position);
            line.SetPosition(1, endPin.transform.position);
            if (lineDrawn) {
                lineRed.SetPosition(0, startPin.transform.position);
                lineRed.SetPosition(1, endPin.transform.position);
            }
            else {
                lineRed.SetPosition(0, startPin.transform.position);
                lineRed.SetPosition(1, startPin.transform.position);
            }
        }
        else if (currentState == state.DRAWING) {
            line.SetPosition(0, leftPin.transform.position);
            line.SetPosition(1, rightPin.transform.position);
            print("drawing");
            drawingPoint = Lerp(leftPin.transform.position, rightPin.transform.position, iterator1 / numSteps);
            lineRed.SetPosition(0, leftPin.transform.position);
            lineRed.SetPosition(1, drawingPoint);
            iterator1++;
            if (iterator1 >= numSteps) {
                currentState = state.FINISHED;
                rightPin.value = true;
                lineDrawn = true;
            }
        }
        else if (currentState == state.UNDRAWING) {
            print("undrawing");
            line.SetPosition(0, leftPin.transform.position);
            line.SetPosition(1, rightPin.transform.position);
            undrawingPoint = Lerp(leftPin.transform.position, rightPin.transform.position, iterator2 / numSteps);
            if (iterator1 != numSteps) {
                Vector3 drawingPointMove = Lerp(drawingPoint, rightPin.transform.position,
                    iterator2 / (numSteps - iterator1));
                lineRed.SetPosition(1, drawingPointMove);
                if (drawingPointMove == rightPin.transform.position) iterator1 = numSteps;
            }
            else {
                lineRed.SetPosition(1, rightPin.transform.position);
            }

            lineRed.SetPosition(0, undrawingPoint);
            iterator2++;
            if (iterator2 >= numSteps) {
                currentState = state.FINISHED;
                rightPin.value = false;
                lineDrawn = false;
            }
        }

        if (Input.GetKeyDown(KeyCode.Escape) && currentState == state.STARTED) manager.removeWire(gameObject);
    }

    private void OnMouseEnter() {
        if (currentState == state.FINISHED) {
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
        if (Input.GetMouseButtonDown(2)) {
            rightPin.value = false;
            if (!leftPin.gateOrIO) {
                if (leftPin.io.IOType != IO.type.IN) leftPin.value = false;
            }
            else {
                leftPin.value = false;
            }
            manager.removeWire(gameObject);
        }
    }

    public void propogateSignalHigh() {
        print("got high command");
        highOrLow = true;
        iterator1 = 0;
        currentState = state.DRAWING;
    }

    public void propogateSignalLow() {
        print("got low command");
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
        startPin = pin;
        if (!pin.gateOrIO)
            startIO = pin.io;
        else
            startGate = pin.gate;

        currentState = state.STARTED;
    }

    public void endWire(Pin pin) {
        endPin = pin;
        if (!pin.gateOrIO) {
            endIO = pin.io;
            if (pin.io.IOType == IO.type.IN) {
                leftPin = pin;
                rightPin = startPin;
            }
            else {
                leftPin = startPin;
                rightPin = pin;
            }
        } else {
            if (pin.IO_Type == Pin.inOut.INPUT) {
                rightPin = pin;
                leftPin = startPin;
            }
            else {
                rightPin = startPin;
                leftPin = pin;
            }
            endGate = pin.gate;
        }
        if (!startPin.gateOrIO) {
            endIO = pin.io;
            if (startPin.io.IOType == IO.type.IN) {
                leftPin = startPin;
                rightPin = pin;
            }
            else {
                leftPin = pin;
                rightPin = startPin;
            }
        }

        currentState = state.FINISHED;
        if (leftPin.value) propogateSignalHigh();
    }

    private Vector3 Lerp(Vector3 start, Vector3 end, float t) {
        return start + (end - start) * t;
    }
}