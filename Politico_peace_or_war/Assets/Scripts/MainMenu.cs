using UnityEngine;
using UnityEngine.SceneManagement;
public class MainMenu : MonoBehaviour {

	public Texture backgroundTexture;
	public GUIStyle random1;

	public float guiPlacementX1;
	public float guiPlacementX2;
	public float guiPlacementX3;

	public float guiPlacementY1;
	public float guiPlacementY2;
	public float guiPlacementY3;

	public bool showGUIOutline = true;
	public string Level;
	void OnGUI(){

//background
		GUI.DrawTexture (new Rect (0, 0, Screen.width, Screen.height), backgroundTexture);

//
		if (showGUIOutline) {
			//Start
			if (GUI.Button (new Rect (Screen.width * guiPlacementX1, Screen.height * guiPlacementY1, Screen.width * .5f, Screen.height * .1f), "Start")) {
				SceneManager.LoadScene(Level);
			}
			//Setting
			if (GUI.Button (new Rect (Screen.width * guiPlacementX2, Screen.height * guiPlacementY2, Screen.width * .5f, Screen.height * .1f), "setting")) {
				print ("Clicked Options");
			}
	        //quit
			if (GUI.Button (new Rect (Screen.width * guiPlacementX3, Screen.height * guiPlacementY3, Screen.width * .5f, Screen.height * .1f), "Exit")) {
				Application.Quit();
			}
		} else {
			if (GUI.Button (new Rect (Screen.width * guiPlacementX1, Screen.height * guiPlacementY1, Screen.width * .5f, Screen.height * .1f), "", random1)) {
					print ("Clicked Play Game");
			}
		
			if (GUI.Button (new Rect (Screen.width * guiPlacementX2, Screen.height * guiPlacementY2, Screen.width * .5f, Screen.height * .1f), "", random1)) {
					print ("Clicked Options");
			}
	    }
	}
	
}
