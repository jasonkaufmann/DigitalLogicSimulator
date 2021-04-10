using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UIElements;

public class Selection : MonoBehaviour {
    public GameObject selectionArea;
    public GameObject newArea;
    public List<GameObject> copiedObjects;
    public Vector3 difference;

    private state currentState;
    private bool firstFrame = true;
    private float height;
    private Vector3 lastDragPoint, currentDragPoint;
    private Camera moveCam;

    private Sprite rectangle;
    private Vector3 startPos;
    private float width;

    private void Start() {
        moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
        currentState = state.WAITING;
    }

    // Update is called once per frame
    private void Update() {
        Vector3 newPos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
            Mathf.Abs(moveCam.transform.position.z + 10)));
        bool onScreen = (Input.mousePosition.y < Screen.height * 0.914f &&
                         Input.mousePosition.y > Screen.height * 0.0894f);
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
            Destroy(newArea);
        }

        if (Input.GetMouseButtonDown(0) && currentState == state.WAITING && onScreen) {
            startPos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                Mathf.Abs(moveCam.transform.position.z + 10)));
            newArea = Instantiate(selectionArea, new Vector3(startPos.x, startPos.y, -10), Quaternion.identity);
            newArea.transform.localScale = new Vector3(0, 0, 1);
            currentState = state.STARTED;
        }

        if (Input.GetKeyDown(KeyCode.M) && currentState == state.INSCENE) {
            currentState = state.COPYINGOBJECTS;
            copiedObjects = GetObjectsInSelection();
            firstFrame = true;
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
            for (var i = 0; i < copiedObjects.Count; i++) {
                copiedObjects[i].transform.position += new Vector3(difference.x, difference.y, 0);
                //print(copiedObjects[i].name);
                if (copiedObjects[i].GetComponent<Wire>() != null) {
                    //print("changing anchor points");
                    for (var j = 0; j < copiedObjects[i].GetComponent<Wire>().anchorPoints.Count; j++)
                        copiedObjects[i].GetComponent<Wire>().anchorPoints[j] +=
                            new Vector2(difference.x, difference.y);
                }
            }
        }

        if (Input.GetKey(KeyCode.C) && Input.GetKey(KeyCode.LeftControl) && currentState == state.INSCENE) {
            var dic = new Dictionary<GameObject, GameObject>();
            firstFrame = true;
            var objectsInSelection = GetObjectsInSelection();
            copiedObjects.Clear();
            //print(objectsInSelection.Count);
            foreach (GameObject obj in objectsInSelection) //print(obj.name);
                if (obj.GetComponent<Wire>() == null) {
                    GameObject newObj = Instantiate(obj, obj.transform.position, Quaternion.identity);
                    if (newObj.GetComponent<IO>() != null) {
                        if (obj.GetComponent<IO>().log == IO.logic.HIGH) {
                            print("make new high");
                            newObj.GetComponent<IO>().log = IO.logic.HIGH;
                        }
                    }
                    newObj.name += newObj.GetInstanceID().ToString();
                    dic.Add(obj, newObj);
                    if (newObj.GetComponent<Gate>() != null)
                        newObj.GetComponent<Gate>().createdFromCopy = true;
                    else if (newObj.GetComponent<IO>() != null) newObj.GetComponent<IO>().createdFromCopy = true;
                    copiedObjects.Add(newObj);
                    //print(obj.name);
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
                    //print(obj.name);
                    copiedObjects.Add(newObj);
                }

            currentState = state.COPYINGOBJECTS;
        }

        if (Input.GetMouseButtonDown(2) && currentState == state.INSCENE) {
            var objectsInSelection = GetObjectsInSelection();
            foreach (GameObject obj in objectsInSelection) {
                Destroy(obj);
                Destroy(newArea);
            }
        }

        if (Input.GetKeyDown(KeyCode.X) && currentState == state.INSCENE) Destroy(newArea);
    }

    private List<GameObject> GetObjectsInSelection() {
        var objectsInside = new List<GameObject>();
        var objects = new List<GameObject>(SceneManager.GetActiveScene().GetRootGameObjects());
        for (var i = 0; i < objects.Count; i++)
            if (objects[i].GetComponent<Wire>() == null && objects[i].GetComponent<Gate>() == null &&
                objects[i].GetComponent<IO>() == null) {
                //print(objects[i].name);
                objects.Remove(objects[i]);
            }
            else {
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
        //print(objectsInside.Count);

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
        COPYINGOBJECTS
    }
}