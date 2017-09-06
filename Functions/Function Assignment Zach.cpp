#include <iostream>
void questionOne()
{

}
void questionTwo()
{

}
void questionThree()
{

}
void questionFour()
{

}
void questionFive()
{

}
void questionSix()
{

}
//2.
int Add(int a, int b)
{
	return a + b;
}
int Subtract(int a, int b)
{
	return a - b;
}
int Mult(int a, int b)
{
	return a * b;
}
int Divide(int a, int b)
{
	return a / b;
}
//3.
void largeArray(float someArray[], int length)
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

//3. Create a function that takes in two arguments, one beign an array of float and the other
//being the size of the array. It must return the largest value in the array.
//4. Using recursion write a function that prints out the Fibonacci sequence.
//5. The following statement calls a function named Half. The Half function returns a value that 
//is half that of the argument. Write the function.
//6. Write a function that takes as its parameters an array of integers and the size of the array 
// and returns the sum of the values in the array.
void main()
{
	std::cout << Add(1, 2) << std::endl;
	std::cout << Subtract(1, 1) << std::endl;
	std::cout << Mult(2, 2) << std::endl;
	std::cout << Divide(6, 2) << std::endl;
}