#include <iostream>
void questionOne();
int QuestionTwoAdd();
int QuestionTwoSubtract();
int QuestionTwoMult();
int QuestionTwoDivide();
void QuestionThree();
void QuestionFour();
void QuestionFive();
void QuestionSix();
void main()
{
	std::cout << "Question 2\n";
	std::cout << QuestionTwoAdd(1, 2) << std::endl;
	std::cout << QuestionTwoSubtract(1, 1) << std::endl;
	std::cout << QuestionTwoMult(2, 2) << std::endl;
	std::cout << QuestionTwoDivide(6, 2) << std::endl;
	std::cout << "Question 3\n";
	float myArray[5];
	std::cout << QuestionThree(myArray[], 5)
	std::cout << "Question 5\n";
	std::cout << Half(5) << std::endl;
}
//2.
int QuestionTwoAdd(int a, int b)
{
	return a + b;
}
int QuestionTwoSubtract(int a, int b)
{
	return a - b;
}
int QuestionTwoMult(int a, int b)
{
	return a * b;
}
int QuestionTwoDivide(int a, int b)
{
	return a / b;
}
//3.
void QuestionThree(float someArray[], int length)
{
	int bigNumber = someArray[0];
	for (int iter = 0; iter < length; iter++)
	{
		if (someArray[iter] > bigNumber)
			bigNumber = someArray[iter];
	}
}
//4

//1, 1, 2, 3, 5, 8, etc.

//5
float Half(int a)
{
	return a / 2;
}
//3. Create a function that takes in two arguments, one beign an array of float and the other
//being the size of the array. It must return the largest value in the array.
//4. Using recursion write a function that prints out the Fibonacci sequence.
//5. The following statement calls a function named Half. The Half function returns a value that 
//is half that of the argument. Write the function.
//6. Write a function that takes as its parameters an array of integers and the size of the array 
// and returns the sum of the values in the array.
