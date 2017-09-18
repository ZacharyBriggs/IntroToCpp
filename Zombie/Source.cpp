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
	bool zombie = true;
	Zombie zomArray[5];
	while (zombie == true)
	{
		zomArray[rand() % 5].ZomFight(zomArray[rand() % 5]);
	}
	//int num = rand()%100;
	//std::cout << num << std::endl;
	//ZombOne.ZomFight(ZombTwo);
	
	system("pause");
}
//void winCheck(Zombie array[])
//{
//	if (array[0].mZomAlive == false && array[1].mZomAlive == false && array[2].mZomAlive == false && array[3].mZomAlive == false)
//		std::cout << "Zombie 5 wins";
//	if (array[1].mZomAlive == false && array[2].mZomAlive == false && array[3].mZomAlive == false && array[4].mZomAlive == false)
//		std::cout << "Zombie 4 wins";
//	if (array[2].mZomAlive == false && array[3].mZomAlive == false && array[4].mZomAlive == false && array[0].mZomAlive == false)
//		std::cout << "Zombie 3 wins";
//	if (array[3].mZomAlive == false && array[4].mZomAlive == false && array[0].mZomAlive == false && array[1].mZomAlive == false)
//		std::cout << "Zombie 2 wins";
//	if (array[4].mZomAlive == false && array[0].mZomAlive == false && array[1].mZomAlive == false && array[2].mZomAlive == false)
//		std::cout << "Zombie 1 wins";
//}


