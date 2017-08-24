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
		{
			leastFoodEaten = dragonFood[0][days];
			strcpy_s(slimDragon, dragonOne);
		}
	}
	float bobAvrg = (dragonFood[0][0] + dragonFood[0][1] + dragonFood[0][2] + dragonFood[0][3] + dragonFood[0][4] + dragonFood[0][5] + dragonFood[0][6]) / 7;
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
		{
			leastFoodEaten = dragonFood[1][days2];
			strcpy_s(slimDragon, dragonTwo);
		}
	}
	float catAvrg = (dragonFood[1][0] + dragonFood[1][1] + dragonFood[1][2] + dragonFood[1][3] + dragonFood[1][4] + dragonFood[1][5] + dragonFood[1][6]) / 7;
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
		{
			leastFoodEaten = dragonFood[2][days3];
			strcpy_s(slimDragon, dragonThree);
		}
	}
	float scottAvrg = (dragonFood[2][0] + dragonFood[2][1] + dragonFood[2][2] + dragonFood[2][3] + dragonFood[2][4] + dragonFood[2][5] + dragonFood[2][6]) / 7;
	float daySun = (dragonFood[0][0] + dragonFood[1][0] + dragonFood[2][0]) / 3;
	float dayMon = (dragonFood[0][1] + dragonFood[1][1] + dragonFood[2][1]) / 3;
	float dayTues = (dragonFood[0][2] + dragonFood[1][2] + dragonFood[2][2]) / 3;
	float dayWed = (dragonFood[0][3] + dragonFood[1][3] + dragonFood[2][3]) / 3;
	float dayThur = (dragonFood[0][4] + dragonFood[1][4] + dragonFood[2][4]) / 3;
	float dayFri = (dragonFood[0][5] + dragonFood[1][5] + dragonFood[2][5]) / 3;
	float daySat = (dragonFood[0][6] + dragonFood[1][6] + dragonFood[2][6]) / 3;
	std::cout << "Average food eaten by Bob, Cat, and Scott.\n";
	std::cout << bobAvrg << std::endl;
	std::cout << catAvrg << std::endl;
	std::cout << scottAvrg << std::endl;
	std::cout << "Average food eaten by day from Sunday to Monday.\n";
	std::cout << daySun << std::endl;
	std::cout << dayMon << std::endl;
	std::cout << dayTues << std::endl;
	std::cout << dayWed<< std::endl;
	std::cout << dayThur << std::endl;
	std::cout << dayFri << std::endl;
	std::cout << daySat << std::endl;
	std::cout << "The most food eaten in one day and who ate it.\n";
	std::cout << greatestFoodEaten << std::endl;
	std::cout << fatDragon << std::endl;
	std::cout << "The least food eaten in one day and who ate it.\n";
	std::cout << leastFoodEaten << std::endl;
	std::cout << slimDragon << std::endl;
	system("pause");
}