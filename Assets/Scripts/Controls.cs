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
        gameObject.GetComponent<SpriteRenderer>().color = Color.white;
    }

    private void OnMouseExit()
    {
        gameObject.GetComponent<SpriteRenderer>().color = Color.black;
    }
}