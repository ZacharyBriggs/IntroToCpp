#pragma once
class Zombie
{
private:
	int mHP;
	int mAtk;
	char mName[255];
public:
	Zombie();
	Zombie(int hp, int atk, char name[255]);
	void ZomFight(Zombie zom);
	void ZomFightTwo(Zombie zom);
};
