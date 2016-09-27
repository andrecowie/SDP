using UnityEngine;
using System.Collections;

public class CreateNewCharacter : MonoBehaviour {
	private BasePlayer newPlayer;
	private bool isMilitarist;
	private bool isDioplomatist;
	// Use this for initialization
	void Start () {
		newPlayer = new BasePlayer ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnGUI{

		isMilitarist = GUILayout.Toggle(isMilitarist, "Militarist Class");
		isDioplomatist = GUILayout.Toggle(isDioplomatist, "Dioplomatist Class");
		if(GUILayout.Buttibb("Create")){

			if(isMilitarist){

				newPlayer.PlayerClass = new BaseMilitarist();
			}
			else if(isDioplomatist){

				newPlayer.PlayerClass = new BaseDiplomatist();
			}
			newPlayer.PlayerLevel = 1;
			newPlayer.military = newPlayer.PlayerClass.military;
			newPlayer.diplomatic = newPlayer.PlayerClass.diplomatic;
			newPlayer.economy = newPlayer.PlayerClass.economy;
			newPlayer.education = newPlayer.PlayerClass.education;

			Debug.Logger("Player Class: "+ newPlayer.PlayerClass.CharacterClassName);
			Debug.Logger("Player Level: "+ newPlayer.PlayerLevel);
			Debug.Logger("Player Military: "+ newPlayer..Military);
			Debug.Logger("Player Diplomatic: "+ newPlayer..Diplomatic);
			Debug.Logger("Player Economy: "+ newPlayer.Economy);
			Debug.Logger("Player Education: "+ newPlayer.Education);
		}

	}
}
