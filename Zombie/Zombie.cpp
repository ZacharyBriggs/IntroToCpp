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

//void Zombie::ZomFight()
//{
//	zom2.mHP -= zom1.mAtk;
//	zom1.mHP -= zom2.mAtk;
//}
