#include <iostream>
#include "Zombie1.h"

Zombie::Zombie()
{
	mHP = rand()%1000;
	mAtk = rand()%1000;
	strcpy_s(mName, "Default");
	/*mZomAlive = true;*/
}
Zombie::Zombie(int hp, int atk, char name[255])
{
	mHP = hp;
	mAtk = atk;
	strcpy_s(mName, name);
	/*mZomAlive = true;*/
}
void Zombie::ZomFight(Zombie zom)
{
	mHP -= zom.mHP;
	if (mHP < 0)
	{
		mHP = 0;
	}
}

