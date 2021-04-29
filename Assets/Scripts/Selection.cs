using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Selection : MonoBehaviour {
    public GameObject selectionArea;
    public GameObject newArea;
    public List<GameObject> copiedObjects;
    public Vector3 difference;

    private state currentState;
    private bool firstFrame = true;
    private float height;
    private Vector3 lastDragPoint, currentDragPoint;

    private WireManager manager;
    private Camera moveCam;

    private Sprite rectangle;
    private Vector3 startPos;
    private float width;

    private void Start() {
        moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
        manager = GameObject.FindGameObjectWithTag("startup").GetComponent<WireManager>();
        currentState = state.WAITING;
    }

    // Update is called once per frame
    private void Update() {
        if (Time.timeScale == 0) return;
        Vector3 newPos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
            Mathf.Abs(moveCam.transform.position.z + 10)));
        var onScreen = Input.mousePosition.y < Screen.height * 0.914f &&
                       Input.mousePosition.y > Screen.height * 0.0894f;
        if (Input.GetMouseButton(0) && currentState == state.STARTED) {
            height = newPos.y - startPos.y;
            width = newPos.x - startPos.x;
            newArea.transform.position = new Vector3(startPos.x + width / 2, startPos.y + height / 2, -10);
            newArea.transform.localScale = new Vector3(width, height, 1);
        }

        if (Input.GetMouseButtonUp(0)) //print("finished making");
            currentState = state.INSCENE;

        if (Input.GetMouseButtonDown(0) && currentState == state.INSCENE) {
            currentState = state.WAITING;
            DestroyImmediate(newArea);
        }

        if (Input.GetMouseButtonDown(0) && currentState == state.WAITING && onScreen) {
            startPos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                Mathf.Abs(moveCam.transform.position.z + 10)));
            newArea = Instantiate(selectionArea, new Vector3(startPos.x, startPos.y, -10), Quaternion.identity);
            newArea.transform.localScale = new Vector3(0, 0, 1);
            currentState = state.STARTED;
        }

        if (Input.GetKeyDown(KeyCode.M) && currentState == state.INSCENE) {
            currentState = state.MOVINGOBJECTS;
            copiedObjects = GetObjectsInSelection();
            DestroyImmediate(newArea);
            firstFrame = true;
        }

        if (currentState == state.MOVINGOBJECTS) {
            Vector3 mousePos = Input.mousePosition;
            currentDragPoint =
                moveCam.ScreenToWorldPoint(new Vector3(mousePos.x, mousePos.y,
                    Mathf.Abs(moveCam.transform.position.z + 10)));
            if (firstFrame) {
                lastDragPoint = currentDragPoint;
                firstFrame = false;
            }

            difference = currentDragPoint - lastDragPoint;
            lastDragPoint = currentDragPoint;
            for (var i = 0; i < copiedObjects.Count; i++) {
                copiedObjects[i].transform.position += difference;
                if (copiedObjects[i].GetComponent<Wire>() != null)
                    for (var j = 0; j < copiedObjects[i].GetComponent<Wire>().anchorPoints.Count; j++)
                        copiedObjects[i].GetComponent<Wire>().anchorPoints[j] +=
                            new Vector2(difference.x, difference.y);
            }
        }

        if (currentState == state.COPYINGOBJECTS) {
            Vector3 mousePos = Input.mousePosition;
            currentDragPoint =
                moveCam.ScreenToWorldPoint(new Vector3(mousePos.x, mousePos.y,
                    Mathf.Abs(moveCam.transform.position.z + 10)));
            if (firstFrame) {
                lastDragPoint = currentDragPoint;
                firstFrame = false;
            }
            difference = currentDragPoint - lastDragPoint;
            lastDragPoint = currentDragPoint;
            for (var i = 0; i < copiedObjects.Count; i++)
                if (copiedObjects[i].GetComponent<Wire>() != null)
                    for (var j = 0; j < copiedObjects[i].GetComponent<Wire>().anchorPoints.Count; j++)
                        copiedObjects[i].GetComponent<Wire>().anchorPoints[j] +=
                            new Vector2(difference.x, difference.y);
        }

        if (Input.GetKeyDown(KeyCode.C) && Input.GetKey(KeyCode.LeftControl) && currentState == state.INSCENE) {
            var dic = new Dictionary<GameObject, GameObject>();
            firstFrame = true;
            var objectsInSelection = GetObjectsInSelection();
            copiedObjects.Clear();
            foreach (GameObject obj in objectsInSelection)
                if (obj.GetComponent<Gate>() != null || obj.GetComponent<IO>() != null) {
                    GameObject newObj = Instantiate(obj, obj.transform.position, obj.transform.rotation);
                    if (newObj.GetComponent<IO>() != null)
                        if (obj.GetComponent<IO>().log == IO.logic.HIGH) {
                            print("make new high");
                            newObj.GetComponent<IO>().log = IO.logic.HIGH;
                        }

                    newObj.name += newObj.GetInstanceID().ToString();
                    dic.Add(obj, newObj);
                    if (newObj.GetComponent<Gate>() != null)
                        newObj.GetComponent<Gate>().createdFromCopy = true;
                    else if (newObj.GetComponent<IO>() != null) newObj.GetComponent<IO>().createdFromCopy = true;
                }
                else if (obj.name.Contains("textFieldCanvas")) {
                    print("FLAGG");
                    GameObject newobj = Instantiate(obj, obj.transform.position, obj.transform.rotation);
                    newobj.name += newobj.GetInstanceID().ToString();
                    DestroyImmediate(newobj.transform.GetChild(0).GetChild(0).gameObject);
                    newobj.transform.GetChild(0).gameObject.GetComponent<TextControls>().createdFromCopy = true;
                }

            foreach (GameObject obj in objectsInSelection)
                if (obj.GetComponent<Wire>() != null) {
                    GameObject newObj = Instantiate(obj, obj.transform.position, Quaternion.identity);
                    newObj.name += newObj.GetInstanceID().ToString();
                    newObj.GetComponent<Wire>().startGate = null;
                    newObj.GetComponent<Wire>().endGate = null;
                    newObj.GetComponent<Wire>().startIO = null;
                    newObj.GetComponent<Wire>().endIO = null;
                    newObj.GetComponent<Wire>().createdFromCopy = true;

                    if (obj.GetComponent<Wire>().startPin.gateOrIO) {
                        GameObject name = obj.GetComponent<Wire>().startPin.gate.gameObject;
                        newObj.GetComponent<Wire>().startPin =
                            GameObject.Find(dic[name].name).transform.Find("pins").transform
                                .Find(obj.GetComponent<Wire>().startPin.name)
                                .gameObject.GetComponent<Pin>();
                        newObj.GetComponent<Wire>().startPin.gate =
                            GameObject.Find(dic[name].name).GetComponent<Gate>();
                        newObj.GetComponent<Wire>().startGate =
                            GameObject.Find(dic[name].name).GetComponent<Gate>();
                    }
                    else {
                        GameObject name = obj.GetComponent<Wire>().startPin.io.gameObject;
                        newObj.GetComponent<Wire>().startPin =
                            GameObject.Find(dic[name].name).transform.Find("pins").transform
                                .Find(obj.GetComponent<Wire>().startPin.name)
                                .gameObject.GetComponent<Pin>();
                        newObj.GetComponent<Wire>().startPin.io =
                            GameObject.Find(dic[name].name).GetComponent<IO>();
                        newObj.GetComponent<Wire>().startIO =
                            GameObject.Find(dic[name].name).GetComponent<IO>();
                    }

                    if (obj.GetComponent<Wire>().endPin.gateOrIO) {
                        GameObject name = obj.GetComponent<Wire>().endPin.gate.gameObject;
                        newObj.GetComponent<Wire>().endPin =
                            GameObject.Find(dic[name].name).transform.Find("pins").transform
                                .Find(obj.GetComponent<Wire>().endPin.name)
                                .gameObject.GetComponent<Pin>();
                        newObj.GetComponent<Wire>().endPin.gate =
                            GameObject.Find(dic[name].name).GetComponent<Gate>();
                        newObj.GetComponent<Wire>().endGate =
                            GameObject.Find(dic[name].name).GetComponent<Gate>();
                    }
                    else {
                        GameObject name = obj.GetComponent<Wire>().endPin.io.gameObject;
                        newObj.GetComponent<Wire>().endPin =
                            GameObject.Find(dic[name].name).transform.Find("pins").transform
                                .Find(obj.GetComponent<Wire>().endPin.name)
                                .gameObject.GetComponent<Pin>();
                        newObj.GetComponent<Wire>().endPin.io =
                            GameObject.Find(dic[name].name).GetComponent<IO>();
                        newObj.GetComponent<Wire>().endIO =
                            GameObject.Find(dic[name].name).GetComponent<IO>();
                    }

                    copiedObjects.Add(newObj);
                }

            if (copiedObjects.Count > 0) {
                currentState = state.COPYINGOBJECTS;
                GameObject.FindGameObjectWithTag("manageCanvas").GetComponent<ControlsManager>().snapBool = false;
                GameObject.FindGameObjectWithTag("manageCanvas").GetComponent<ControlsManager>().selectionInProgress = true;
            }
            DestroyImmediate(newArea);
        }

        if ((Input.GetMouseButtonDown(2) || Input.GetKeyDown(KeyCode.Delete)) && currentState == state.INSCENE) {
            var objectsInSelection = GetObjectsInSelection();
            foreach (GameObject obj in objectsInSelection) {
                print(obj.name);
                if (obj.GetComponent<Wire>() != null) manager.removeWire(obj);
                DestroyImmediate(obj);
                DestroyImmediate(newArea);
            }
        }

        if (Input.GetKeyDown(KeyCode.D) && currentState == state.INSCENE) {
            var objectsInSelection = GetObjectsInSelection();
            GameObject binToDec = new GameObject();
            binToDec.name = "binaryToDecimal";
            binToDec.AddComponent<BinaryToDecimalGroup>();
            binToDec.GetComponent<BinaryToDecimalGroup>().objectsInSelection = objectsInSelection;
        }

        if (Input.GetKeyDown(KeyCode.X) && currentState == state.INSCENE) DestroyImmediate(newArea);
    }

    private List<GameObject> GetObjectsInSelection() {
        var objectsInside = new List<GameObject>();
        var objects = new List<GameObject>(SceneManager.GetActiveScene().GetRootGameObjects());
        var objectsCount = objects.Count;
        for (var i = 0; i < objectsCount; i++)
            if (objects[i].GetComponent<Wire>() == null && objects[i].GetComponent<Gate>() == null &&
                objects[i].GetComponent<IO>() == null && !objects[i].name.Contains("textFieldCanvas")) {
            }
            else {
                //print(objects[i].name.Contains("textFieldCanvas"));
                if (objects[i].GetComponent<Wire>() != null) {
                    var allInside = true;
                    foreach (Vector2 point in objects[i].GetComponent<Wire>().anchorPoints)
                        if (!IsPointInSquare(point))
                            allInside = false;
                    if (allInside) objectsInside.Add(objects[i]);
                }
                else {
                    if (IsObjectInSquare(objects[i]))
                        objectsInside.Add(objects[i]);
                }
            }

        return objectsInside;
    }

    private bool IsPointInSquare(Vector3 point) {
        if (point.x < newArea.transform.position.x + Mathf.Abs(width) / 2 &&
            point.x > newArea.transform.position.x - Mathf.Abs(width) / 2 &&
            point.y < newArea.transform.position.y + Mathf.Abs(height) / 2 &&
            point.y > newArea.transform.position.y - Mathf.Abs(height) / 2)
            return true;
        return false;
    }

    private bool IsObjectInSquare(GameObject sceneObj) {
        Vector3 position = sceneObj.transform.position;
        if (sceneObj.name.Contains("textFieldCanvas")) {
            position = sceneObj.transform.GetChild(0).transform.position;
        }
        if (position.x < newArea.transform.position.x + Mathf.Abs(width) / 2 &&
            position.x > newArea.transform.position.x - Mathf.Abs(width) / 2 &&
            position.y < newArea.transform.position.y + Mathf.Abs(height) / 2 &&
            position.y > newArea.transform.position.y - Mathf.Abs(height) / 2)
            return true;

        return false;
    }

    private enum state {
        STARTED,
        WAITING,
        INSCENE,
        COPYINGOBJECTS,
        MOVINGOBJECTS
    }
}