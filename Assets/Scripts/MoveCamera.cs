using UnityEngine;

public class MoveCamera : MonoBehaviour {
    public Camera moveCamera;

    private readonly int sensitivity = 2;
    private Vector3 dragOrigin;
    public Vector3 difference;
    private Vector3 lastDragPoint, currentDragPoint;

    // Update is called once per frame
    private void Update() {
        Ray ray = moveCamera.ScreenPointToRay(Input.mousePosition);
        Debug.DrawRay(ray.origin, ray.direction, Color.green);

        if (moveCamera.transform.position.z < -10.5)
            moveCamera.transform.position += ray.direction * sensitivity * Input.GetAxis("Mouse ScrollWheel");
        else if (Input.GetAxis("Mouse ScrollWheel") < 0)
            moveCamera.transform.position += ray.direction * sensitivity * Input.GetAxis("Mouse ScrollWheel");
        if (Input.GetMouseButton(1)) {
            Vector3 mousePos = Input.mousePosition;
            //print("Mouse Position: " + mousePos);
            currentDragPoint =
                moveCamera.ScreenToWorldPoint(new Vector3(mousePos.x, mousePos.y,
                    Mathf.Abs(moveCamera.transform.position.z + 10)));
            if (Input.GetMouseButtonDown(1)) lastDragPoint = currentDragPoint;
            difference = currentDragPoint - lastDragPoint;
            moveCamera.transform.position -= new Vector3(difference.x, difference.y, 0);
            currentDragPoint =
                moveCamera.ScreenToWorldPoint(new Vector3(mousePos.x, mousePos.y,
                    Mathf.Abs(moveCamera.transform.position.z + 10)));
            lastDragPoint = currentDragPoint;
        }
    }
}