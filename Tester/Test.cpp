#include <iostream>
int main()
{
	int fiveGuys[5];
	std::cout << "Put in 5 numbers.\n";
	int input = 0;

	for (int i = 0; i < 5; i++)
	{
		std::cin >> fiveGuys[input];
		input++;
	}
	int bigNumber = fiveGuys[0];
	int smallNumber = fiveGuys[0];
	for (int valueOne = 0; valueOne <= 4; valueOne++)
	{
		if (fiveGuys[valueOne] < smallNumber)
			smallNumber = fiveGuys[valueOne];
		if (fiveGuys[valueOne] >= bigNumber)
			bigNumber = fiveGuys[valueOne];
	}
		std::cout << bigNumber << std::endl;
		std::cout << smallNumber << std::endl;
	system("pause");
}


