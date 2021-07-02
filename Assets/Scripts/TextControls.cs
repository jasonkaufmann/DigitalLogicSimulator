using UnityEngine;
using UnityEngine.UI;

public class TextControls : MonoBehaviour
{
    public enum state
    {
        PLACING,
        INSCENE,
        WAITING,
        COPYING
    }

    public state currentState;

    public bool createdFromCopy;
    public bool createdFromFile;
    public string createdFromFileString;
    public bool importedFromFile;

    private Vector3 copyOffset;

    // Start is called before the first frame update
    private void Start()
    {
        currentState = createdFromCopy ? state.COPYING : state.PLACING;
        var moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
        var movePos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
            Mathf.Abs(moveCam.transform.position.z + 10)));
        copyOffset = transform.position - movePos;
        if (createdFromFile && !createdFromCopy)
        {
            transform.GetComponent<InputField>().text = createdFromFileString;
            currentState = state.INSCENE;
        }
        else if (importedFromFile)
        {
            transform.GetComponent<InputField>().text = createdFromFileString;
            currentState = state.COPYING;
        }
    }

    // Update is called once per frame
    private void Update()
    {
        if (currentState == state.PLACING)
        {
            var moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
            var movePos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                Mathf.Abs(moveCam.transform.position.z + 10)));
            transform.position = movePos;
            if (Input.GetKey(KeyCode.LeftControl))
            {
                print("make bigger");
                transform.GetChild(1).transform.localScale += new Vector3(0.03f, 0.03f, 0f);
            }

            if (Input.GetKey(KeyCode.LeftAlt))
                if (transform.GetChild(1).transform.localScale.x > 0)
                    transform.GetChild(1).transform.localScale -= new Vector3(0.03f, 0.03f, 0f);
            if (Input.GetMouseButtonDown(0)) currentState = state.INSCENE;
            if (Input.GetKeyDown(KeyCode.R)) transform.Rotate(Vector3.forward, 45);
        }

        if (currentState == state.COPYING)
        {
            var moveCam = GameObject.FindGameObjectWithTag("moveCam").GetComponent<Camera>();
            var movePos = moveCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,
                Mathf.Abs(moveCam.transform.position.z + 10)));
            transform.position = movePos + copyOffset;

            if (Input.GetMouseButtonDown(0)) currentState = state.INSCENE;
        }

        if (currentState == state.WAITING) currentState = state.PLACING;
    }

    private void OnMouseOver()
    {
        if (Input.GetMouseButtonDown(2) && currentState == state.INSCENE)
        {
            print("place again");
            currentState = state.WAITING;
        }
    }
}