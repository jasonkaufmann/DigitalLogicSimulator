using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ButtonManager : MonoBehaviour
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
    public GameObject reg4PF;
    public GameObject add4PF;
    public GameObject ram4PF;
    public GameObject bcount4PF;
    public GameObject tristate8PF;


    public void mouseEnter()
    {
        if (gameObject.name == "INButton" || gameObject.name == "OUTButton" || gameObject.name == "TextButton")
        {
            gameObject.GetComponent<Image>().color = new Color(1f, 1f, 1f, 0.75f);
        }
        else
        {
            gameObject.GetComponent<Image>().color = new Color(1f, 1f, 1f, 0.75f);
        }
    }

    public void mouseExit()
    {
        
        if (gameObject.name == "INButton" || gameObject.name == "OUTButton" || gameObject.name == "TextButton")
            gameObject.GetComponent<Image>().color = new Color(38f / 255f, 38f / 255f, 38f / 255f, 1f);
        else if (gameObject.name != "ExitButton")
            gameObject.GetComponent<Image>().color = new Color(38f / 255f, 38f / 255f, 38f / 255f, 1f);
        else
            gameObject.GetComponent<Image>().color = new Color(1f, 1f, 1f, 1f);
    }


    public void NOTButton()
    {
        var newobj = Instantiate(notPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.NOT;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void ANDButton()
    {
        var newobj = Instantiate(andPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.AND;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void NANDButton()
    {
        var newobj = Instantiate(nandPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.NAND;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void AND3Button()
    {
        var newobj = Instantiate(and3PF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.AND3;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void ORButton()
    {
        var newobj = Instantiate(orPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.OR;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void NORButton()
    {
        var newobj = Instantiate(norPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.NOR;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void INButton()
    {
        var newobj = Instantiate(inPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<IO>();
        newobj.GetComponent<IO>().IOType = IO.type.OUT;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void OUTButton()
    {
        var newobj = Instantiate(outPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<IO>();
        newobj.GetComponent<IO>().IOType = IO.type.IN;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void SRButton()
    {
        var newobj = Instantiate(srPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.SR;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void DLATCHButton()
    {
        var newobj = Instantiate(dLatchPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.DLATCH;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void FFButton()
    {
        var newobj = Instantiate(ffPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.FLIPFLOP;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void TRIButton()
    {
        var newobj = Instantiate(triStatePF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.TRISTATE;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void TRI8Button()
    {
        var newobj = Instantiate(tristate8PF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.TRISTATE8;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void XORButton()
    {
        var newobj = Instantiate(xorPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.XOR;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void REG4Button()
    {
        var newobj = Instantiate(reg4PF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.REG4;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void ADD4Button()
    {
        var newobj = Instantiate(add4PF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.ADD4;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void BCOUNT4Button()
    {
        var newobj = Instantiate(bcount4PF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.BCOUNT4;
        newobj.name += newobj.GetInstanceID().ToString();
    }
    
    public void RAM4Button()
    {
        var newobj = Instantiate(ram4PF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.RAM4;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void CLOCKButton()
    {
        var newobj = Instantiate(clockPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10),
            Quaternion.identity);
        newobj.AddComponent<IO>();
        newobj.GetComponent<IO>().IOType = IO.type.CLOCK;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void TextButton()
    {
        var newobj = Instantiate(textPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, -10),
            Quaternion.identity);
        var newCanvas = new GameObject();
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

    public void ExitButton()
    {
        //save the current state somehow
        saveAllGameData();
        SceneManager.LoadScene(0);
    }

    private void saveAllGameData()
    {
        var objects = new List<GameObject>(SceneManager.GetActiveScene().GetRootGameObjects());
        var sceneObjects = new List<GameObject>();
        var gateFieldArray = new List<gateSaveFields>();
        var ioFieldArray = new List<ioSaveFields>();
        var textFieldArray = new List<textSaveFields>();
        var wireFieldArray = new List<wireSaveFields>();
        var camField = new camSaveFields();
        var b2dFieldArray = new List<binaryToDecimalFields>();
        var boxFieldArray = new List<boxFields>();
        foreach (var sceneObject in objects)
            if (sceneObject.GetComponent<Gate>() != null)
            {
                var field = new gateSaveFields
                {
                    gatePosition = sceneObject.transform.position,
                    gateNumber = sceneObject.name.Split(')').Last(),
                    type = sceneObject.GetComponent<Gate>().gateType,
                    rotation = sceneObject.transform.eulerAngles.z
                };
                gateFieldArray.Add(field);
            }
            else if (sceneObject.GetComponent<IO>() != null)
            {
                ioSaveFields field;
                if (sceneObject.GetComponent<IO>().IOType == IO.type.CLOCK)
                {
                    var saveValue = IO.logic.LOW;
                    if (sceneObject.GetComponent<IO>().clockOn) saveValue = IO.logic.HIGH;
                    field = new ioSaveFields
                    {
                        ioPosition = sceneObject.transform.position,
                        ioNumber = sceneObject.name.Split(')').Last(),
                        type = sceneObject.GetComponent<IO>().IOType,
                        rotation = sceneObject.transform.eulerAngles.z,
                        value = saveValue
                    };
                }
                else
                {
                    field = new ioSaveFields
                    {
                        ioPosition = sceneObject.transform.position,
                        ioNumber = sceneObject.name.Split(')').Last(),
                        type = sceneObject.GetComponent<IO>().IOType,
                        rotation = sceneObject.transform.eulerAngles.z,
                        value = sceneObject.GetComponent<IO>().log
                    };
                }

                //print(sceneObject.GetComponent<IO>().log);
                ioFieldArray.Add(field);
            }
            else if (sceneObject.name.Contains("textFieldCanvas"))
            {
                var field = new textSaveFields
                {
                    textPosition = sceneObject.transform.GetChild(0).position,
                    text = sceneObject.transform.GetChild(0).GetChild(1).gameObject.GetComponent<Text>().text,
                    rotation = sceneObject.transform.GetChild(0).eulerAngles.z,
                    scale = sceneObject.transform.GetChild(0).GetChild(1).localScale.x
                };
                textFieldArray.Add(field);
            }
            else if (sceneObject.name.Contains("SceneCamera"))
            {
                var field = new camSaveFields
                {
                    position = sceneObject.transform.position
                };
                camField = field;
            }
            else if (sceneObject.GetComponent<BinaryToDecimalGroup>() != null)
            {
                var names = new List<string>();
                foreach (var obj in sceneObject.GetComponent<BinaryToDecimalGroup>().IOForConversion)
                    names.Add(obj.name);
                var field = new binaryToDecimalFields
                {
                    ioNumbers = names,
                    position = sceneObject.transform.GetChild(0).transform.position,
                    inverted = sceneObject.GetComponent<BinaryToDecimalGroup>().invert,
                    scale = sceneObject.transform.GetChild(0).transform.localScale.x
                };
                b2dFieldArray.Add(field);
            }
            else if (sceneObject.GetComponent<Box>() != null)
            {
                var field = new boxFields
                {
                    drawPoints = sceneObject.GetComponent<Box>()._drawPoints
                };
                boxFieldArray.Add(field);
            }
            else if (sceneObject.GetComponent<Wire>() != null)
            {
                var sceneWire = sceneObject.GetComponent<Wire>();
                string leftGateIONumber;
                string rightGateIONumber;
                if (sceneWire.leftPin.gateOrIO)
                    leftGateIONumber = sceneWire.leftPin.gate.name.Split(')').Last();
                else
                    leftGateIONumber = sceneWire.leftPin.io.name.Split(')').Last();

                if (sceneWire.rightPin.gateOrIO)
                    rightGateIONumber = sceneWire.rightPin.gate.name.Split(')').Last();
                else
                    rightGateIONumber = sceneWire.rightPin.io.name.Split(')').Last();

                var points = sceneWire.anchorPoints;
                if (sceneWire.leftPin != sceneWire.startPin) points.Reverse();
                var field = new wireSaveFields
                {
                    drawPoints = sceneWire.drawPoints,
                    anchorPoints = points,
                    leftPinGateIO = leftGateIONumber,
                    leftPinNumber = sceneWire.leftPin.transform.GetSiblingIndex(),
                    rightPinGateIO = rightGateIONumber,
                    rightPinNumber = sceneWire.rightPin.transform.GetSiblingIndex(),
                    startSameOrDiff = sceneWire.leftPin == sceneWire.startPin,
                    lineDrawn = sceneWire.lineDrawn,
                    leftPinValue = sceneWire.leftPin.actualValue,
                    rightPinValue = sceneWire.rightPin.actualValue,
                    timestep1 = sceneWire.timestep1
                };
                wireFieldArray.Add(field);
            }


        var textobj = JsonConvert.SerializeObject(
            new {camField, boxFieldArray, gateFieldArray, b2dFieldArray, ioFieldArray, textFieldArray, wireFieldArray},
            new JsonSerializerSettings
            {
                ReferenceLoopHandling = ReferenceLoopHandling.Ignore
            });
        File.WriteAllText(
            Application.persistentDataPath + "/" + PlayerPrefs.GetString("currentProjectName") + ".json", textobj);
    }

    public void changeSimSpeed()
    {
        var slide = GameObject.FindGameObjectWithTag("slider");
    }

    [Serializable]
    public class gateSaveFields
    {
        public Vector3 gatePosition;
        public string gateNumber;
        public Gate.type type;
        public float rotation;
    }

    [Serializable]
    public class ioSaveFields
    {
        public Vector3 ioPosition;
        public string ioNumber;
        public IO.type type;
        public float rotation;
        public IO.logic value;
    }

    [Serializable]
    public class textSaveFields
    {
        public Vector3 textPosition;
        public string text;
        public float rotation;
        public float scale;
    }

    [Serializable]
    public class camSaveFields
    {
        public Vector3 position;
    }

    [Serializable]
    public class binaryToDecimalFields
    {
        public List<string> ioNumbers;
        public Vector3 position;
        public bool inverted;
        public float scale;
    }

    [Serializable]
    public class boxFields
    {
        public List<Vector2> drawPoints;
    }

    [Serializable]
    public class wireSaveFields
    {
        public List<Vector2> drawPoints;
        public List<Vector2> anchorPoints;
        public string leftPinGateIO;
        public int leftPinNumber;
        public Pin.highOrLow leftPinValue;
        public string rightPinGateIO;
        public int rightPinNumber;
        public Pin.highOrLow rightPinValue;
        public bool startSameOrDiff;
        public bool lineDrawn;
        public int timestep1;
    }
}