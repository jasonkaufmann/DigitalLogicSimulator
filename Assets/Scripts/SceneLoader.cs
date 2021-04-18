using System.Collections;
using System.Collections.Generic;
using System.ComponentModel.Design;
using System.IO;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SceneLoader : MonoBehaviour
{
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

    public WireManager manager;
    // Start is called before the first frame update
    void Start() {
        manager = GameObject.FindGameObjectWithTag("startup").GetComponent<WireManager>();
        int fromLoad = PlayerPrefs.GetInt("loadOrNewStatus");
        if (fromLoad == 1) {
            loadScene();
        }
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
        string nameToLoad = PlayerPrefs.GetString("loadRequestName");
        string savedState = File.ReadAllText(
            Application.persistentDataPath + "/SavedStates/" + nameToLoad + ".json");
        JObject info = JObject.Parse(savedState);
        foreach (var gate in info["gateFieldArray"]) {
            float x = float.Parse(gate["gatePosition"]["x"].ToString());
            float y= float.Parse(gate["gatePosition"]["y"].ToString());
            float z = float.Parse(gate["gatePosition"]["z"].ToString());
            if (int.Parse(gate["type"].ToString()) == 0) {
                GameObject newGate = Instantiate(notPF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.NOT;
                newGate.name += gate["gateNumber"].ToString();
            } else if (int.Parse(gate["type"].ToString()) == 1) {
                GameObject newGate = Instantiate(orPF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.OR;
                newGate.name += gate["gateNumber"].ToString();
            } else if (int.Parse(gate["type"].ToString()) == 2) {
                GameObject newGate = Instantiate(andPF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.AND;
                newGate.name += gate["gateNumber"].ToString();
            } else if (int.Parse(gate["type"].ToString()) == 3) {
                GameObject newGate = Instantiate(and3PF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.AND3;
                newGate.name += gate["gateNumber"].ToString();
            } else if (int.Parse(gate["type"].ToString()) == 4) {
                GameObject newGate = Instantiate(nandPF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.NAND;
                newGate.name += gate["gateNumber"].ToString();
            } else if (int.Parse(gate["type"].ToString()) == 5) {
                GameObject newGate = Instantiate(norPF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.NOR;
                newGate.name += gate["gateNumber"].ToString();
            } else if (int.Parse(gate["type"].ToString()) == 6) {
                GameObject newGate = Instantiate(srPF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.SR;
                newGate.name += gate["gateNumber"].ToString();
            } else if (int.Parse(gate["type"].ToString()) == 7) {
                GameObject newGate = Instantiate(dLatchPF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.DLATCH;
                newGate.name += gate["gateNumber"].ToString();
            } else if (int.Parse(gate["type"].ToString()) == 8) {
                GameObject newGate = Instantiate(ffPF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.FLIPFLOP;
                newGate.name += gate["gateNumber"].ToString();
            } else if (int.Parse(gate["type"].ToString()) == 9) {
                GameObject newGate = Instantiate(triStatePF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.TRISTATE;
                newGate.name += gate["gateNumber"].ToString();
            } else if (int.Parse(gate["type"].ToString()) == 10) {
                GameObject newGate = Instantiate(xorPF, new Vector3(x, y, z), Quaternion.identity);
                newGate.AddComponent<Gate>();
                newGate.GetComponent<Gate>().loadedFromFile = true;
                newGate.transform.rotation = Quaternion.Euler(0, 0, float.Parse(gate["rotation"].ToString()));
                newGate.GetComponent<Gate>().gateType = Gate.type.XOR;
                newGate.name += gate["gateNumber"].ToString();
            }
            
        }
        foreach (var io in info["ioFieldArray"]) {
            float x = float.Parse(io["ioPosition"]["x"].ToString());
            float y= float.Parse(io["ioPosition"]["y"].ToString());
            float z = float.Parse(io["ioPosition"]["z"].ToString());
            if (int.Parse(io["type"].ToString()) == 0) {
                GameObject newIO = Instantiate(outPF, new Vector3(x, y, z), Quaternion.identity);
                newIO.AddComponent<IO>();
                newIO.GetComponent<IO>().loadedFromFile = true;
                newIO.transform.rotation = Quaternion.Euler(0, 0, float.Parse(io["rotation"].ToString()));
                newIO.GetComponent<IO>().IOType = IO.type.IN;
                newIO.name += io["ioNumber"].ToString();
            } else if (int.Parse(io["type"].ToString()) == 1) {
                GameObject newIO = Instantiate(inPF, new Vector3(x, y, z), Quaternion.identity);
                newIO.AddComponent<IO>();
                newIO.GetComponent<IO>().loadedFromFile = true;
                newIO.transform.rotation = Quaternion.Euler(0, 0, float.Parse(io["rotation"].ToString()));
                newIO.GetComponent<IO>().IOType = IO.type.OUT;
                newIO.name += io["ioNumber"].ToString();
            } else if (int.Parse(io["type"].ToString()) == 2) {
                GameObject newIO = Instantiate(clockPF, new Vector3(x, y, z), Quaternion.identity);
                newIO.AddComponent<IO>();
                newIO.GetComponent<IO>().loadedFromFile = true;
                newIO.transform.rotation = Quaternion.Euler(0, 0, float.Parse(io["rotation"].ToString()));
                newIO.GetComponent<IO>().IOType = IO.type.CLOCK;
                newIO.name += io["ioNumber"].ToString();
            }
            
        }
        
        foreach (var text in info["textFieldArray"]) {
            float x = float.Parse(text["textPosition"]["x"].ToString());
            float y= float.Parse(text["textPosition"]["y"].ToString());
            float z = float.Parse(text["textPosition"]["z"].ToString());
            GameObject newText = Instantiate(textPF, new Vector3(x, y, z), Quaternion.identity);
            GameObject newCanvas = new GameObject();
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
        }

        foreach (JToken wire in info["wireFieldArray"]) {
            GameObject newWire = new GameObject();
            newWire.name = "wire";
            Wire wireComp = newWire.AddComponent<Wire>();
            List<Vector2> aPoints = new List<Vector2>();
            List<Vector2> dPoints = new List<Vector2>();
            foreach (JToken point in wire["anchorPoints"]) {
                aPoints.Add(new Vector2(float.Parse(point["x"].ToString()), float.Parse(point["y"].ToString())));
            }

            foreach (JToken point in wire["drawPoints"])
                dPoints.Add(new Vector2(float.Parse(point["x"].ToString()), float.Parse(point["y"].ToString())));
            wireComp.anchorPoints = aPoints;
            //print(aPoints);
            wireComp.drawPoints = dPoints;
            foreach (var thingInScene in SceneManager.GetActiveScene().GetRootGameObjects()) {
                if (thingInScene.name.Contains(wire["leftPinGateIO"].ToString())) {
                    wireComp.leftPin = thingInScene.transform.Find("pins")
                        .GetChild(int.Parse(wire["leftPinNumber"].ToString())).GetComponent<Pin>();
                    wireComp.startPin = thingInScene.transform.Find("pins")
                        .GetChild(int.Parse(wire["leftPinNumber"].ToString())).GetComponent<Pin>();
                }
                if (thingInScene.name.Contains(wire["rightPinGateIO"].ToString())) {
                    wireComp.rightPin = thingInScene.transform.Find("pins")
                        .GetChild(int.Parse(wire["rightPinNumber"].ToString())).GetComponent<Pin>();
                    wireComp.endPin = thingInScene.transform.Find("pins")
                        .GetChild(int.Parse(wire["rightPinNumber"].ToString())).GetComponent<Pin>();
                }
            }

            wireComp.loadedFromFile = true;
            wireComp.currentState = Wire.state.FINISHED;
            manager.addWire(newWire);
        }
    }
}
