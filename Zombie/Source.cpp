//Create a class representing a zombie.
//- Each zombie should have health and an attack value.
//- Ensure that the zombie's variables are private and you have functions that allow us to modify the zombie data.
//- Using the zombie class, create a game where a number of zombies attack each other until only one remains.
//- You must have a written UML of the zombie class.This can be done either on paper, google draw, gliffy.
#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include "Zombie.h"

int main()
{
	srand(time(NULL));
	int numOfZoms;
	std::cin >> numOfZoms;
	Zombie zomArray[numOfZoms];
	while(zomArray[].mHP < 0)
	{
		zomArray[rand() % 5].ZomFight(zomArray[rand() % 5]);
	}
	//int num = rand()%100;
	//std::cout << num << std::endl;
	//ZombOne.ZomFight(ZombTwo);
	
	system("pause");
}