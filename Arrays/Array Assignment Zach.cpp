#include <iostream>
int main()
{
	//1. Declare an array for each of the following(size of array does not matter unless
	//sepcified).
	//a. heights of students
	int heightsStudents[10];
	//b. age of parents
	int ageParents[25];
	//c. true of false questions
	bool trueFalseQuestions[10];
	//d. letters of the alphabet
	char alphabet[26];
	//2. What is the size in memory of the following arrays
	//a. 
	float heights[5];
		//20
	//b. 
	int ages[10];
		//	40
	//c. 
	char letters[26];
		//26
	//3. Declare an array with the values 1 - 10;
	int values[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//4. Using the array created in problem 3 print the 5th index.
	std::cout << values[4] << std::endl;
	//5. Using a loop, populate an array of size 10 with the values 10 - 1.
	int tenThruOne[10];
	int iter = 9;
	for (int a = 10; a >= 1; a--)
	{
		tenThruOne[iter] = a;
		std::cout << tenThruOne[iter] << std::endl;
		iter--;
	}
	//6. Create a an array of size five then ask the user to input five 
	//number into the array. Display the largest and smallest numbers 
	//to the console.
	int fiveGuys[5];
	std::cout << "Put in 5 numbers.\n";
	int input = 0;
		for (int i = 0; i < 5; i++)
		{
			std::cin >> fiveGuys[input];
			input++;
		}
		int bigNumber = fiveGuys[0];
		int smallNumber = fiveGuys[0];
		for (int valueOne = 0; valueOne <= 4; valueOne++)
		{
			if (fiveGuys[valueOne] < smallNumber)
					smallNumber = fiveGuys[valueOne];
			if (fiveGuys[valueOne] >= bigNumber)
					bigNumber = fiveGuys[valueOne];
		}
	std::cout << "Biggest number is...\n";
	std::cout << bigNumber << std::endl;
	std::cout << "Smallest number is...\n";
	std::cout << smallNumber << std::endl;
	//7. Create a program that creates a small 3x3 array of integers.Use a nested for 
	//loop to initialise the numbers 1 - 9. Output the numbers in a grid format.
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
	system("pause");
}