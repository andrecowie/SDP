using UnityEngine;
using System.Collections;

public class EndScene : MonoBehaviour
{

    public Texture backgroundTexture;

    public float sPlaceX;
    public float sPlaceY;
    public float sSizeX;
    public float sSizeY;

    public string Level;

    void OnGUI()
    {
        GUI.DrawTexture(new Rect(0, 0, Screen.width, Screen.height), backgroundTexture);

        if (GUI.Button(new Rect(Screen.width * sPlaceX, Screen.height * sPlaceY, Screen.width * sSizeX, Screen.height * sSizeY), "Back"))
        {
            Application.LoadLevel(Level);
        }
    }
}
