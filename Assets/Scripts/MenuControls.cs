using System.IO;
using System.Runtime.CompilerServices;
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
        if (!statesLoaded) loadSavedStates();
        mainMenu.SetActive(false);
        loadProjectMenu.SetActive(true);
    }

    public void backButtonClicked() {
        mainMenu.SetActive(true);
        if (loadProjectMenu.activeSelf) {
            loadProjectMenu.SetActive(false);
        } else if (tutorialMenu.activeSelf) {
            tutorialMenu.SetActive(false);
        }
    }

    public void loadScene() {
        string name = EventSystem.current.currentSelectedGameObject.transform.GetChild(0).GetComponent<TMP_Text>().text;
        PlayerPrefs.SetString("loadRequestName", name);
        PlayerPrefs.SetString("currentProjectName", name);
        PlayerPrefs.SetInt("loadOrNewStatus", 1);
        PlayerPrefs.Save();
        SceneManager.LoadScene(1);
    }
    public void loadSavedStates() {
        DirectoryInfo d = new DirectoryInfo(Application.persistentDataPath + "/SavedStates"); //Assuming Test is your Folder
        var Files = d.GetFiles("*.json"); //Getting Text files
        var str = "";
        var i = 1;
        foreach (FileInfo file in Files) {
            str = file.Name.Split('.')[0];
            GameObject button = Instantiate(savedStateButton,
                scrollView.transform.position + new Vector3(0, scrollView.transform.localScale.y/2, 0),
                Quaternion.identity);
            button.transform.SetParent(scrollView.transform.GetChild(0));
            button.transform.localScale = new Vector3(1.1f, 1f, 1f);
            button.GetComponent<RectTransform>().position -= new Vector3(0, button.transform.localScale.y/2 * i + button.transform.localScale.y/4, 0);
            button.transform.GetChild(0).GetComponent<TMP_Text>().text = str;
            button.GetComponent<RectTransform>().anchoredPosition =
                new Vector2(0,button.GetComponent<RectTransform>().anchoredPosition.y);
            button.GetComponent<UnityEngine.UI.Button>().onClick.AddListener(loadScene);
            i++;
        }

        statesLoaded = true;
    }
}