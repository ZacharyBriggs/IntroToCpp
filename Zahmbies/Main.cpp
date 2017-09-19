#include <iostream>
#include <time.h>
#include "Zombie.h"
int main()
{
	srand(time(NULL));
	Zombie zomArray[5];
	int zomDead = 0;
	while (int zomDead < 5)
	{
		zomDead = 0;
		Zombie defendZom = zomArray[rand() % 5];
		Zombie attackZom = zomArray[rand() % 5];
		defendZom.TakeDamage(defendZom.GetHealth() - attackZom.GetAttack());
	}
	system("pause");
}