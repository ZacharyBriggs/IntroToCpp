#include <iostream>
void QuestionOne()
{
	//True
	//True
	//False
	//False
	//False
	//True
}
void QuestionTwo()
{
	int y = 0;
	if (y == 0)
		int x = 100;
}
void QuestionThree()
{
	int month;
	int numDayOne = 31;
	int numDayTwo = 30;
	int numDayThree = 28;
	std::cout << "Put in a number that represents a month\n";
	std::cin >> month;
	switch (month)
	{
	case 1:
		std::cout << numDayOne << std::endl;
		break;
	case 2:
		std::cout << numDayThree << std::endl;
		break;
	case 3:
		std::cout << numDayOne << std::endl;
		break;
	case 4:
		std::cout << numDayTwo << std::endl;
		break;
	case 5:
		std::cout << numDayOne << std::endl;
		break;
	case 6:
		std::cout << numDayTwo << std::endl;
		break;
	case 7:
		std::cout << numDayOne << std::endl;
		break;
	case 8:
		std::cout << numDayOne << std::endl;
		break;
	case 9:
		std::cout << numDayTwo << std::endl;
		break;
	case 10:
		std::cout << numDayOne << std::endl;
		break;
	case 11:
		std::cout << numDayTwo << std::endl;
		break;
	case 12:
		std::cout << numDayOne << std::endl;
		break;
	default:
		std::cout << "Not a month\n";
	}
}
void QuestionFour()
{
	int month;
	int daysA = 31;
	int daysB = 30;
	int daysC = 28;
	std::cout << "Put in a number representing a month.\n";
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
}
void QuestionFive()
{
	int y2 = 0;
	int x2;
	x2 = (y2 == 0) ? 100 : 0;
}
void main()
{
	std::cout << "What do these conditionals evaluate to\n";
	QuestionOne();
	std::cout << "Write an if statement that assings 100 to x when y is equal to 0\n";
	QuestionTwo();
	std::cout << "Write a switch statement that accepts a number that represents a month and display the number of days in month\n";
	QuestionThree();
	std::cout << "Redo 3 using if statements\n";
	QuestionFour();
	std::cout << "Convert 2 into a ternary operator\n";
	QuestionFive();
	system("pause");
}