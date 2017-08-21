#include <iostream>
int main()
{
	int numA = 0;
	for (numA = 0; numA <= 100; numA++)
	{
		int multThree = numA % 3;
		int multFive = numA % 5;
		if (numA == multFive || multThree)
			std::cout << "fizzbuzz\n";
		else if (numA == multFive)
			std::cout << "buzz\n";
		else if (numA == multThree)
			std::cout << "fizz\n";
		else
			std::cout << numA << std::endl;
	}
	system("pause");
}


