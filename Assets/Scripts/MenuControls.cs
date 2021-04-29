using System.IO;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MenuControls : MonoBehaviour {
    public GameObject mainMenu;

    public GameObject newProjectMenu;

    public GameObject loadProjectMenu;

    public GameObject tutorialMenu;

    public GameObject projectNameField;

    public GameObject scrollView;
    public bool statesLoaded;
    public GameObject savedStateButton;
    public GameObject deleteButton;

    public void startButtonClicked() {
        mainMenu.SetActive(false);
        newProjectMenu.SetActive(true);
    }

    public void cancelButtonClicked() {
        mainMenu.SetActive(true);
        newProjectMenu.SetActive(false);
    }

    public void quitButtonClicked() {
        Application.Quit();
    }

    public void tutorialButtonClicked() {
        mainMenu.SetActive(false);
        tutorialMenu.SetActive(true);
    }

    public void goButtonClicked() {
        var title = projectNameField.GetComponent<TMP_InputField>().text;
        if (title.Length != 0) {
            PlayerPrefs.SetString("currentProjectName", title);
            PlayerPrefs.SetInt("loadOrNewStatus", 0);
            PlayerPrefs.Save();
            SceneManager.LoadScene(1);
        }
    }

    public void loadButtonClicked() {
        mainMenu.SetActive(false);
        loadProjectMenu.SetActive(true);
        if (!statesLoaded) loadSavedStates();
    }

    public void backButtonClicked() {
        mainMenu.SetActive(true);
        if (loadProjectMenu.activeSelf)
            loadProjectMenu.SetActive(false);
        else if (tutorialMenu.activeSelf) tutorialMenu.SetActive(false);
    }

    public void loadScene() {
        var name = EventSystem.current.currentSelectedGameObject.transform.GetChild(0).GetComponent<TMP_Text>().text;
        PlayerPrefs.SetString("loadRequestName", name);
        PlayerPrefs.SetString("currentProjectName", name);
        PlayerPrefs.SetInt("loadOrNewStatus", 1);
        PlayerPrefs.Save();
        SceneManager.LoadScene(1);
    }


    public void deleteFile() {
        var name = EventSystem.current.currentSelectedGameObject.transform.parent.GetChild(0).GetComponent<TMP_Text>().text;
        File.Delete(Application.persistentDataPath + "./" + name + ".json");
        loadSavedStates();
    }

    public void loadSavedStates() {
        DirectoryInfo d = new(Application.persistentDataPath); //Assuming Test is your Folder
        var Files = d.GetFiles("*.json"); //Getting Text files
        var str = "";
        var i = 1;
        GameObject content = GameObject.FindGameObjectWithTag("content");
        foreach (Transform child in content.transform) {
            GameObject.Destroy(child.gameObject);
        }
        foreach (FileInfo file in Files) {
            
            str = file.Name.Split('.')[0];
            GameObject button = Instantiate(savedStateButton,
                scrollView.transform.position + new Vector3(0, scrollView.transform.localScale.y / 2, 0),
                Quaternion.identity);

            GameObject deleteButtonObj = Instantiate(deleteButton,
                button.transform.position,
                Quaternion.identity);
            deleteButtonObj.transform.SetParent(button.transform);
            EventTrigger trigger = deleteButtonObj.GetComponent<EventTrigger>();
            EventTrigger.Entry entry = new EventTrigger.Entry();
            entry.eventID = EventTriggerType.PointerEnter;
            entry.callback.AddListener((eventData) => {
                ColorBlock colorVar = deleteButtonObj.transform.parent.GetComponent<UnityEngine.UI.Button>().colors;
                colorVar.highlightedColor = Color.white;
                deleteButtonObj.transform.parent.GetComponent<UnityEngine.UI.Button>().colors = colorVar;
            } );
            trigger.triggers.Add(entry);
            entry = new EventTrigger.Entry();
            entry.eventID = EventTriggerType.PointerExit;
            entry.callback.AddListener((eventData) => {
                ColorBlock colorVar = deleteButtonObj.transform.parent.GetComponent<UnityEngine.UI.Button>().colors;
                colorVar.highlightedColor = new Color(137/255f, 137/255f, 137/255f, 1.0f);
                deleteButtonObj.transform.parent.GetComponent<UnityEngine.UI.Button>().colors = colorVar;
            } );
            trigger.triggers.Add(entry);
            button.transform.SetParent(scrollView.transform.GetChild(0));
            button.transform.localScale = new Vector3(1.1f, 1.1f, 1f);
            button.GetComponent<RectTransform>().position -= new Vector3(0,
                button.transform.localScale.y / 2f * i + button.transform.localScale.y / 4, 0);
            button.transform.GetChild(0).GetComponent<TMP_Text>().text = str;
            button.GetComponent<RectTransform>().anchoredPosition =
                new Vector2(0, button.GetComponent<RectTransform>().anchoredPosition.y);
            button.GetComponent<UnityEngine.UI.Button>().onClick.AddListener(loadScene);
            deleteButtonObj.GetComponent<UnityEngine.UI.Button>().onClick.AddListener(deleteFile);

            deleteButtonObj.transform.Translate(Vector3.right * button.transform.localScale.x * 1.5f);
            i++;
        }

        statesLoaded = true;
    }
}