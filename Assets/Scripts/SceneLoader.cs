using System.Collections.Generic;
using System.IO;
using System.Linq;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SceneLoader : MonoBehaviour {
    public GameObject notPF;
    public GameObject andPF;
    public GameObject nandPF;
    public GameObject and3PF;
    public GameObject orPF;
    public GameObject norPF;
    public GameObject inPF;
    public GameObject outPF;
    public GameObject srPF;
    public GameObject dLatchPF;
    public GameObject ffPF;
    public GameObject triStatePF;
    public GameObject xorPF;
    public GameObject clockPF;
    public GameObject textPF;
    public GameObject reg4PF;

    public WireManager manager;

    // Start is called before the first frame update
    private void Start() {
        manager = GameObject.FindGameObjectWithTag("startup").GetComponent<WireManager>();
        var fromLoad = PlayerPrefs.GetInt("loadOrNewStatus");
        if (fromLoad == 1) loadScene();
    }


    /*
     *  NOT,
        OR,
        AND,
        AND3,
        NAND,
        NOR,
        SR,
        DLATCH,
        FLIPFLOP,
        TRISTATE,
        XOR
     */
    private void loadScene() {
        var nameToLoad = PlayerPrefs.GetString("loadRequestName");
        var savedState = File.ReadAllText(
            Application.persistentDataPath + "/" + nameToLoad + ".json");
        JObject info = JObject.Parse(savedState);
        if (info["camField"] != null) {
            Vector3 camPosition = new(float.Parse(info["camField"]["position"]["x"].ToString()),
                float.Parse(info["camField"]["position"]["y"].ToString()),
                float.Parse(info["camField"]["position"]["z"].ToString()));
            GameObject.FindGameObjectWithTag("moveCam").transform.position = camPosition;
        }

        foreach (JToken gate in info["gateFieldArray"]) {
            var x = float.Parse(gate["gatePosition"]["x"].ToString());
            var y = float.Parse(gate["gatePosition"]["y"].ToString());
            var z = float.Parse(gate["gatePosition"]["z"].ToString());
            if (int.Parse(gate["type"].ToString()) == 0) {
                GameObject newGate = Instantiate(notPF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.NOT;
                newGate.name += gate["gateNumber"].ToString();
            }
            else if (int.Parse(gate["type"].ToString()) == 1) {
                GameObject newGate = Instantiate(orPF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.OR;
                newGate.name += gate["gateNumber"].ToString();
            }
            else if (int.Parse(gate["type"].ToString()) == 2) {
                GameObject newGate = Instantiate(andPF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.AND;
                newGate.name += gate["gateNumber"].ToString();
            }
            else if (int.Parse(gate["type"].ToString()) == 3) {
                GameObject newGate = Instantiate(and3PF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.AND3;
                newGate.name += gate["gateNumber"].ToString();
            }
            else if (int.Parse(gate["type"].ToString()) == 4) {
                GameObject newGate = Instantiate(nandPF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.NAND;
                newGate.name += gate["gateNumber"].ToString();
            }
            else if (int.Parse(gate["type"].ToString()) == 5) {
                GameObject newGate = Instantiate(norPF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.NOR;
                newGate.name += gate["gateNumber"].ToString();
            }
            else if (int.Parse(gate["type"].ToString()) == 6) {
                GameObject newGate = Instantiate(srPF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.SR;
                newGate.name += gate["gateNumber"].ToString();
            }
            else if (int.Parse(gate["type"].ToString()) == 7) {
                GameObject newGate = Instantiate(dLatchPF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.DLATCH;
                newGate.name += gate["gateNumber"].ToString();
            }
            else if (int.Parse(gate["type"].ToString()) == 8) {
                GameObject newGate = Instantiate(ffPF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.FLIPFLOP;
                newGate.name += gate["gateNumber"].ToString();
            }
            else if (int.Parse(gate["type"].ToString()) == 9) {
                GameObject newGate = Instantiate(triStatePF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.TRISTATE;
                newGate.name += gate["gateNumber"].ToString();
            }
            else if (int.Parse(gate["type"].ToString()) == 10) {
                GameObject newGate = Instantiate(xorPF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.XOR;
                newGate.name += gate["gateNumber"].ToString();
            }
            else if (int.Parse(gate["type"].ToString()) == 11) {
                GameObject newGate = Instantiate(reg4PF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.REG4;
                newGate.name += gate["gateNumber"].ToString();
            }
        }

        foreach (JToken io in info["ioFieldArray"]) {
            var x = float.Parse(io["ioPosition"]["x"].ToString());
            var y = float.Parse(io["ioPosition"]["y"].ToString());
            var z = float.Parse(io["ioPosition"]["z"].ToString());
            GameObject newIO = null;
            if (int.Parse(io["type"].ToString()) == 0) {
                newIO = Instantiate(outPF, new Vector3(x, y, z), Quaternion.identity);
                newIO.AddComponent<IO>();
                newIO.GetComponent<IO>().loadedFromFile = true;
                newIO.transform.rotation = Quaternion.Euler(0, 0, float.Parse(io["rotation"].ToString()));
                newIO.GetComponent<IO>().IOType = IO.type.IN;
                newIO.name += io["ioNumber"].ToString();
            }
            else if (int.Parse(io["type"].ToString()) == 1) {
                newIO = Instantiate(inPF, new Vector3(x, y, z), Quaternion.identity);
                newIO.AddComponent<IO>();
                newIO.GetComponent<IO>().loadedFromFile = true;
                newIO.transform.rotation = Quaternion.Euler(0, 0, float.Parse(io["rotation"].ToString()));
                newIO.GetComponent<IO>().IOType = IO.type.OUT;
                newIO.name += io["ioNumber"].ToString();
            }
            else if (int.Parse(io["type"].ToString()) == 2) {
                newIO = Instantiate(clockPF, new Vector3(x, y, z), Quaternion.identity);
                newIO.AddComponent<IO>();
                newIO.GetComponent<IO>().loadedFromFile = true;
                newIO.transform.rotation = Quaternion.Euler(0, 0, float.Parse(io["rotation"].ToString()));
                newIO.GetComponent<IO>().IOType = IO.type.CLOCK;
                newIO.name += io["ioNumber"].ToString();
            }

            if (io["value"] != null) {
                if (int.Parse(io["value"].ToString()) == 1) {
                    //print("set high");
                    if (newIO is not null) {
                        newIO.GetComponent<IO>().log = IO.logic.HIGH;
                        if (int.Parse(io["type"].ToString()) == 2) newIO.GetComponent<IO>().clockOn = true;
                    }
                }
            }
            else {
                newIO.GetComponent<IO>().log = IO.logic.LOW;
            }
        }

        foreach (JToken text in info["textFieldArray"]) {
            var x = float.Parse(text["textPosition"]["x"].ToString());
            var y = float.Parse(text["textPosition"]["y"].ToString());
            var z = float.Parse(text["textPosition"]["z"].ToString());
            GameObject newText = Instantiate(textPF, new Vector3(x, y, z), Quaternion.identity);
            if (text["rotation"] != null)
                newText.transform.rotation = Quaternion.Euler(0, 0, float.Parse(text["rotation"].ToString()));

            GameObject newCanvas = new();
            newCanvas.name = "textFieldCanvas";
            newCanvas.AddComponent<Canvas>();
            newCanvas.AddComponent<CanvasScaler>();
            newCanvas.AddComponent<GraphicRaycaster>();
            newText.transform.SetParent(newCanvas.transform);
            newCanvas.GetComponent<Canvas>().renderMode = RenderMode.WorldSpace;
            newCanvas.GetComponent<Canvas>().worldCamera =
                GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
            newText.AddComponent<TextControls>();
            newText.transform.localScale = new Vector3(0.00033f, 0.00033f, 0.00033f);
            newText.AddComponent<BoxCollider2D>();
            newText.GetComponent<BoxCollider2D>().offset = new Vector2(0, 0);
            newText.GetComponent<BoxCollider2D>().size = new Vector2(500, 250);
            newText.GetComponent<TextControls>().createdFromFile = true;
            newText.GetComponent<TextControls>().createdFromFileString = text["text"].ToString();
            newText.name += newText.GetInstanceID().ToString();
            if (text["scale"] != null)
                newText.transform.GetChild(0).localScale = new Vector3(float.Parse(text["scale"].ToString()),
                    float.Parse(text["scale"].ToString()), 1);
        }

        foreach (JToken wire in info["wireFieldArray"]) {
            GameObject newWire = new();
            newWire.name = "wire";
            Wire wireComp = newWire.AddComponent<Wire>();
            var aPoints = new List<Vector2>();
            var dPoints = new List<Vector2>();
            foreach (JToken point in wire["anchorPoints"])
                aPoints.Add(new Vector2(float.Parse(point["x"].ToString()), float.Parse(point["y"].ToString())));

            foreach (JToken point in wire["drawPoints"])
                dPoints.Add(new Vector2(float.Parse(point["x"].ToString()), float.Parse(point["y"].ToString())));
            wireComp.anchorPoints = aPoints;
            wireComp.drawPoints = dPoints;
            foreach (GameObject thingInScene in SceneManager.GetActiveScene().GetRootGameObjects()) {
                if (thingInScene.name.Split(')').Last() == wire["leftPinGateIO"].ToString()) {
                    wireComp.leftPin = thingInScene.transform.Find("pins")
                        .GetChild(int.Parse(wire["leftPinNumber"].ToString())).GetComponent<Pin>();
                    wireComp.startPin = thingInScene.transform.Find("pins")
                        .GetChild(int.Parse(wire["leftPinNumber"].ToString())).GetComponent<Pin>();
                }

                if (thingInScene.name.Split(')').Last() == wire["rightPinGateIO"].ToString()) {
                    wireComp.rightPin = thingInScene.transform.Find("pins")
                        .GetChild(int.Parse(wire["rightPinNumber"].ToString())).GetComponent<Pin>();
                    wireComp.endPin = thingInScene.transform.Find("pins")
                        .GetChild(int.Parse(wire["rightPinNumber"].ToString())).GetComponent<Pin>();
                }
            }

            if (wire["lineDrawn"] != null) wireComp.lineDrawn = bool.Parse(wire["lineDrawn"].ToString());
            if (wire["leftPinValue"] != null) {
                if (wire["leftPinGateIO"].ToString() == "-812") print(wire["leftPinValue"].ToString());
                if (int.Parse(wire["leftPinValue"].ToString()) == 0)
                    wireComp.leftPin.actualValue = Pin.highOrLow.LOW;
                else if (int.Parse(wire["leftPinValue"].ToString()) == 1)
                    wireComp.leftPin.actualValue = Pin.highOrLow.HIGH;
                else
                    wireComp.leftPin.actualValue = Pin.highOrLow.HIZ;
            }

            if (wire["rightPinValue"] != null) {
                if (int.Parse(wire["rightPinValue"].ToString()) == 0)
                    wireComp.rightPin.actualValue = Pin.highOrLow.LOW;
                else if (int.Parse(wire["rightPinValue"].ToString()) == 1)
                    wireComp.rightPin.actualValue = Pin.highOrLow.HIGH;
                else
                    wireComp.rightPin.actualValue = Pin.highOrLow.HIZ;
            }

            if (wire["lineDrawn"] != null) {
                wireComp.lineDrawn = bool.Parse(wire["lineDrawn"].ToString());
                if (wire["timestep1"] != null) wireComp.timestep1 = int.Parse(wire["timestep1"].ToString());
            }

            wireComp.loadedFromFile = true;
            wireComp.currentState = Wire.state.FINISHED;
            manager.addWire(newWire);
        }

        if (info["b2dFieldArray"] != null)
            foreach (JToken b2dField in info["b2dFieldArray"]) {
                GameObject binToDec = new() {name = "binaryToDecimal"};
                binToDec.AddComponent<BinaryToDecimalGroup>();
                binToDec.GetComponent<BinaryToDecimalGroup>().IOForConversion = new List<GameObject>();
                foreach (GameObject thingInScene in SceneManager.GetActiveScene().GetRootGameObjects()) {
                    foreach (var token in b2dField["ioNumbers"]) {
                        if (thingInScene.name.Contains(token.ToString())) {
                            binToDec.GetComponent<BinaryToDecimalGroup>().IOForConversion.Add(thingInScene);
                        }
                    }
                }
                binToDec.GetComponent<BinaryToDecimalGroup>().loadedFromFile = true;
                binToDec.GetComponent<BinaryToDecimalGroup>().invert = bool.Parse(b2dField["inverted"].ToString());
                binToDec.GetComponent<BinaryToDecimalGroup>().loadedLocation = new Vector3(float.Parse(b2dField["position"]["x"].ToString()),
                    float.Parse(b2dField["position"]["y"].ToString()), -10);
                binToDec.GetComponent<BinaryToDecimalGroup>().loadedScale = float.Parse(b2dField["scale"].ToString());
            }

        if (info["boxFieldArray"] != null) {
            foreach (JToken boxField in info["boxFieldArray"]) {
                GameObject newBox = new GameObject();
                newBox.AddComponent<Box>();
                newBox.GetComponent<Box>()._drawPoints = new List<Vector2>();
                foreach (var point in boxField["drawPoints"]) {
                    newBox.GetComponent<Box>()._drawPoints.Add(new Vector2(float.Parse(point["x"].ToString()), float.Parse(point["y"].ToString())));
                }

                newBox.GetComponent<Box>()._drawing = false;
                newBox.GetComponent<Box>().createdFromCopy = true;
            }
        }
    }
}