#include "Zombie.h"
#include <iostream>
#include <time.h>
int main()
{
	srand(time(NULL));
	Zombie zomArray[5];
	for (int i = 0; i < 5; i++)
	{
		zomArray[i].SetHealth(rand() % 1000);
		zomArray[i].SetAttack(rand() % 1000);
	}
	Zombie zomOne;
	Zombie zomTwo(200, 75);
	while (zomArray[0].GetHealth() > 0 || zomArray[1].GetHealth() > 0 || zomArray[2].GetHealth() > 0 || zomArray[3].GetHealth() > 0 || zomArray[4].GetHealth() > 0)
	{
		zomArray[rand()%5].SetHealth(zomArray[rand()%5].GetHealth() - 
			zomArray[rand()%5].GetAttack());
	}
	system("pause");
}