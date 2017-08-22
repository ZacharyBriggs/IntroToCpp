#include <iostream>
int main()
{
	int fiveGuys[5];
	std::cout << "Put in 5 numbers.\n";
	
	for (int i = 0; i < 5; i++)
	{
		int input= 0;
		std::cin >> fiveGuys[input];
		input++;
	}
	std::cout << fiveGuys[5] << std::endl;
	system("pause");
}


