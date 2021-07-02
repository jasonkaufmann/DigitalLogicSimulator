using UnityEngine;

public class BoundingBoxControls : MonoBehaviour
{
    public LineRenderer box;

    public bool drawing;
    private Camera _moveCam;

    private void Start()
    {
        _moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
    }


    // Update is called once per frame
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.B) && Input.GetKey(KeyCode.LeftControl) && drawing == false)
        {
            var movePos = _moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                Mathf.Abs(_moveCam.transform.position.z + 10)));
            var newBox = new GameObject();
            newBox.AddComponent<Box>();
            newBox.GetComponent<Box>().origin = movePos;
            drawing = true;
        }
    }
}