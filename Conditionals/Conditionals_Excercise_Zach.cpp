#include <iostream>

int main()
{
	//1. What do the following conditionals evaluate to if "A = true and B = false"
	// A || B
		//True
	// A || B
		//True
	// !A
		//False
	// !(A && A)
		//False
	// B && A
		//False
	//(!B || A)
		//True

	//2. Write an if statement that assigns 100 to the value of x when y is equal to zero
	{
		if (int y = 0)
		{
			int	x = 100;
		}
	}
	//3. Write a program that accepts an integer that represents the month of the year. 
	//It should then display the number of days in that month. If a number that doesn’t correspond 
	//to a month is entered then the program should display an error message. You must use a switch statement
	int month = 12;
	std::cout << "Put in a number representing a month.\n";
	std::cin >> month;

	switch (month)
	{
	case 12:
		std::cout << "December.\n";
		std::cout << "31 days.\n";
		break;
	case 11:
		std::cout << "November.\n";
		std::cout << "30 days.\n";
		break;
	case 10:
		std::cout << "October.\n";
		std::cout << "31 days.\n";
		break;
	case 9:
		std::cout << "September.\n";
		std::cout << "30 days.\n";
		break;
	case 8:
		std::cout << "August.\n";
		std::cout << "31 days.\n";
		break;
	case 7:
		std::cout << "July.\n";
		std::cout << "31 days.\n";
		break;
	case 6:
		std::cout << "June.\n";
		std::cout << "30 days.\n";
		break;
	case 5:
		std::cout << "May.\n";
		std::cout << "31 days.\n";
		break;
	case 4:
		std::cout << "April.\n";
		std::cout << "30 days.\n";
		break;
	case 3:
		std::cout << "March.\n";
		std::cout << "31 days.\n";
		break;
	case 2:
		std::cout << "February.\n";
		std::cout << "28 days.\n";
		break;
	case 1:
		std::cout << "January.\n";
		std::cout << "31 days.\n";
		break;
	default:
		if (month > 12)
			std::cout << "There are no months after December.\n";
		if (month < 1)
			std::cout << "There are no months before January.\n";


	}
	system("pause");




	//4. Redo problem 3 using if statements
	{
		int month;
		int daysA = 31;
		int daysB = 30;
		int daysC = 28;
		std::cout << "Put in a number representing a monthn\n";
		std::cin >> month;
		if (month == 1)
			std::cout << daysA << std::endl;
		else if (month == 3)
			std::cout << daysA << std::endl;
		else if (month == 5)
			std::cout << daysA << std::endl;
		else if (month == 7)
			std::cout << daysA << std::endl;
		else if (month == 8)
			std::cout << daysA << std::endl;
		else if (month == 10)
			std::cout << daysA << std::endl;
		else if (month == 12)
			std::cout << daysA << std::endl;
		else if (month == 4)
			std::cout << daysB << std::endl;
		else if (month == 6)
			std::cout << daysB << std::endl;
		else if (month == 9)
			std::cout << daysB << std::endl;
		else if (month == 11)
			std::cout << daysB << std::endl;
		else if (month == 2)
			std::cout << daysC << std::endl;
		else
			std::cout << "Not a Month.\n";
		system("pause");
	}
			


	//5. Convert problem 2 into a ternary operator
	{
		if (int y = 0)
		{
			int	x = 100;
		}
	}
}