using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class IO : MonoBehaviour
{
    public enum logic
    {
        LOW,
        HIGH,
        HIZ
    }

    public enum state
    {
        PLACING,
        INSCENE,
        WAITING,
        CHANGE,
        COPYING
    }

    public enum type
    {
        IN,
        OUT,
        CLOCK
    }

    public bool snapIOToNearestPin = true;

    public List<GameObject> connectedWires;
    public WireManager manager;
    public Pin pin;
    public type IOType;
    public bool noChange;
    public bool connectingWire;
    public float clockFrequency = 1; //in Hz
    public bool clockOn;
    public GameObject textField;
    public GameObject textCanvas;
    public bool loadedFromFile;

    public logic log;

    public state currentState;
    public bool createdFromCopy;
    public bool importedFromFile;
    private Vector3 copyOffset;
    private Vector3 difference;
    private bool firstFrame = true;
    private Vector3 lastDragPoint, currentDragPoint;
    private float lastTime;
    private Camera moveCam;

    // Start is called before the first frame update
    private void Start()
    {
        noChange = true;
        manager = GameObject.FindGameObjectWithTag("startup").GetComponent<WireManager>();
        currentState = createdFromCopy ? state.COPYING : state.PLACING;
        if (loadedFromFile && !createdFromCopy) currentState = state.INSCENE;
        if (importedFromFile && !createdFromCopy) currentState = state.COPYING;
        var moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
        var movePos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
            Mathf.Abs(moveCam.transform.position.z + 10)));
        copyOffset = transform.position - movePos;
        pin = gameObject.GetComponentInChildren<Pin>();
        pin.io = this;
        pin.gateOrIO = false;
        if (IOType == type.IN)
            pin.IO_Type = Pin.inOut.INPUT;
        else
            pin.IO_Type = Pin.inOut.OUTPUT;
        if (!createdFromCopy)
        {
            gameObject.transform.Find("circle").gameObject.AddComponent<IOButton>();
            if (!loadedFromFile && !importedFromFile)
            {
                log = logic.LOW;
            }
            else
            {
                if (log == logic.HIGH)
                {
                    pin.actualValue = Pin.highOrLow.HIGH;
                    transform.GetChild(0).GetComponent<SpriteRenderer>().color =
                        new Color(236f / 255f, 34f / 255f, 56f / 255f, 1f);
                }
                else
                {
                    pin.actualValue = Pin.highOrLow.LOW;
                }
            }
        }
    }

    // Update is called once per frame
    private void Update()
    {
        if (Time.timeScale == 0) return;
        if (currentState == state.PLACING)
        {
            var moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
            var movePos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                Mathf.Abs(moveCam.transform.position.z + 10)));
            transform.position = movePos;
            if (Input.GetKeyDown(KeyCode.R)) transform.Rotate(Vector3.forward, 45);
            if (GameObject.FindGameObjectWithTag("manageCanvas").GetComponent<ControlsManager>().snapBool)
            {
                var closestPins = getClosestPinXY();
                Debug.DrawLine(pin.transform.position, closestPins.Item1.transform.position, Color.red);
                Debug.DrawLine(pin.transform.position, closestPins.Item2.transform.position, Color.blue);
                var pintoCenterDistanceY = pin.transform.position.y - transform.position.y;
                if (pin.transform.position.y <
                    closestPins.Item1.transform.position.y + closestPins.Item1.transform.localScale.y / 2 &&
                    pin.transform.position.y >
                    closestPins.Item1.transform.position.y - closestPins.Item1.transform.localScale.y / 2)
                    transform.position = new Vector3(transform.position.x,
                        closestPins.Item1.transform.position.y - pintoCenterDistanceY,
                        transform.position.z);

                var pintoCenterDistanceX = pin.transform.position.x - transform.position.x;
                if (pin.transform.position.x <
                    closestPins.Item2.transform.position.x + closestPins.Item2.transform.localScale.x / 2 &&
                    pin.transform.position.x >
                    closestPins.Item2.transform.position.x - closestPins.Item2.transform.localScale.x / 2)
                    transform.position = new Vector3(closestPins.Item2.transform.position.x - pintoCenterDistanceX,
                        transform.position.y,
                        transform.position.z);
            }

            if (Input.GetMouseButtonDown(0)) currentState = state.INSCENE;
            if (IOType == type.IN)
            {
                if (manager.getConnectedWiresPin(pin).Count == 0) pin.actualValue = Pin.highOrLow.LOW;
                if (pin.actualValue == Pin.highOrLow.HIGH)
                    log = logic.HIGH;
                else if (pin.actualValue == Pin.highOrLow.LOW)
                    log = logic.LOW;
                else log = logic.HIZ;
            }
        }
        else if (currentState == state.COPYING)
        {
            var moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
            var movePos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                Mathf.Abs(moveCam.transform.position.z + 10)));
            transform.position = movePos + copyOffset;
            if (Input.GetKeyDown(KeyCode.R)) transform.Rotate(Vector3.forward, 45);
            if (GameObject.FindGameObjectWithTag("manageCanvas").GetComponent<ControlsManager>().snapBool)
            {
                var closestPins = getClosestPinXY();
                Debug.DrawLine(pin.transform.position, closestPins.Item1.transform.position, Color.red);
                Debug.DrawLine(pin.transform.position, closestPins.Item2.transform.position, Color.blue);
                var pintoCenterDistanceY = pin.transform.position.y - transform.position.y;
                if (pin.transform.position.y <
                    closestPins.Item1.transform.position.y + closestPins.Item1.transform.localScale.y / 2 &&
                    pin.transform.position.y >
                    closestPins.Item1.transform.position.y - closestPins.Item1.transform.localScale.y / 2)
                    transform.position = new Vector3(transform.position.x,
                        closestPins.Item1.transform.position.y - pintoCenterDistanceY,
                        transform.position.z);

                var pintoCenterDistanceX = pin.transform.position.x - transform.position.x;
                if (pin.transform.position.x <
                    closestPins.Item2.transform.position.x + closestPins.Item2.transform.localScale.x / 2 &&
                    pin.transform.position.x >
                    closestPins.Item2.transform.position.x - closestPins.Item2.transform.localScale.x / 2)
                    transform.position = new Vector3(closestPins.Item2.transform.position.x - pintoCenterDistanceX,
                        transform.position.y,
                        transform.position.z);
            }

            if (Input.GetMouseButtonDown(0)) currentState = state.INSCENE;
            if (IOType == type.IN)
            {
                if (manager.getConnectedWireIO(this).Count == 0) pin.actualValue = Pin.highOrLow.LOW;
                if (pin.actualValue == Pin.highOrLow.HIGH)
                    log = logic.HIGH;
                else if (pin.actualValue == Pin.highOrLow.LOW)
                    log = logic.LOW;
                else log = logic.HIZ;
            }
        }

        if (textField != null)
        {
            float xPosition;
            float yPosition;
            if ((int) transform.eulerAngles.z > 0 && (int) transform.eulerAngles.z < 135)
            {
                //print("rotated 90 degrees");
                yPosition = -gameObject.transform.GetChild(0).transform.localScale.y;
                xPosition = 0;
            }
            else
            {
                yPosition = gameObject.transform.GetChild(0).transform.localScale.y;
                xPosition = 0;
            }

            textField.transform.position = gameObject.transform.GetChild(0).transform.position +
                                           new Vector3(xPosition, yPosition, 0);
            if (Input.GetKeyDown(KeyCode.Return))
                clockFrequency = float.Parse(textField.GetComponent<TMP_InputField>().text);
        }

        if (IOType == type.CLOCK && clockOn)
        {
            //print("clock running");
            var currentTime = Time.time;
            var timeDiff = currentTime - lastTime;
            if (timeDiff >= 1 / clockFrequency / 2)
            {
                lastTime = currentTime;
                var wires = manager.getConnectedWireIO(this);
                if (log == logic.LOW)
                {
                    log = logic.HIGH;
                    pin.actualValue = Pin.highOrLow.HIGH;
                    foreach (var wire in wires)
                        if (wire.GetComponent<Wire>().currentState != Wire.state.STARTED)
                            wire.GetComponent<Wire>().propogateSignalHigh();
                }
                else
                {
                    log = logic.LOW;
                    pin.actualValue = Pin.highOrLow.LOW;
                    foreach (var wire in wires)
                        if (wire.GetComponent<Wire>().currentState != Wire.state.STARTED)
                            wire.GetComponent<Wire>().propogateSignalLow();
                }
            }
        }

        if (IOType == type.OUT)
        {
            var wires = manager.getConnectedWireIO(this);
            if (log == logic.HIGH && wires.Count > 0 && !manager.connectionInProgress() && noChange)
            {
                pin.actualValue = Pin.highOrLow.HIGH;
                foreach (var wire in wires) wire.GetComponent<Wire>().propogateSignalHigh();
                noChange = false;
            }
            else if (log == logic.LOW && wires.Count > 0 && !manager.connectionInProgress() && noChange)
            {
                pin.actualValue = Pin.highOrLow.LOW;
                foreach (var wire in wires)
                {
                    if (wire.GetComponent<Wire>().lineDrawn ||
                        wire.GetComponent<Wire>().currentState == Wire.state.DRAWING)
                        wire.GetComponent<Wire>().propogateSignalLow();
                    noChange = false;
                }
            }
        }
        else
        {
            if (manager.getConnectedWiresPin(pin).Count == 0) pin.actualValue = Pin.highOrLow.LOW;
            if (pin.actualValue == Pin.highOrLow.HIGH)
                log = logic.HIGH;
            else if (pin.actualValue == Pin.highOrLow.LOW)
                log = logic.LOW;
            else log = logic.HIZ;
        }

        if (currentState == state.CHANGE)
        {
        }
        else if (currentState == state.WAITING)
        {
            currentState = state.PLACING;
        }

        if (Input.GetKeyDown(KeyCode.Escape) && currentState == state.PLACING) DestroyImmediate(gameObject);
    }

    private void OnMouseOver()
    {
        if (Input.GetMouseButtonDown(0) && currentState == state.INSCENE)
        {
            currentState = state.WAITING;
        }
        else if (Input.GetMouseButtonDown(2))
        {
            connectedWires = manager.getConnectedWireIO(this);
            foreach (var wire in connectedWires) manager.removeWire(wire);

            DestroyImmediate(gameObject);
            if (textField != null) DestroyImmediate(textField);
        }
    }

    private (Pin, Pin) getClosestPinXY()
    {
        var pins = new List<Pin>(FindObjectsOfType<Pin>());
        var closestPinX = pin;
        var closestPinY = pin;
        var closestDistanceX = float.PositiveInfinity;
        var closestDistanceY = float.PositiveInfinity;
        foreach (var pinInQuestion in pins) //print(pinInQuestion.name);
            if (pinInQuestion != pin)
            {
                var position = pinInQuestion.gameObject.transform.position;
                var diff = position - pin.transform.position;
                if (Mathf.Abs(diff.x) < closestDistanceX)
                {
                    closestDistanceX = Mathf.Abs(diff.x);
                    closestPinX = pinInQuestion;
                }

                if (Mathf.Abs(diff.y) < closestDistanceY)
                {
                    closestDistanceY = Mathf.Abs(diff.y);
                    closestPinY = pinInQuestion;
                }
            }

        return (closestPinY, closestPinX);
    }
}