#include <iostream>
int main()
{
	int fiveGuys[5];
	std::cout << "Put in 5 numbers.\n";
	int input = 0;
	int bigNumber = 0;
	int smallNumber = 0;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> fiveGuys[input];
		input++;
	}
	for (int valueOne = 0; valueOne <= 4; valueOne++)
		if (fiveGuys[valueOne] >= bigNumber)
			bigNumber = fiveGuys[valueOne];
		else if (fiveGuys[valueOne] <= smallNumber)
			smallNumber = fiveGuys[valueOne];
		std::cout << bigNumber << std::endl;
		std::cout << smallNumber << std::endl;
	system("pause");
}


