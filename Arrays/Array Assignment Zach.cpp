#include <iostream>
void QuestionOne()
{
	int heightStudents[10];
	int ageParents[25];
	bool trueFalseQuestions[10];
	char alphabet[26];
}
void QuestionTwo()
{
	//20
	//40
	//26
}
void QuestionThree()
{
	int values[10] = { 1,2,3,4,5,6,7,8,9,10 };
}
void QuestionFour()
{
	int values[10] = { 1,2,3,4,5,6,7,8,9,10 };
	std::cout << values[4] << std::endl;
}
void QuestionFive()
{
	int countdown[10];
	int iter = 9;
	for (int a = 10; a >= 1; a--)
	{
		countdown[iter] = a;
		std::cout << countdown[iter] << std::endl;
		iter--;
	}
}
void QuestionSix()
{
	int fiveGuys[5];
	std::cout << "Put in 5 numbers.\n";
	int input = 0;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> fiveGuys[input];
		input++;
	}
	int bigNum = fiveGuys[0];
	int smallNum = fiveGuys[0];
	for (int valueOne = 0; valueOne <= 4; valueOne++)
	{
		if (fiveGuys[valueOne] < smallNum)
			smallNum = fiveGuys[valueOne];
		if (fiveGuys[valueOne] >= bigNum)
			bigNum = fiveGuys[valueOne];
	}
	std::cout << "Biggest number is...\n";
	std::cout << bigNum << std::endl;
	std::cout << "Smallest number is...\n";
	std::cout << smallNum << std::endl;
}
void QuestionSeven()
{
	int grid[3][3];
	int row = 0;
	int column = 0;
	for (int iter = 1; iter <= 9; iter++)
	{
		grid[row][column] = iter;
		std::cout << grid[row][column];
		column++;
		if (iter == 3)
		{
			row++;
			column = 0;
			std::cout << std::endl;
		}
		else if (iter == 6)
		{
			row++;
			column = 0;
			std::cout << std::endl;
		}
		else if (iter == 9)
			std::cout << std::endl;
	}
}
int Funk(int length,int arrayName[])
{
	for (int iter = 0; iter < length; iter++)
	{
		int arrayTotal = arrayName[iter] + arrayName[iter + 1];
		std::cout << arrayName << std::endl;
	}
}

void main()
{
	std::cout << "Decalre an array for each of the following\n";
	QuestionOne();
	std::cout << " What is the size in memory of the following arrays\n";
	QuestionTwo();
	std::cout << "Decalre an array with values 1-10\n";
	QuestionThree();
	std::cout << "Using the array from 3 print the 5th index\n";
	QuestionFour();
	std::cout << "Using a loop, populate an array of 10 with values 10-1\n";
	QuestionFive();
	std::cout << "Create an array of five, ask user to input five numbers, display the largest and smallest\n";
	QuestionSix();
	std::cout << " Create a 3x3 array and use a loop to populate it. Output numbers in a grid format\n";
	QuestionSeven();
	system("pause");
}