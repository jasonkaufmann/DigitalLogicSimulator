using UnityEngine;

public class MoveCamera : MonoBehaviour
{
    public Camera moveCamera;
    public Vector3 difference;

    private readonly int sensitivity = 2;
    private Vector3 dragOrigin;
    private Vector3 lastDragPoint, currentDragPoint;

    // Update is called once per frame
    private void Update()
    {
        //if(Time.timeScale == 0)return;
        var ray = moveCamera.ScreenPointToRay(Input.mousePosition);

        if (moveCamera.transform.position.z < -10.5 &&
            !GameObject.FindWithTag("manageCanvas").GetComponent<ControlsManager>().stopScroll)
            moveCamera.transform.position += sensitivity * Input.GetAxis("Mouse ScrollWheel") * ray.direction;
        else if (Input.GetAxis("Mouse ScrollWheel") < 0 &&
                 !GameObject.FindWithTag("manageCanvas").GetComponent<ControlsManager>().stopScroll)
            moveCamera.transform.position += sensitivity * Input.GetAxis("Mouse ScrollWheel") * ray.direction;
        if (Input.GetMouseButton(1))
        {
            var camPos = moveCamera.transform.position;
            currentDragPoint =
                moveCamera.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                    Mathf.Abs(camPos.z + 10)));
            if (Input.GetMouseButtonDown(1)) lastDragPoint = currentDragPoint;
            difference = currentDragPoint - lastDragPoint;
            moveCamera.transform.position -= new Vector3(difference.x, difference.y, 0);
            currentDragPoint =
                moveCamera.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                    Mathf.Abs(camPos.z + 10)));
            lastDragPoint = currentDragPoint;
        }
    }
}