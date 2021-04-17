using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ButtonManager : MonoBehaviour {
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


    public void mouseEnter() {
        gameObject.GetComponent<Image>().color = new Color(1f, 1f, 1f, 0.75f);
    }

    public void mouseExit() {
        if (gameObject.name != "ExitButton")
            gameObject.GetComponent<Image>().color = new Color(38f / 255f, 38f / 255f, 38f / 255f, 1f);
        else
            gameObject.GetComponent<Image>().color = new Color(1f, 1f, 1f, 1f);
    }


    public void NOTButton() {
        GameObject newobj = Instantiate(notPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.NOT;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void ANDButton() {
        GameObject newobj = Instantiate(andPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.AND;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void NANDButton() {
        GameObject newobj = Instantiate(nandPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.NAND;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void AND3Button() {
        GameObject newobj = Instantiate(and3PF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.AND3;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void ORButton() {
        GameObject newobj = Instantiate(orPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.OR;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void NORButton() {
        GameObject newobj = Instantiate(norPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.NOR;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void INButton() {
        GameObject newobj = Instantiate(inPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<IO>();
        newobj.GetComponent<IO>().IOType = IO.type.OUT;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void OUTButton() {
        GameObject newobj = Instantiate(outPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<IO>();
        newobj.GetComponent<IO>().IOType = IO.type.IN;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void SRButton() {
        GameObject newobj = Instantiate(srPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.SR;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void DLATCHButton() {
        GameObject newobj = Instantiate(dLatchPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.DLATCH;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void FFButton() {
        GameObject newobj = Instantiate(ffPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.FLIPFLOP;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void TRIButton() {
        GameObject newobj = Instantiate(triStatePF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.TRISTATE;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void XORButton() {
        GameObject newobj = Instantiate(xorPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.XOR;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void CLOCKButton() {
        GameObject newobj = Instantiate(clockPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<IO>();
        newobj.GetComponent<IO>().IOType = IO.type.CLOCK;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void TextButton() {
        GameObject newobj = Instantiate(textPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, -10),
            Quaternion.identity);
        GameObject newCanvas = new GameObject();
        newCanvas.name = "textFieldCanvas";
        newCanvas.AddComponent<Canvas>();
        newCanvas.AddComponent<CanvasScaler>();
        newCanvas.AddComponent<GraphicRaycaster>();
        newobj.transform.SetParent(newCanvas.transform);
        newCanvas.GetComponent<Canvas>().renderMode = RenderMode.WorldSpace;
        newCanvas.GetComponent<Canvas>().worldCamera =
            GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
        newobj.AddComponent<TextControls>();
        newobj.transform.localScale = new Vector3(0.00033f, 0.00033f, 0.00033f);
        newobj.AddComponent<BoxCollider2D>();
        newobj.GetComponent<BoxCollider2D>().offset = new Vector2(0, 0);
        newobj.GetComponent<BoxCollider2D>().size = new Vector2(500, 250);
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void ExitButton() {
        //save the current state somehow
        saveAllGameData();
        SceneManager.LoadScene(0);
    }

    private void saveAllGameData() {
        var objects = new List<GameObject>(SceneManager.GetActiveScene().GetRootGameObjects());
        var sceneObjects = new List<GameObject>();
        var gateFieldArray = new List<gateSaveFields>();
        var ioFieldArray = new List<ioSaveFields>();
        var textFieldArray = new List<textSaveFields>();
        var wireFieldArray = new List<wireSaveFields>();
        foreach (GameObject sceneObject in objects)
            if (sceneObject.GetComponent<Gate>() != null) {
                gateSaveFields field = new gateSaveFields {
                    gatePosition = sceneObject.transform.position,
                    gateNumber = sceneObject.name.Split(')').Last(),
                    type = sceneObject.GetComponent<Gate>().gateType,
                    rotation = sceneObject.transform.eulerAngles.z
                };
                gateFieldArray.Add(field);
            }
            else if (sceneObject.GetComponent<IO>() != null) {
                ioSaveFields field = new ioSaveFields {
                    ioPosition = sceneObject.transform.position,
                    ioNumber = sceneObject.name.Split(')').Last(),
                    type = sceneObject.GetComponent<IO>().IOType,
                    rotation = sceneObject.transform.eulerAngles.z
                };
                ioFieldArray.Add(field);
            }
            else if (sceneObject.name.Contains("textFieldCanvas")) {
                textSaveFields field = new textSaveFields {
                    textPosition = sceneObject.transform.GetChild(0).position,
                    text = sceneObject.transform.GetChild(0).GetChild(1).gameObject.GetComponent<Text>().text
                };
                textFieldArray.Add(field);
            }
            else if (sceneObject.GetComponent<Wire>() != null) {
                Wire sceneWire = sceneObject.GetComponent<Wire>();
                string leftGateIONumber;
                string rightGateIONumber;
                if (sceneWire.leftPin.gateOrIO) {
                    leftGateIONumber = sceneWire.leftPin.gate.name.Split(')').Last();
                }
                else {
                    leftGateIONumber = sceneWire.leftPin.io.name.Split(')').Last();
                }
                
                if (sceneWire.rightPin.gateOrIO) {
                    rightGateIONumber = sceneWire.rightPin.gate.name.Split(')').Last();
                }
                else {
                    rightGateIONumber = sceneWire.rightPin.io.name.Split(')').Last();
                }
                
                wireSaveFields field = new wireSaveFields {
                    drawPoints = sceneWire.drawPoints,
                    anchorPoints = sceneWire.anchorPoints,
                    leftPinGateIO = leftGateIONumber,
                    leftPinNumber = sceneWire.leftPin.transform.GetSiblingIndex(),
                    rightPinGateIO = rightGateIONumber,
                    rightPinNumber = sceneWire.rightPin.transform.GetSiblingIndex(),
                };
                wireFieldArray.Add(field);
            }

        var textobj = JsonConvert.SerializeObject(new {gateFieldArray, ioFieldArray, textFieldArray, wireFieldArray},
            new JsonSerializerSettings {
                ReferenceLoopHandling = ReferenceLoopHandling.Ignore
            });
        File.WriteAllText(
            Application.persistentDataPath + "/SavedStates/" + PlayerPrefs.GetString("currentProjectName") + ".json", textobj);
    }

    public void changeSimSpeed() {
        GameObject slide = GameObject.FindGameObjectWithTag("slider");
    }

    [Serializable]
    public class gateSaveFields {
        public Vector3 gatePosition;
        public string gateNumber;
        public Gate.type type;
        public float rotation;
    }

    [Serializable]
    public class ioSaveFields {
        public Vector3 ioPosition;
        public string ioNumber;
        public IO.type type;
        public float rotation;
    }

    [Serializable]
    public class textSaveFields {
        public Vector3 textPosition;
        public string text;
    }

    [Serializable]
    public class wireSaveFields {
        public List<Vector2> drawPoints;
        public List<Vector2> anchorPoints;
        public string leftPinGateIO;
        public int leftPinNumber;
        public string rightPinGateIO;
        public int rightPinNumber;
    }
}