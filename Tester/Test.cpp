#include <iostream>
int main()
{
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
	}

	while (numB != 100);
	
	system("pause");
}


