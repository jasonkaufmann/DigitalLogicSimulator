using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonManager : MonoBehaviour
{
    public GameObject notPF;
    public GameObject andPF;
    public GameObject nandPF;
    public GameObject and3PF;
    public GameObject orPF;
    public GameObject norPF;
    public GameObject inPF;
    public GameObject outPF;

    public void mouseEnter() {
        gameObject.GetComponent<Image>().color = new Color(1f, 1f, 1f, 0.75f);
    }
    public void mouseExit() {
        gameObject.GetComponent<Image>().color = new Color(38f / 255f, 38f / 255f, 38f / 255f, 1f);
    }
    

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
    
    public void NANDButton() {
        GameObject newobj = Instantiate(nandPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10), Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.NAND;
        newobj.name += newobj.GetInstanceID().ToString();
    }
    
    public void AND3Button() {
        GameObject newobj = Instantiate(and3PF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10), Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.AND3;
        newobj.name += newobj.GetInstanceID().ToString();
    }
    
    public void ORButton() {
        GameObject newobj = Instantiate(orPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10), Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.OR;
        newobj.name += newobj.GetInstanceID().ToString();
    }
    
    public void NORButton() {
        GameObject newobj = Instantiate(norPF, new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10), Quaternion.identity);
        newobj.AddComponent<Gate>();
        newobj.GetComponent<Gate>().gateType = Gate.type.NOR;
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
