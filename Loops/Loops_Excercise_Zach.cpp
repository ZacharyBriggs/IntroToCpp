#include <iostream>

int main()
{
	//1. What is the out put of the following code samples?
	//a. 
	for (int i = 0; i < 100; i++)
	{
		std::cout << i << std::endl;
	}
		//0-99
	//b. 
	for (int i = 100; i >= 0; i -= 2)
	{
		std::cout << i << std::endl;
	}
		//100, 98, 96, 94, etc until it prints 0.
	//c. 
	int iter = 0;
	while (iter != 25)
	{
		std::cout << iter << std::endl;
		iter += 5;
	}
		//0, 5, 10, 15, 20.
	//d. 
	int counter = 0;
	do
	{
		counter++;
		if (counter == 1)
			break;
		else
			std::cout << counter << std::endl;
	} while (counter < 10);
		//Nothing

	//2. Using a for loop, iterate through numbers 0 to 100.
	//-For multiples of 3 print “Fizz”
	//- For multiples of 5 print “Buzz”
	//- For multiples of 3 and 5 print “FizzBuzz”
	//- Otherwise print the number.
	//Note, you will need to use the modulus operator (%)
		int numA;
		for (numA = 0; numA <= 100; numA++)
		{
			if (numA == 0)
				std::cout << numA << std::endl;
			else if (!(numA % 5 || numA % 3))
				std::cout << "fizzbuzz\n";
			else if (!(numA % 5))
				std::cout << "buzz\n";
			else if (!(numA % 3))
				std::cout << "fizz\n";
			else
				std::cout << numA << std::endl;
		}

	//3. Repeat problem 2 using a while loop and a do while loop.
	//while loop
		int numB = -1;
		while (numB != 100)
		{
			numB++;
			if (numB == 0)
				std::cout << numB << std::endl;
			else if (numB % 3 && numB % 5)
				std::cout << numB << std::endl;
			else if (!(numB % 3 || numB % 5))
			{
				std::cout << "fizzbuzz\n";
				continue;
			}
			else if (!(numB % 3))
			{
				std::cout << "fizz\n";
				continue;
			}
			else if (!(numB % 5))
			{
				std::cout << "buzz\n";
				continue;
			}
		}


	//4. Create a loop that prints all even numbers between 0 and 100, without printing 0 or 100
		for (int evenNum = 98; evenNum > 0; evenNum -= 2)
			std::cout << evenNum << std::endl;
	system("pause");
}