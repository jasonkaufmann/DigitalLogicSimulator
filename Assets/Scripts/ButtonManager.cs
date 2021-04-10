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
        newobj.name += newobj.GetInstanceID().ToString();
    }
    public void ANDButton() {
        GameObject newobj = Instantiate(andPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10), Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.AND;
        newobj.name += newobj.GetInstanceID().ToString();
    }
    
    public void ORButton() {
        GameObject newobj = Instantiate(orPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10), Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.OR;
        newobj.name += newobj.GetInstanceID().ToString();
    }
    
    public void INButton() {
        GameObject newobj = Instantiate(inPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10), Quaternion.identity);
        newobj.AddComponent<IO>();
        newobj.GetComponent<IO>().IOType = IO.type.OUT;
        newobj.name += newobj.GetInstanceID().ToString();
    }
    public void OUTButton() {
        GameObject newobj = Instantiate(outPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10), Quaternion.identity);
        newobj.AddComponent<IO>();
        newobj.GetComponent<IO>().IOType = IO.type.IN;
        newobj.name += newobj.GetInstanceID().ToString();
    }

    public void changeSimSpeed() {
        GameObject slide = GameObject.FindGameObjectWithTag("slider");
        
    }
}
