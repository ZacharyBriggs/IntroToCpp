#include <iostream>
int main()
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
	system("pause");
}


