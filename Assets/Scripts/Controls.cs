using UnityEngine;

public class Controls : MonoBehaviour
{
    private ControlsManager manager;

    private void Start()
    {
        manager = FindObjectOfType<ControlsManager>();
    }

    private void OnMouseDown()
    {
        manager.changeCommand = true;
    }

    private void OnMouseEnter()
    {
        print("entered");
        gameObject.GetComponent<SpriteRenderer>().color = Color.white;
    }

    private void OnMouseExit()
    {
        print("exited");
        gameObject.GetComponent<SpriteRenderer>().color = Color.black;
    }
}