#include "pch.h"
#include "Entity.h"
#include <iostream>

int main()
{
	//Paramétrage du monstre
	int alignement0[2]={0,0};
	int characteristics0[6] = { 8,14,10,10,8,8 };

	Monster *goblin = new Monster("Gobelin", "Humanoid (goblinoid)", "small", 15, 9, 7, characteristics0, alignement0, 1, 50);
	goblin->setattack_damages(5);
	goblin->setAlignement(2, 1);
	goblin->Afficher();
	cout << endl;
	goblin->Afficher("name");
	goblin->Afficher("alignement");
	goblin->Afficher("attack damages");
	goblin->Afficher("health points");
	cout << endl;
	goblin->Afficher("characteristics");	//Force, Dexterity, Constitution, Intelligence, Wisdom, Charisma

	delete(goblin);
}

/*
	Je dois encore ajouter un geter fonctionnant comme la fonction afficher mais qui se contente de retourner la valeur
	du paramètre choisi. (donc surcharge de methode car retourne parfois un int parfois un string);
	Ou alors, créer une methode pour chaque parametre ex: " int getAttackDamages(void); "
*/