#include <iostream>
void questionOne();
int QuestionTwoAdd(int a, int b);
int QuestionTwoSubtract(int a, int b);
int QuestionTwoMult(int a, int b);
int QuestionTwoDivide(int a, int b);
void QuestionThree(float someArray[], int length);
void QuestionFour();
float QuestionFiveHalf(float a);
void QuestionSix(int someArray[], int length);
void main()
{
	std::cout << "Question 2\n";
	std::cout << QuestionTwoAdd(1, 2) << std::endl;
	std::cout << QuestionTwoSubtract(1, 1) << std::endl;
	std::cout << QuestionTwoMult(2, 2) << std::endl;
	std::cout << QuestionTwoDivide(6, 2) << std::endl;
	std::cout << "Question 3\n";
	float myArray[5] = { 1,2,3,4,5 };
	QuestionThree(myArray, 5);
	std::cout << "Question 4\n";
	std::cout << "Question 5\n";
	std::cout << QuestionFiveHalf(5) << std::endl;
	std::cout << "Question 6\n";
	int theArray[5] = { 1, 2, 3, 4, 5 };
	QuestionSix(theArray, 5);
	system("pause");
}
void questionOne()
{
//a.
/*
int sum(int x, int y)
{
int result;
result = x + y;
return result;
}
*/
//b. 
/*
int sum(int n)
{
if (0 == n)
return 0;
else
{
n = n + n;
return n;
}
}
*/
//c.
/*
#include <iostream>
int square(int x);
int main()
{
double x = 13.6;
std::cout << "square of 13.6 = " << square(x) << std::endl;
}
int square(int x)
{
return x * x;
}
*/
}
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
void QuestionThree(float someArray[], int length)
{
	float bigNumber = someArray[0];
	for (int iter = 0; iter <= length; iter++)
	{
		if (someArray[iter] > bigNumber)
			bigNumber = someArray[iter];
	}
	std::cout << bigNumber << std::endl;
}
void QuestionFour();
{

}
//4

//1, 1, 2, 3, 5, 8, etc.
float QuestionFiveHalf(float a)
{
	return a / 2;
}
void QuestionSix(int someArray[], int length)
{
	int total = 0;
	for (int i = 0; i < length; i++)
	{
		total = someArray[i] + total;
	}
	std::cout << total << std::endl;
}
//1. Find the error in each of the following functions and explain how to fix them.
//2. Create a function for each of the following math operators. They must return a value.
//and take in at least two argument. Once all the functions have been created you will need to 
//invoke them and print out the return.
//3. Create a function that takes in two arguments, one beign an array of float and the other
//being the size of the array. It must return the largest value in the array.
//4. Using recursion write a function that prints out the Fibonacci sequence.
//5. The following statement calls a function named Half. The Half function returns a value that 
//is half that of the argument. Write the function.
//6. Write a function that takes as its parameters an array of integers and the size of the array 
// and returns the sum of the values in the array.
