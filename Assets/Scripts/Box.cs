using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Box : MonoBehaviour {
    public LineRenderer box;
    public List<Vector2> _drawPoints;

    public Vector3 origin;

    public MeshCollider meshCollide;
    private readonly float _lineWidth = 0.01f;

    private readonly int resolution = 10;

    public bool _drawing = true;
    private Camera _moveCam;
    private Mesh mesh;
    public bool createdFromCopy = false;

    private void Start() {
        box = gameObject.AddComponent<LineRenderer>();
        box.material =
            new Material(Shader.Find("Sprites/Default")) {color = new Color(0f / 255f, 0f / 255f, 0f / 255f, 1f)};
        box.GetComponent<LineRenderer>().startWidth = 1;
        box.GetComponent<LineRenderer>().endWidth = 1;
        box.GetComponent<LineRenderer>().widthMultiplier = _lineWidth;
        
        box.loop = true;
        _moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
        box.positionCount = 0;
        meshCollide = gameObject.AddComponent<MeshCollider>();
        mesh = new Mesh();
        StartCoroutine(meshUpdater());
        if (!createdFromCopy) {
            _drawPoints = new List<Vector2>();
            _drawPoints.Clear();
            _drawPoints.Add(origin);
        }
        else {
            box.positionCount = 0;
            var count = 0;
            for (var i = 0; i < _drawPoints.Count; i++) //make the curve portion
                //make the line portion
                for (var j = 0; j < resolution; j++) {
                    Vector2 point;
                    if (i == _drawPoints.Count - 1)
                        point = Lerp(_drawPoints[_drawPoints.Count - 1], _drawPoints[0], (float) j / resolution);
                    else
                        point = Lerp(_drawPoints[i], _drawPoints[i + 1], (float) j / resolution);

                    box.positionCount++;
                    box.SetPosition(count,
                        new Vector3(point.x, point.y, -10));
                    count++;
                }
        }
       
    }


    // Update is called once per frame
    private void Update() {
        if (_drawing) {
            Vector3 movePos = _moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                Mathf.Abs(_moveCam.transform.position.z + 10)));
            _drawPoints.Add(new Vector2(origin.x, movePos.y));
            _drawPoints.Add(movePos);
            _drawPoints.Add(new Vector2(movePos.x, origin.y));

            box.positionCount = 0;
            var count = 0;
            for (var i = 0; i < _drawPoints.Count; i++) //make the curve portion
                //make the line portion
                for (var j = 0; j < resolution; j++) {
                    Vector2 point;
                    if (i == _drawPoints.Count - 1)
                        point = Lerp(_drawPoints[_drawPoints.Count - 1], _drawPoints[0], (float) j / resolution);
                    else
                        point = Lerp(_drawPoints[i], _drawPoints[i + 1], (float) j / resolution);

                    box.positionCount++;
                    box.SetPosition(count,
                        new Vector3(point.x, point.y, -10));
                    count++;
                }
            
            if (Input.GetKeyDown(KeyCode.B)) {
                _drawing = false;
                GameObject.FindWithTag("startup").GetComponent<BoundingBoxControls>().drawing = false;
                return;
            }

            _drawPoints.RemoveRange(1, 3);
        }
    }

    private void OnMouseEnter() {
        if (!_drawing) box.widthMultiplier = _lineWidth * 2;
    }

    private void OnMouseExit() {
        box.widthMultiplier = _lineWidth;
    }

    private void OnMouseOver() {
        if ((Input.GetMouseButtonDown(2) || Input.GetKeyDown(KeyCode.Escape)) && !_drawing)
            DestroyImmediate(gameObject);
    }

    private IEnumerator meshUpdater() {
        while (true) {
            updateMesh();
            yield return new WaitForSeconds(0.5f);
        }
    }

    private void updateMesh() {
        box.BakeMesh(mesh, GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>(), true);
        meshCollide.sharedMesh = mesh;
    }

    private static Vector2 Lerp(Vector2 start, Vector2 end, float t) {
        return start + (end - start) * t;
    }

    private Vector2 GetCurvePoint(Vector2 start, Vector2 end, float t) {
        Vector2 anchorPoint;
        Vector2 averagePos = GetAverageAnchorPointPosition();
        Vector2 anchorPoint1 = new(start.x, end.y);
        Vector2 anchorPoint2 = new(end.x, start.y);
        if (Vector2.Distance(averagePos, anchorPoint1) > Vector2.Distance(averagePos, anchorPoint2))
            anchorPoint = anchorPoint1;
        else
            anchorPoint = anchorPoint2;
        Vector2 p1 = Lerp(start, anchorPoint, t);
        Vector2 p2 = Lerp(anchorPoint, end, t);

        return Lerp(p1, p2, t);
    }

    private Vector2 GetAverageAnchorPointPosition() {
        Vector2 anchorPointSum = Vector2.zero;
        foreach (Vector2 point in _drawPoints) anchorPointSum += point;

        return anchorPointSum / 4;
    }
}