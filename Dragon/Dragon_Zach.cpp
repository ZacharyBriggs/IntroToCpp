//Daenerys Targaryen wants to keep track of how many kilos of food her three dragons eat
//each day during a typical week.Write a program that stores this information in a
//2 dimensional 3 x 7 array, where each row represents a different dragon and each column
//represents a different day of the week.Then it should create a report that includes the
//following information :
//-Average amount of food eaten per day by all the dragons together
//- Average amount of food eaten per day by any one dragon
//- The greatest amount of food eaten during one day and which dragon that was
//- The least amount of food eaten during one day and which dragon that was
#include <iostream>
int main()
{
	float dragonFood[3][7];
	float greatestFoodEaten = dragonFood[0][0];
	float leastFoodEaten = dragonFood[0][0];
	char fatDragon[7];
	char slimDragon[7];
	char dragonOne[7] = "Bob\0";
	char dragonTwo[7] = "Cat\0";
	char dragonThree[7] = "Scott\0";
	std::cout << "How much did Bob eat on each day of the week?\n";
	for (int days = 0; days <= 6; days++)
	{
		std::cin >> dragonFood[0][days];
		if (dragonFood[0][days] > greatestFoodEaten)
		{
			greatestFoodEaten = dragonFood[0][days];
			strcpy_s(fatDragon, dragonOne);
		}
		if (dragonFood[0][days] < leastFoodEaten)
			leastFoodEaten = dragonFood[0][days];
	}
	std::cout << "How much did Cat eat on each day of the week?\n";
	for (int days2 = 0; days2 <= 6; days2++)
	{
		std::cin >> dragonFood[1][days2];
		if (dragonFood[1][days2] > greatestFoodEaten)
		{
			greatestFoodEaten = dragonFood[1][days2];
			strcpy_s(fatDragon, dragonTwo);
		}
		if (dragonFood[1][days2] < leastFoodEaten)
			leastFoodEaten = dragonFood[1][days2];
	}
	std::cout << "How much did Scott eat on each day of the week?\n";
	for (int days3 = 0; days3 <= 6; days3++)
	{
		std::cin >> dragonFood[2][days3];
		if (dragonFood[2][days3] > greatestFoodEaten)
		{
			greatestFoodEaten = dragonFood[2][days3];
			strcpy_s(fatDragon, dragonThree);
		}
		if (dragonFood[2][days3] < leastFoodEaten)
			leastFoodEaten = dragonFood[2][days3];
	}
	std::cout << greatestFoodEaten;
	std::cout << fatDragon << std::endl;
	std::cout << leastFoodEaten << std::endl;
	system("pause");
}