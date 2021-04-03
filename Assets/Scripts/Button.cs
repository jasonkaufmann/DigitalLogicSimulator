using UnityEngine;
using UnityEngine.SceneManagement;

public class Button : MonoBehaviour {
    public void NextScene() {
        SceneManager.LoadScene("MainGame");
    }
}