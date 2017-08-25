#include <iostream>
int main()
{
	int grid[3][3];
	int row = 0;
	int column = 0;
	for (int iter = 1; iter <= 9; iter++)
	{
		grid[row][column] = iter;
		column++;
		if (iter == 3)
		{
			row++;
			column = 0;
		}
		else if (iter == 6)
		{
			row++;
			column = 0;
		}
	}
	
	system("pause");
}


