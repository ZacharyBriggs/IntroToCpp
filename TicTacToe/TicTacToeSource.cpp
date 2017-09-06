#include <iostream>

void main()
{
	char gameGrid[3][3];
	char player1 = 'X';
	char player2 = 'O';
	int gridSpace;
	std::cout << " 1| 2|3\n";
	std::cout << "========\n";
	std::cout << " 4| 5|6\n";
	std::cout << "========\n";
	std::cout << " 7| 8|9\n";
	std::cout << "P1 choose a space.\n";
	std::cin >> gridSpace;
	switch (gridSpace)
	{
	case 1:
		std::cout << " X| 2|3\n";
		std::cout << "========\n";
		std::cout << " 4| 5|6\n";
		std::cout << "========\n";
		std::cout << " 7| 8|9\n";
	case 2:
		std::cout << " 1| X|3\n";
		std::cout << "========\n";
		std::cout << " 4| 5|6\n";
		std::cout << "========\n";
		std::cout << " 7| 8|9\n";
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	default:
		std::cout << "Not a valid space.\n";
	}
	
	system("pause");
}