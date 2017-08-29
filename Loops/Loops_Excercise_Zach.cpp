#include <iostream>
void QuestionOne()
{
	//0-99
	//100, 98, 96, etc until 0 is printed
	//0, 5, 10, 15, 20
	//Nothing
}
void QuestionTwo()
{
	int numA;
	for (numA = 0; numA <= 100; numA++)
	{
		int multThree = numA % 3;
		int multFive = numA % 5;
		if (multFive == 0 && multThree == 0)
			std::cout << "fizzbuzz\n";
		else if (multThree == 0)
			std::cout << "fizz\n";
		else if (multFive == 0)
			std::cout << "buzz\n";
		else
			std::cout << numA << std::endl;
	}
}
void QuestionThree()
{

}
void QuestionFour()
{
	for (int evenNum = 98; evenNum > 0; evenNum -= 2)
		std::cout << evenNum << std::endl;
}
void main()
{
	std::cout << "What is the output of these code samples?\n";
	QuestionOne();
	std::cout << "Using a for loop iterate from 0 to 100, for multiples of 3 print fizz, for 5 print buzz, for 3 and 5 print fizzbuzz, otherwise print\n";
	QuestionTwo();
	std::cout << "Repeat 2 using a while and do while loop\n";
	QuestionThree();
	//3. Repeat problem 2 using a while loop and a do while loop.
	//while loop
		int numB = -1;
		do
		{
			numB++;
			int multThree = numB % 3;
			int multFive = numB % 5;
			if (multThree == 0 && multFive == 0)
				std::cout << "fizzbuzz\n";
			else if (multThree == 0)
			{
				std::cout << "fizz\n";
				continue;
			}
			else if (multFive == 0)
			{
				std::cout << "buzz\n";
				continue;
			}
			else
				std::cout << numB << std::endl;
		} while (numB != 100);
	std::cout << "Create a loop that prints all even numbers between 0 and 100 but not 0 and 100\n";
	QuestionFour();
	system("pause");
}