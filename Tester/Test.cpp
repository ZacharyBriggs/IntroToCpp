#include <iostream>
int main()
{
	int grid[3][3];
	int row = 0;
	int column = 0;
	for (int iter = 1; iter <= 9; iter++)
	{
		grid[row][column] = iter;
		std::cout << grid[row][column];
		column++;
		if (iter == 3)
		{
			row++;
			column = 0;
			std::cout << std::endl;
		}
		else if (iter == 6)
		{
			row++;
			column = 0;
			std::cout << std::endl;
		}
		else if (iter == 9)
			std::cout << std::endl;
	}
	system("pause");
}


