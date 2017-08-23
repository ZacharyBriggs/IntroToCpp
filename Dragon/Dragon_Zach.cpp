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
	std::cout << "How much did Bob eat on each day of the week?\n";
	for (int days = 0; days <= 6; days++)
		std::cin >> dragonFood[0][days];
	std::cout << "How much did Cat eat on each day of the week?\n";
	for (int days2 = 0; days2 <= 6; days2++)
		std::cin >> dragonFood[1][days2];
	std::cout << "How much did Scott eat on each day of the week?\n";
	for (int days3 = 0; days3 <= 6; days3++)
		std::cin >> dragonFood[2][days3];

	system("pause");
}