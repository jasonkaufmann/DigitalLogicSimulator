using UnityEngine;
using UnityEngine.UI;

public class EndScreen : MonoBehaviour
{
    // Start is called before the first frame update

    public Text myText;

    private void Start()
    {
        myText.text = "Score: " + PlayerPrefs.GetInt("score");
    }
}