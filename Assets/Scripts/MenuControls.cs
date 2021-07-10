using System;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Net;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class MenuControls : MonoBehaviour
{
    public GameObject mainMenu;

    public GameObject newProjectMenu;

    public GameObject loadProjectMenu;

    public GameObject tutorialMenu;
    
    public GameObject updateMenu;

    public GameObject projectNameField;

    public GameObject scrollView;
    public bool statesLoaded;
    public GameObject savedStateButton;
    public GameObject deleteButton;
    public GameObject loadingDuo;
    public GameObject downloadUpdate;
    public GameObject upToDate;

    public string programVersion;

    public void Start()
    {
        programVersion = File.ReadAllText( Application.dataPath + "/version.txt");
    }

    public void Update()
    {
       loadingDuo.transform.GetChild(0).Rotate(new Vector3(0,0, 5f)); 
    }

    public void startButtonClicked()
    {
        mainMenu.SetActive(false);
        newProjectMenu.SetActive(true);
    }

    public void cancelButtonClicked()
    {
        mainMenu.SetActive(true);
        newProjectMenu.SetActive(false);
    }

    public void quitButtonClicked()
    {
        Application.Quit();
    }

    public void tutorialButtonClicked()
    {
        mainMenu.SetActive(false);
        tutorialMenu.SetActive(true);
    }
    
    public void updateButtonClicked()
    {
        mainMenu.SetActive(false);
        updateMenu.SetActive(true);
    }

    public void goButtonClicked()
    {
        var title = projectNameField.GetComponent<TMP_InputField>().text;
        if (title.Length != 0)
        {
            PlayerPrefs.SetString("currentProjectName", title);
            PlayerPrefs.SetInt("loadOrNewStatus", 0);
            PlayerPrefs.Save();
            SceneManager.LoadScene(1);
        }
    }

    public void loadButtonClicked()
    {
        mainMenu.SetActive(false);
        loadProjectMenu.SetActive(true);
        if (!statesLoaded) loadSavedStates();
    }
    
    public void checkUpdateStatusButtonClicked()
    {
        loadingDuo.SetActive(true); //start animation
        string mostUpToDateVersion = checkGithubCurrentVersion();
        print("Current Version: " + programVersion);
        print("Server Version: " + mostUpToDateVersion);
        
        if (mostUpToDateVersion != programVersion)
        {
            downloadUpdate.SetActive(true);
            print("get the update");
        }
        else
        {
            upToDate.SetActive(true);
            print("you have the most up to date version");
           
        }
        loadingDuo.SetActive(false); //end animation
    }

    public void downloadButtonClicked()
    {
        Process.Start(Path.Combine(Directory.GetParent(Directory.GetCurrentDirectory().ToString()).ToString(), "DLS.exe"));
        Application.Quit(); //kill current process
    }

    public void restartProgram()
    {
        System.Diagnostics.Process.Start(Application.dataPath.Replace("_Data", ".exe")); //new program
        Application.Quit(); //kill current process
    }

    public void backButtonClicked()
    {
        mainMenu.SetActive(true);
        if (loadProjectMenu.activeSelf)
            loadProjectMenu.SetActive(false);
        else if (tutorialMenu.activeSelf) tutorialMenu.SetActive(false);
        else if (updateMenu.activeSelf)
        {
            updateMenu.SetActive(false);
            loadingDuo.SetActive(false);
        }
    }

    public void loadScene()
    {
        var name = EventSystem.current.currentSelectedGameObject.transform.GetChild(0).GetComponent<TMP_Text>().text;
        PlayerPrefs.SetString("loadRequestName", name);
        PlayerPrefs.SetString("currentProjectName", name);
        PlayerPrefs.SetInt("loadOrNewStatus", 1);
        PlayerPrefs.Save();
        SceneManager.LoadScene(1);
    }


    public void deleteFile()
    {
        var name = EventSystem.current.currentSelectedGameObject.transform.parent.GetChild(0).GetComponent<TMP_Text>()
            .text;
        File.Delete(Application.persistentDataPath + "./" + name + ".json");
        loadSavedStates();
    }

    public void loadSavedStates()
    {
        DirectoryInfo d = new(Application.persistentDataPath); //Assuming Test is your Folder
        var Files = d.GetFiles("*.json"); //Getting Text files
        var str = "";
        var i = 1;
        var content = GameObject.FindGameObjectWithTag("content");
        foreach (Transform child in content.transform) Destroy(child.gameObject);
        foreach (var file in Files)
        {
            str = file.Name.Split('.')[0];
            var button = Instantiate(savedStateButton,
                scrollView.transform.position + new Vector3(0, scrollView.transform.localScale.y / 2, 0),
                Quaternion.identity);

            var deleteButtonObj = Instantiate(deleteButton,
                button.transform.position,
                Quaternion.identity);
            deleteButtonObj.transform.SetParent(button.transform);
            var trigger = deleteButtonObj.GetComponent<EventTrigger>();
            var entry = new EventTrigger.Entry();
            entry.eventID = EventTriggerType.PointerEnter;
            entry.callback.AddListener(eventData =>
            {
                var colorVar = deleteButtonObj.transform.parent.GetComponent<UnityEngine.UI.Button>().colors;
                colorVar.highlightedColor = Color.white;
                deleteButtonObj.transform.parent.GetComponent<UnityEngine.UI.Button>().colors = colorVar;
            });
            trigger.triggers.Add(entry);
            entry = new EventTrigger.Entry();
            entry.eventID = EventTriggerType.PointerExit;
            entry.callback.AddListener(eventData =>
            {
                var colorVar = deleteButtonObj.transform.parent.GetComponent<UnityEngine.UI.Button>().colors;
                colorVar.highlightedColor = new Color(137 / 255f, 137 / 255f, 137 / 255f, 1.0f);
                deleteButtonObj.transform.parent.GetComponent<UnityEngine.UI.Button>().colors = colorVar;
            });
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

    public string checkGithubCurrentVersion()
    {
        var url =
            "https://raw.githubusercontent.com/jasonkaufmann/projects/master/DLSBuildLocation/version.txt";
        using WebClient client = new WebClient();
        return client.DownloadString(url);
    }
}