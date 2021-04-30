using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class BinaryToDecimalGroup : MonoBehaviour {
    public List<GameObject> objectsInSelection;

    private readonly float _lineWidth = 0.01f;

    private LineRenderer bracket;
    private List<Vector2> bracketPoints;
    private bool error = false;
    public List<GameObject> IOForConversion;
    private GameObject numToShow;
    public bool loadedFromFile = false;
    
    public enum state {
        PLACING,
        INSCENE,
        WAITING,
        COPYING
    }

    public state currentState;
    public bool invert;
    public Vector3 loadedLocation;
    public float loadedScale;

    // Start is called before the first frame update
    private void Start() {
        bracketPoints = new List<Vector2>();
        currentState = state.INSCENE;
        /*bracket = gameObject.AddComponent<LineRenderer>();
        bracket.material =
            new Material(Shader.Find("Sprites/Default")) {color = new Color(0f / 255f, 0f / 255f, 0f / 255f, 1f)};
        bracket.startWidth = 1;
        bracket.endWidth = 1;
        bracket.widthMultiplier = _lineWidth;*/
        numToShow = new GameObject();
        numToShow.name = "Text";
        numToShow.AddComponent<TextMeshPro>();
        numToShow.GetComponent<TextMeshPro>().alignment = TextAlignmentOptions.Center;
        numToShow.GetComponent<TextMeshPro>().fontSize = 1;
        numToShow.GetComponent<TextMeshPro>().color = new Color(0f / 255f, 0f / 255f, 0f / 255f, 1f);
        //numToShow.GetComponent<Text>().font = Resources.GetBuiltinResource(typeof(Font), "Arial.ttf") as Font;
        gameObject.AddComponent<Canvas>();
        gameObject.AddComponent<CanvasScaler>();
        gameObject.AddComponent<GraphicRaycaster>();
        numToShow.transform.SetParent(gameObject.transform);
        gameObject.GetComponent<Canvas>().renderMode = RenderMode.WorldSpace;
        gameObject.GetComponent<Canvas>().worldCamera =
            GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
        gameObject.name += gameObject.GetInstanceID().ToString();
        gameObject.transform.SetParent(gameObject.transform);
        gameObject.AddComponent<Rigidbody2D>();
        gameObject.GetComponent<Rigidbody2D>().isKinematic = true;
        numToShow.AddComponent<BoxCollider2D>();
        numToShow.GetComponent<BoxCollider2D>().isTrigger = true;
        if (!loadedFromFile) {
            IOForConversion = new List<GameObject>();
            GetIOInSelection();
            UpdateBracket();
            Vector2 averagePos = (bracketPoints[0] + bracketPoints[1]) / 2f;
            numToShow.transform.position = new Vector3(averagePos.x/0.95f, averagePos.y, -10);
        }
        else {
            numToShow.transform.position = loadedLocation;
            numToShow.transform.localScale = new Vector3(loadedScale, loadedScale, loadedScale);
        }
    }

    // Update is called once per frame
    private void Update() {
        if (!error) {
            var number = GetDecimalNumber();
            numToShow.GetComponent<TextMeshPro>().text = number.ToString();
            numToShow.GetComponent<BoxCollider2D>().size = numToShow.GetComponent<TextMeshPro>().GetPreferredValues() * 1.25f;
            if (currentState == state.PLACING) {
                Camera moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
                Vector3 movePos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                    Mathf.Abs(moveCam.transform.position.z + 10)));
                numToShow.transform.position = movePos;
                if (Input.GetKey(KeyCode.LeftControl)) {
                    print("make bigger");
                    numToShow.transform.localScale += new Vector3(0.03f, 0.03f, 0f);
                }
                if (Input.GetKey(KeyCode.LeftAlt)) {
                    if (numToShow.transform.localScale.x > 0) {
                        numToShow.transform.localScale -= new Vector3(0.03f, 0.03f, 0f);
                    }
                }
                if (Input.GetMouseButtonDown(0)) currentState = state.INSCENE;
                if (Input.GetKeyDown(KeyCode.Escape)) DestroyImmediate(gameObject);
            }
        }
        else {
            print("Destroy Object");
            DestroyImmediate(gameObject);
        }
    }

    private int GetDecimalNumber() {
        var binaryNumber = 0;
        var placeNum = 0;
        if (invert) {
            IOForConversion.Reverse();
        }
        foreach (GameObject io in IOForConversion) {
            IO.logic value = io.GetComponent<IO>().log;
            if (value == IO.logic.HIGH) {
                int shift = 0b1 << placeNum;
                binaryNumber |= shift;
            }
            placeNum++;
        }
        if (invert) {
            IOForConversion.Reverse();
        }

        return binaryNumber;
    }

    private void UpdateBracket() {
        float longestDist = 0;
        var longestPair = new Tuple<GameObject, GameObject>(gameObject, gameObject);
        foreach (GameObject io in IOForConversion)
        foreach (GameObject ioCompare in IOForConversion) {
            var dist = Vector3.Distance(io.transform.position, ioCompare.transform.position);
            if (dist > longestDist) {
                longestDist = dist;
                longestPair = new Tuple<GameObject, GameObject>(io, ioCompare);
            }
        }

        var distX = Math.Abs(longestPair.Item1.transform.position.x - longestPair.Item2.transform.position.x);
        var distY = Math.Abs(longestPair.Item1.transform.position.y - longestPair.Item2.transform.position.y);
        if (longestPair.Item1 == gameObject || longestPair.Item2 == gameObject) {
            error = true;
            return;
        }
        bracketPoints.Clear();
        if (distY > distX) {
            if (longestPair.Item1.GetComponent<IO>().IOType == IO.type.OUT) {
                bracketPoints.Add(new Vector2(
                    longestPair.Item1.transform.position.x - longestPair.Item1.transform.localScale.x / 4f,
                    longestPair.Item1.transform.position.y));
                bracketPoints.Add(new Vector2(
                    longestPair.Item2.transform.position.x - longestPair.Item2.transform.localScale.x / 4f,
                    longestPair.Item2.transform.position.y));
            }
            else {
                bracketPoints.Add(new Vector2(
                    longestPair.Item1.transform.position.x + longestPair.Item1.transform.localScale.x / 4f,
                    longestPair.Item1.transform.position.y));
                bracketPoints.Add(new Vector2(
                    longestPair.Item2.transform.position.x + longestPair.Item2.transform.localScale.x / 4f,
                    longestPair.Item2.transform.position.y));
            }
        }

        /*bracket.positionCount = 0;
        var count = 0;
        foreach (Vector2 point in bracketPoints) {
            bracket.positionCount++;
            bracket.SetPosition(count, new Vector3(point.x, point.y, -10));
            count++;
        }*/
    }
    
    private void OnMouseOver() {
        if (Input.GetMouseButtonDown(2) && currentState == state.INSCENE) {
            currentState = state.PLACING;
        }
        if (Input.GetKeyDown(KeyCode.I) && currentState == state.INSCENE) {
            invert = !invert;
        }

    }

    private void OnMouseEnter() {
        foreach (var io in IOForConversion) {
            io.transform.localScale *= 1.1f;
        }
    }
    
    private void OnMouseExit() {
        foreach (var io in IOForConversion) {
            io.transform.localScale /= 1.1f;
        }
    }

    private void GetIOInSelection() {
        error = false;
        var ins = 0;
        var outs = 0;
        foreach (GameObject io in objectsInSelection) {
            print(io.name);
            if (io.GetComponent<IO>() != null) {
                IOForConversion.Add(io);
                if (io.GetComponent<IO>().IOType == IO.type.IN) ins++;
                else if (io.GetComponent<IO>().IOType == IO.type.OUT) outs++;
            }
        }

        foreach (GameObject io in IOForConversion)
            if (ins > outs) {
                if (io.GetComponent<IO>().IOType == IO.type.OUT) IOForConversion.Remove(io);
            }
            else {
                if (io.GetComponent<IO>().IOType == IO.type.IN) IOForConversion.Remove(io);
            }
        if (ins == 0 && outs == 0) error = true;
    }
}