/*
Create an application that allows to users to play Tic - Tac - Toe.The game
should be able to played until the users decide to quit by either hitting the X button on
the window or they should have an on screen prompt in your application that pops up after
each game.If the user does not exit the game they must have an option to restart the game without
having to relaunch the application.You must provide a document breaking down the steps taken to
solve the problem.
*/
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
	system("pause");
	}	
}