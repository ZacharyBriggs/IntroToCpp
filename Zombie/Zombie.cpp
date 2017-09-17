#include <iostream>
#include "Zombie.h"

Zombie::Zombie()
{
	mHP = rand()%1000;
	mAtk = rand() %1000;
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
	zom.mHP -= mHP;
	if (zom.mHP <= 0)
	{
		zom.mHP = 0;
	}
}
