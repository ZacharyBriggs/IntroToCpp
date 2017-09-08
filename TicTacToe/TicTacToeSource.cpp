/*
Create an application that allows to users to play Tic - Tac - Toe.The game
should be able to played until the users decide to quit by either hitting the X button on
the window or they should have an on screen prompt in your application that pops up after
each game.If the user does not exit the game they must have an option to restart the game without
having to relaunch the application.You must provide a document breaking down the steps taken to
solve the problem.
*/
#include <iostream>
char space1;
char space2;
char space3;
char space4;
char space5;
char space6;
char space7;
char space8;
char space9;
void Board();
void main()
{
	char gameGrid[3][3];
	int gridSpace;
	bool gameOver = false;
	while (gameOver == false)
	{
		char gameGrid[3][3];
		int gridSpace;
		std::cout << "P1 choose a space.\n";
		std::cin >> gridSpace;
		if (gridSpace == 1)
			space1 = 'X';
		else if (gridSpace == 2)
			space2 = 'X';
		else if (gridSpace == 3)
			space3 = 'X';
		else if (gridSpace == 4)
			space4 = 'X';
		else if (gridSpace == 5)
			space5 = 'X';
		else if (gridSpace == 6)
			space6 = 'X';
		else if (gridSpace == 7)
			space7 = 'X';
		else if (gridSpace == 8)
			space8 = 'X';
		else if (gridSpace == 9)
			space9 = 'X';
		else
		{
			std::cout << "Not a valid space.\n";
		}
		Board();
		std::cout << "P2 choose a space.\n";
		std::cin >> gridSpace;
		if (gridSpace == 1)
			space1 = 'O';
		else if (gridSpace == 2)
			space2 = 'O';
		else if (gridSpace == 3)
			space3 = 'O';
		else if (gridSpace == 4)
			space4 = 'O';
		else if (gridSpace == 5)
			space5 = 'O';
		else if (gridSpace == 6)
			space6 = 'O';
		else if (gridSpace == 7)
			space7 = 'O';
		else if (gridSpace == 8)
			space8 = 'O';
		else if (gridSpace == 9)
			space9 = 'O';
		else
		{
			std::cout << "Not a valid space.\n";
		}
		Board();
	}
	system("pause");
}	
void Board()
{
	std::cout << " " << space1 << "|" << space2 << "|" << space3 << " \n";
	std::cout << "========\n";
	std::cout << " " << space4 << "|" << space5 << "|" << space6 << "\n";
	std::cout << "========\n";
	std::cout << " " << space7 << "|" << space8 << "|" << space9 << "\n";
}