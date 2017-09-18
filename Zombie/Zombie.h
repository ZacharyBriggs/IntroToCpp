#pragma once
class Zombie
{
private:
	int mHP;
	int mAtk;
	char mName[255];
public:
	/*bool mZomAlive;*/
	Zombie();
	Zombie(int hp, int atk, char name[255]);
	void Zombie::ZomFight(Zombie zom);
	/*void winCheck(Zombie array[]);*/
};
