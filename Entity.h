#ifndef ENTITY_H
#define ENTITY_H
#include <iostream>
#include <string>
using namespace std;

class Entity
{
protected:
	static string alignement_array[3][3];
	
	string name;
	string type;
	string size;
	int alignement[2];
	int armor_class;
	int speed;
	int health_points;
	int characteristics[6];

public:
	Entity(string name0,string type0,string size0,int armor_class0,int speed0,int health_points0,int characteristics0[6]);
	virtual ~Entity();
	void test_alignement_array();
	void setAlignement(int alignement0_0, int alignement0_1);
	virtual void Afficher(string parameter = "NULL");
};

class Monster : public Entity
{
private:
	int dangerosity;
	int XP;
	int attack_damages;
public:
	Monster(string name0, string type0, string size0, int armor_class0, int speed0, int health_points0, int characteristics0[6], int alignement0[2], int dangerosity0, int XP0);
	~Monster();
	void Afficher(string parameter = "NULL");
	void setattack_damages(int damages0);
};

/*
prochaine classe dérivée à ajouter (Non Player Character)
class NPC : public Entity
{
public:
	NPC();
	~NPC();
};
*/
#endif // ENTITY_H
