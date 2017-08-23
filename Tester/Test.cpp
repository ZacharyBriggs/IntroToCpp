#include <iostream>
int main()
{
	int tenThruOne[10];
	int iter = 9;
	for (int a = 10; a >= 1; a--)
	{
		tenThruOne[iter] = a;
		std::cout << tenThruOne[iter] << std::endl;
		iter--;
	}
	system("pause");
}


