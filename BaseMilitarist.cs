using UnityEngine;
using System.Collections;

public class BaseMilitarist : OwnCharacterClass {
	public BaseMilitarist(){
		OwnCharacterClass = "Militarist";
		CharacterClassDescription = "A person who like solve problem by force";
		military = 15;
		diplomatic = 7;
		economy = 16;
		education = 10;
}
