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
    public bool createdFromCopy = false;


    // Start is called before the first frame update
    private void Start() {
        if (!createdFromCopy) {
            IOForConversion = new List<GameObject>();
            GetIOInSelection();
        }
        bracket = gameObject.AddComponent<LineRenderer>();
        bracket.material =
            new Material(Shader.Find("Sprites/Default")) {color = new Color(0f / 255f, 0f / 255f, 0f / 255f, 1f)};
        bracket.startWidth = 1;
        bracket.endWidth = 1;
        bracket.widthMultiplier = _lineWidth;
        bracketPoints = new List<Vector2>();
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
    }

    // Update is called once per frame
    private void Update() {
        if (!error) {
            UpdateBracket();
            var number = GetDecimalNumber();
            numToShow.GetComponent<TextMeshPro>().text = number.ToString();
            Vector2 averagePos = (bracketPoints[0] + bracketPoints[1]) / 2f;
            numToShow.transform.position = new Vector3(averagePos.x/0.95f, averagePos.y, -10);
        }
        else {
            print("Destroy Object");
            DestroyImmediate(gameObject);
        }
    }

    private int GetDecimalNumber() {
        var binaryNumber = 0;
        var placeNum = 0;
        foreach (GameObject io in IOForConversion) {
            IO.logic value = io.GetComponent<IO>().log;
            if (value == IO.logic.HIGH) {
                int shift = 0b1 << placeNum;
                binaryNumber |= shift;
            }
            placeNum++;
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

        bracket.positionCount = 0;
        var count = 0;
        foreach (Vector2 point in bracketPoints) {
            bracket.positionCount++;
            bracket.SetPosition(count, new Vector3(point.x, point.y, -10));
            count++;
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

        print("INS: " + ins);
        print("OUTS: " + outs);
        if (ins == 0 && outs == 0) error = true;
    }
}