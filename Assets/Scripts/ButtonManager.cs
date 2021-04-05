using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonManager : MonoBehaviour
{
    public GameObject notPF;
    public GameObject andPF;
    public GameObject orPF;
    public GameObject inPF;
    public GameObject outPF;

    public void NOTButton() {
        GameObject newobj = Instantiate(notPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10), Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.NOT;
    }
    public void ANDButton() {
        GameObject newobj = Instantiate(andPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10), Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.AND;
    }
    
    public void ORButton() {
        GameObject newobj = Instantiate(orPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10), Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.OR;
    }
    
    public void INButton() {
        GameObject newobj = Instantiate(inPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10), Quaternion.identity);
        newobj.AddComponent<IO>();
        newobj.GetComponent<IO>().IOType = IO.type.IN;
    }
    public void OUTButton() {
        GameObject newobj = Instantiate(outPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10), Quaternion.identity);
        newobj.transform.Rotate(Vector3.forward, 180);
        newobj.AddComponent<IO>();
        newobj.GetComponent<IO>().IOType = IO.type.OUT;
    }
}
