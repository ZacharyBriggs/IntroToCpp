#include <iostream>
#include "Player.h"

int main()
{
	Player zach;
	zach.mHealth = 100;
	zach.mLevel = 18;
	zach.mGender = true;
	zach.mResource = 50;

	zach.TakeDamage(10);
	zach.ModifyLevel(1);
	system("pause");
}