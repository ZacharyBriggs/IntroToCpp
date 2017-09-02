#include <iostream>
void QuestionOne()
{
	int height;
	float taxOver65K;
	float taxUnder5K;
	float steamLibTotal;
}
void QuestionTwo()
{
	//int
	//float
	//char
	//int
	//bool
}
void QuestionThree()
{
	int a = 1;
	int b = 2;
	int c = a;
	std::cout << a << std::endl << b << std::endl;
	a = b;
	b = c;
	std::cout << a << std::endl << b << std::endl;
}
void QuestionFour()
{
	int numA, numB, numC, numD, numE, avrgAll;
	std::cout << "Input 5 numbers\n";
	std::cin >> numA >> numB >> numC >> numD >> numE;
	avrgAll = ((numA + numB + numC + numD + numE) / 5);
	std::cout << avrgAll << std::endl;

}
void QuestionFive()
{
	int a;
	int b;
	int c;
	std::cin >> a >> b;
	std::cout << "Your numbers are...\n";
	std::cout << a << std::endl << b << std::endl;
	c = a;
	a = b;
	b = c;
	std::cout << "Numbers swapped...\n";
	std::cout << a << std::endl << b << std::endl;
}

void main()
{
	std::cout << "Select suitable variable type + name\n";
	QuestionOne();
	std::cout << "Select suitable data type for these values\n";
	QuestionTwo();
	std::cout << "Create program that swaps two numbers and print variables before and after swap\n";
	QuestionThree();
	std::cout << "Ask user for 5 numbers and output average\n";
	QuestionFour();
	std::cout << "Redo 3 but allow user to input values and provide context\n";
	QuestionFive();
	system("pause");
}
