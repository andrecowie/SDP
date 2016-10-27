using UnityEngine;
using UnityEngine.SceneManagement;
public class LevelSelect : MonoBehaviour
{
    int sw = Screen.width;
    int sh = Screen.height;

    public string Level1;
    public string Level2;

    void OnGUI()
    {
        //Play Trump
        if (GUI.Button(new Rect(sw * .1f, sh * .2f, sw * .3f, sh * .5f), "Play Trump"))
        {
			SceneManager.LoadScene(Level1);
        }
        //Under development
        if (PlayerPrefs.GetInt("LevelUnlock", 0) >= 2)
        {
            if (GUI.Button(new Rect(sw * .6f, sh * .2f, sw * .3f, sh * .5f), "developing"))
            {
                PlayerPrefs.DeleteKey("LevelUnlock");
                Application.LoadLevel(Level2);
            }
        }
        else
        {
			GUI.Box(new Rect(sw * .6f, sh * .2f, sw * .3f, sh * .5f), "developing");
        }
    }
}
