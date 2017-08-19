#include <iostream>

void main()
{
	//You can not print to the console unless the problem specifies.

	//1. Select suitable variable types and names for the following examples
	//a) The average height of students in your class
	int avgHeightClass = 5'5;
	//b) The tax rate for incomes over $65000
	int taxRateOver65K = 18;
	//c) The tax rate for incomes below $5000
	int taxRateBelow5K = 8;
	//d) The total cost of all the games on your Steam library
	float totalSteamLibCost = 2065.99f;

	//2. Select suitable data types to hold the following values :
	//a) 121
		//int
	//b) 9.4
		//float
	//c) r
		//char
	//d) 100000
		//int
	//e) False
		//bool

	//3. Create a program that swaps two numbers. Ask the user for 2 numbers in the console window
	//and store the result in variables called “a” and “b” print the result to screen.Write code 
	//that swaps the values for these variables, then print the variables “a” and “b” again.
	//You should comment your code.
			std::cout << "Enter two numbers.\n";
			int inputA, inputB;
			int inputC = 0;
			std::cin >> inputA >> inputB;
			inputC = inputB;
			std::cout << inputA << " " << inputB << std::endl;
			inputB = inputA;
			inputA = inputC;
			std::cout << inputA << " " << inputB << std::endl;

	//4. Ask the user for 5 numbers and output the average of these numbers.
			int numA, numB, numC, numD, numE;
			std::cout << "Enter five numbers.\n";
			std::cin >> numA >> numB >> numC >> numD >> numE;
			numA, numB, numC, numD, numE;
			int numF = (numA + numB + numC + numD + numE) / 5;
			std::cout << numF << std::endl;
			system("pause");



	//5. Redo question 3 but allows the user to input the values to be swapped and provide information
	//in the console proving the data was swapped.
			std::cout << "Enter two numbers.\n";
			int input1, input2, input3;
			std::cin >> input1 >> input2;
			input3 = input2;
			std::cout << "Your numbers are...\n";
			std::cout << input1 << " " << input2 << std::endl;
			std::cout << "Swapping numbers...\n";
			input2 = input1;
			input1 = input3;
			std::cout << input1 << " " << input2 << std::endl;

			system("pause");
}