using UnityEngine;
using System.Collections;

public class BasePlayer{

	private string playerName;
	private int playerLevel;
	private OwnCharacterClass playerClass;
	private int military; //Like "strength" in a RPG game, affecting the character's attack
	private int diplomatic //Like "Intelligence" in a RPG game, affecting the character's communication skill
	private int economy; //Like "stamina" in a RPG game, affecting the character's health
	private int education; //Like "mastery" in a RPG game, affecting the character's main skills 

	public string PlayerName{

		get{ return playerName;}
		set{ playerName = value;}

	}

	public int PlayerLevel{

		get{ return playerLevel;}
		set{ playerLevel = value;}

	}
	public OwnCharacterClass PlayerClass{

		get{ return PlayerClass;}
		set{ PlayerClass = value;}
	}
	public int Military{

		get{ return military;}
		set{ military = value;}
	}
	public int Diplomatic{

		get{ return diplomatic;}
		set{ diplomatic = value;}
	}
	public int Economy{

		get{ return economy;}
		set{ economy = value;}
	}
	public int Education{

		get{ return education;}
		set{ education = value;}
	}
}