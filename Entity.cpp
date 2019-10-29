#include "pch.h"
#include "Entity.h"

//CLASSE ENTITY
string Entity::alignement_array[3][3] = { { "lawful good" ,"neutral good","chaotic good"},{"lawful neutral","true neutral","chaotic neutral"},{"lawful evil","neutral evil","chaotic evil"} };
Entity::Entity(string name0, string type0, string size0, int armor_class0, int speed0, int health_points0, int characteristics0[6])
{
	name = name0;
	size = size0;
	type = type0;
	armor_class = armor_class;
	speed = speed0;
	health_points = health_points0;
	for (int i = 0; i < 6; i++)
	{
		characteristics[i] = characteristics0[i];
	}
}
Entity::~Entity()
{
}
void Entity::test_alignement_array()
{
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			cout << "|" << alignement_array[j][i];
		}
		cout << endl;
	}
}
void Entity::setAlignement(int alignement0_0, int alignement0_1)
{
	alignement[0] = alignement0_0;
	alignement[1] = alignement0_1;
}
void Entity::Afficher(string parameter)
{
	if (parameter == "NULL")
	{
		cout << name << endl;
		cout << type << ", " << size << endl;
	}
	if(parameter == "characteristics")
	{
		for (int i = 0; i < 6; i++)
		{
			cout << characteristics[i] << endl;
		}
	}
}

//CLASSE MONSTER
int dangerosity = 1;
int XP = 0;
int attack_damages = 0;
Monster::Monster(string name0, string type0, string size0, int armor_class0, int speed0, int health_points0, int characteristics0[6], int alignement0[2], int dangerosity0, int XP0)
	: Entity(name0, type0, size0, armor_class0, speed0, health_points0, characteristics0)
{
	alignement[0] = alignement0[0];
	alignement[1] = alignement0[1];
	dangerosity = dangerosity0;
	XP = XP0;
}
Monster::~Monster()
{
}
void Monster::Afficher(string parameter)
{
	if (parameter == "NULL")
	{
		cout << name << endl;
		cout << type << ", " << size << ", " << alignement_array[alignement[0]][alignement[1]] << endl;
		cout << "Attack damages : " << attack_damages << endl;
		cout << "Base speed : " << speed << endl;
		cout << "Dangerosity indice : " << dangerosity << endl;
	}
	if (parameter == "characteristics")
	{
		for (int i = 0; i < 6; i++)
		{
			cout << characteristics[i] << endl;
		}
	}
	if (parameter == "alignement")
	{
		cout << "Alignement : " << alignement_array[alignement[0]][alignement[1]] << endl;
	}
	if (parameter == "health points")
	{
		cout << "Health Points : " << health_points << endl;
	}
	if (parameter == "attack damages")
	{
		cout << "Attack Damages : " << attack_damages << endl;
	}
	if (parameter == "name")
	{
		cout << "Name : " << name << endl;
	}
}
void Monster::setattack_damages(int damages0)
{
	attack_damages = damages0;
}