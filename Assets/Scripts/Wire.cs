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
    public Gate startGate;
    public Gate endGate;
    public IO startIO;
    public IO endIO;
    public MeshCollider meshCollide;
    public WireManager manager;
    public GameObject empty;

    public state currentState;
    public bool lineDrawn;
    private readonly int numSteps = 120;
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
        }
        else if (currentState == state.DRAWING) {
            line.SetPosition(0, startPin.transform.position);
            line.SetPosition(1, endPin.transform.position);
            print("drawing");
            drawingPoint = Lerp(startPin.transform.position, endPin.transform.position, iterator1 / numSteps);
            lineRed.SetPosition(0, startPin.transform.position);
            lineRed.SetPosition(1, drawingPoint);
            iterator1++;
            if (iterator1 >= numSteps) {
                currentState = state.FINISHED;
                endPin.value = true;
                lineDrawn = true;
            }
        }
        else if (currentState == state.UNDRAWING) {
            print("undrawing");
            line.SetPosition(0, startPin.transform.position);
            line.SetPosition(1, endPin.transform.position);
            undrawingPoint = Lerp(startPin.transform.position, endPin.transform.position, iterator2 / numSteps);
            if (iterator1 != numSteps) {
                Vector3 drawingPointMove = Lerp(drawingPoint, endPin.transform.position,
                    iterator2 / (numSteps - iterator1));
                lineRed.SetPosition(1, drawingPointMove);
                if (drawingPointMove == endPin.transform.position) iterator1 = numSteps;
            }
            else {
                lineRed.SetPosition(1, endPin.transform.position);
            }
            lineRed.SetPosition(0, undrawingPoint);
            iterator2++;
            if (iterator2 >= numSteps) {
                currentState = state.FINISHED;
                endPin.value = false;
                lineDrawn = false;
            }
        }

        if (Input.GetKeyDown(KeyCode.Escape) && currentState == state.STARTED) manager.removeWire(gameObject);
    }

    private void OnMouseEnter() {
        if (currentState == state.FINISHED) {
            line.startWidth = 0.02f;
            line.endWidth = 0.02f;
        }
    }

    private void OnMouseExit() {
        line.startWidth = 0.01f;
        line.endWidth = 0.01f;
    }

    private void OnMouseOver() {
        if (Input.GetMouseButtonDown(2)) manager.removeWire(gameObject);
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
        if (pin.io)
            startIO = pin.io;
        else
            startGate = pin.gate;

        currentState = state.STARTED;
    }

    public void endWire(Pin pin) {
        endPin = pin;
        if (pin.io)
            endIO = pin.io;
        else
            endGate = pin.gate;
        currentState = state.FINISHED;
        if (startPin.value) {
            propogateSignalHigh();
        }
    }

    private Vector3 Lerp(Vector3 start, Vector3 end, float t) {
        return start + (end - start) * t;
    }
}