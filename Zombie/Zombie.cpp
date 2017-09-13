#include <iostream>
#include "Zombie.h"

Zombie::Zombie()
{
	mHP = 100;
	mAtk = 50;
	strcpy_s(mName, "Default");
}

Zombie::Zombie(int hp, int atk, char name[255])
{
	mHP = hp;
	mAtk = atk;
	strcpy_s(mName, name);
}

void Zombie::ZomFight(Zombie zom)
{
	mHP -= zom.mAtk;	
	return;
}

void Zombie::ZomFightTwo(Zombie zom)
{
	mHP -= zom.mAtk;
}
