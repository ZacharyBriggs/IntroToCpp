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
	int loopArray[10];
	int iter = 0;
	for (int a = 10; a >= 1; a--)
	{
		iter++;
		loopArray[iter];
	}
	//6. Create a an array of size five then ask the user to input five 
	//number into the array. Display the largest and smallest numbers 
	//to the console.
		int fiveGuys[5];
		std::cout << "Put in 5 numbers.\n";
		std::cin >> fiveGuys[5];
		std::cout << fiveGuys[5] << std::endl;
		system("pause");
	//7. Create a program that creates a small 3x3 array of integers.Use a nested for 
	//loop to initialise the numbers 1 - 9. Output the numbers in a grid format.
	system("pause");
}