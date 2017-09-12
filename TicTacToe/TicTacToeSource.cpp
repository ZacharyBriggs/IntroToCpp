/*
Create an application that allows to users to play Tic - Tac - Toe.The game
should be able to played until the users decide to quit by either hitting the X button on
the window or they should have an on screen prompt in your application that pops up after
each game.If the user does not exit the game they must have an option to restart the game without
having to relaunch the application.You must provide a document breaking down the steps taken to
solve the problem.
*/
#include <iostream>
//These are all global variables because they're used for multiple functions.
int gridSpace;
bool gameOver = false;
char space1;
char space2;
char space3;
char space4;
char space5;
char space6;
char space7;
char space8;
char space9;
char endGame;
//All functions except for main are prototyped for convenience.
void Player1();
void Player2();
void Board();
void WinConditionP1();
void WinConditionP2();
void CatCheck();
void PlayAgain();
void main()
{
//The game is put into a while loop so it can easily be broken out of once the game is over.
	char gameGrid[3][3];
	while (gameOver == false)
	{
		char gameGrid[3][3];
		int gridSpace;
		Player1();
		//The game checks for cat and wins at the end of each player's turns. Since the game checks for win condition first and ends if the requirements are met there
		//can never be both a win and a cat.
		WinConditionP1();
		if (gameOver == true)
			break;
		CatCheck();
		if (gameOver == true)
			break;
		Player2();
		WinConditionP2();
		if (gameOver == true)
			break;
		CatCheck();
		if (gameOver == true)
			break;
	}
}	
void Player1()
{
	bool p1Turn = true;
	//While loop so the program can end P1's turn once they choose a valid space or so the program can repeat if they don't choose a valid space.
	while (p1Turn == true)
	{
		std::cout << "P1 choose a space.\n";
		std::cin >> gridSpace;
		if (gridSpace == 1)
		{
			if (space1 == 'O' || space1 == 'X')
			{
				std::cout << "Spot already taken.\n";
				continue;
			}
			else if (space1 != 'O' || space1 != 'X');
			{
				space1 = 'X';
				break;
			}
		}
		else if (gridSpace == 2)
		{
			if (space2 == 'O' || space2 == 'X')
			{
				std::cout << "Spot already taken.\n";
				continue;
			}
			else if (space2 != 'O' || space2 != 'X');
			{
				space2 = 'X';
				break;
			}
		}
		else if (gridSpace == 3)
		{
			if (space3 == 'O' || space3 == 'X')
			{
				std::cout << "Spot already taken.\n";
				continue;
			}
			else if (space3 != 'O' || space3 != 'X');
			{
				space3 = 'X';
				break;
			}
		}
		else if (gridSpace == 4)
		{
			if (space4 == 'O' || space4 == 'X')
			{
				std::cout << "Spot already taken.\n";
				continue;
			}
			else if (space4 != 'O' || space4 != 'X');
			{
				space4 = 'X';
				break;
			}
		}
		else if (gridSpace == 5)
		{
			if (space5 == 'O' || space5 == 'X')
			{
				std::cout << "Spot already taken.\n";
				continue;
			}
			else if (space5 != 'O' || space5 != 'X');
			{
				space5 = 'X';
				break;
			}
		}
		else if (gridSpace == 6)
		{
			if (space6 == 'O' || space6 == 'X')
			{
				std::cout << "Spot already taken.\n";
				continue;
			}
			else if (space6 != 'O' || space6 != 'X');
			{
				space6 = 'X';
				break;
			}
		}
		else if (gridSpace == 7)
		{
			if (space7 == 'O' || space7 == 'X')
			{
				std::cout << "Spot already taken.\n";
				continue;
			}
			else if (space7 != 'O' || space7 != 'X');
			{
				space7 = 'X';
				break;
			}
		}
		else if (gridSpace == 8)
		{
			if (space8 == 'O' || space8 == 'X')
			{
				std::cout << "Spot already taken.\n";
				continue;
			}
			else if (space8 != 'O' || space8 != 'X');
			{
				space8 = 'X';
				break;
			}
		}
		else if (gridSpace == 9)
		{
			if (space9 == 'O' || space9 == 'X')
			{
				std::cout << "Spot already taken.\n";
				continue;
			}
			else if (space9 != 'O' || space9 != 'X');
			{
				space9 = 'X';
				break;
			}
		}
		else
		{
			std::cout << "Not a valid space.\n";
			continue;
		}
	}
	//The game displays the current board state at the end of every turn.
	Board();
}
void Player2()
{
	//P2 functions the same as P1.
	bool P2Turn = true;
	while (P2Turn == true)
	{
		std::cout << "P2 choose a space.\n";
		std::cin >> gridSpace;
		if (gridSpace == 1)
		{
			if (space1 == 'O' || space1 == 'X')
			{
				std::cout << "Spot already taken.\n";
				continue;
			}
			else if (space1 != 'O' || space1 != 'X');
			{
				space1 = 'O';
				break;
			}
		}
		else if (gridSpace == 2)
		{
			if (space2 == 'O' || space2 == 'X')
			{
				std::cout << "Spot already taken.\n";
				continue;
			}
			else if (space2 != 'O' || space2 != 'X');
			{
				space2 = 'O';
				break;
			}
		}
		else if (gridSpace == 3)
		{
			if (space3 == 'O' || space3 == 'X')
			{
				std::cout << "Spot already taken.\n";
				continue;
			}
			else if (space3 != 'O' || space3 != 'X');
			{
				space3 = 'O';
				break;
			}
		}
		else if (gridSpace == 4)
		{
			if (space4 == 'O' || space4 == 'X')
			{
				std::cout << "Spot already taken.\n";
				continue;
			}
			else if (space4 != 'O' || space4 != 'X');
			{
				space4 = 'O';
				break;
			}
		}
		else if (gridSpace == 5)
		{
			if (space5 == 'O' || space5 == 'X')
			{
				std::cout << "Spot already taken.\n";
				continue;
			}
			else if (space5 != 'O' || space5 != 'X');
			{
				space5 = 'O';
				break;
			}
		}
		else if (gridSpace == 6)
		{
			if (space6 == 'O' || space6 == 'X')
			{
				std::cout << "Spot already taken.\n";
				continue;
			}
			else if (space6 != 'O' || space6 != 'X');
			{
				space6 = 'O';
				break;
			}
		}
		else if (gridSpace == 7)
		{
			if (space7 == 'O' || space7 == 'X')
			{
				std::cout << "Spot already taken.\n";
				continue;
			}
			else if (space7 != 'O' || space7 != 'X');
			{
				space7 = 'O';
				break;
			}
		}
		else if (gridSpace == 8)
		{
			if (space8 == 'O' || space8 == 'X')
			{
				std::cout << "Spot already taken.\n";
				continue;
			}
			else if (space8 != 'O' || space8 != 'X');
			{
				space8 = 'O';
				break;
			}
		}
		else if (gridSpace == 9)
		{
			if (space9 == 'O' || space9 == 'X')
			{
				std::cout << "Spot already taken.\n";
				continue;
			}
			else if (space9 != 'O' || space9 != 'X');
			{
				space9 = 'O';
				break;
			}
		}
		else
		{
			std::cout << "Not a valid space.\n";
			continue;
		}
	}
	Board();
}
void Board()
{
	//The program will display the values saved to each space. If space1 == X then the program will display X in the first grid spot.
	std::cout << " " << space1 << "|" << space2 << "|" << space3 << " \n";
	std::cout << "========\n";
	std::cout << " " << space4 << "|" << space5 << "|" << space6 << "\n";
	std::cout << "========\n";
	std::cout << " " << space7 << "|" << space8 << "|" << space9 << "\n";
}
void WinConditionP1()
{
	//The game checks for every possible winning line for a total of 8 winning lines. If a player has a winning line the game then asks if the player wants to play again.
	//If the player doesn't have a winning line then the program continues as normal.
	if (space1 == 'X' && space2 == 'X' && space3 == 'X')
	{
		std::cout << "P1 wins!\n";
		PlayAgain();
	}
	else if (space4 == 'X' && space5 == 'X' && space6 == 'X')
	{
		std::cout << "P1 wins!\n";
		PlayAgain();
	}
	else if (space1 == 'X' && space4 == 'X' && space7 == 'X')
	{
		std::cout << "P1 wins!\n";
		PlayAgain();
	}
	else if (space1 == 'X' && space5 == 'X' && space9 == 'X')
	{
		std::cout << "P1 wins!\n";
		PlayAgain();
	}
	else if (space2 =='X' && space5 == 'X' && space8 == 'X')
	{
		std::cout << "P1 wins!\n";
		PlayAgain();
	}
	else if (space3 == 'X' && space6 == 'X' && space9 == 'X')
	{
		std::cout << "P1 wins!\n";
		PlayAgain();
	}
	else if (space3 == 'X' && space5 == 'X' && space7 == 'X')
	{
		std::cout << "P1 wins!\n";
		PlayAgain();
	}
	else if (space7 == 'X' && space8 == 'X' && space9 == 'X')
	{
		std::cout << "P1 wins!\n";
		PlayAgain();
	}
}
void WinConditionP2()
{
	//Same as WinConditionP1
	if (space1 == 'O' && space2 == 'O' && space3 == 'O')
	{
		std::cout << "P2 wins!\n";
		PlayAgain();
	}
	else if (space4 == 'O' && space5 == 'O' && space6 == 'O')
	{
		std::cout << "P2 wins!\n";
		PlayAgain();
	}
	else if (space1 == 'O' && space4 == 'O' && space7 == 'O')
	{
		std::cout << "P2 wins!\n";
		PlayAgain();
	}
	else if (space1 == 'O' && space5 == 'O' && space9 == 'O')
	{
		std::cout << "P2 wins!\n";
		PlayAgain();
	}
	else if (space2 == 'O' && space5 == 'O' && space8 == 'O')
	{
		std::cout << "P2 wins!\n";
		PlayAgain();
	}
	else if (space3 == 'O' && space6 == 'O' && space9 == 'O')
	{
		std::cout << "P2 wins!\n";
		PlayAgain();
	}
	else if (space3 == 'O' && space5 == 'O' && space7 == 'O')
	{
		std::cout << "P2 wins!\n";
		PlayAgain();
	}
	else if (space7 == 'O' && space8 == 'O' && space9 == 'O')
	{
		std::cout << "P2 wins!\n";
		PlayAgain();
	}
}
void CatCheck()
{
	//Checks to see if all spaces are taken. Since catcheck is placed after the win condition check there can never be a win and cat at the same time.
	if ((space1 == 'X' ||space1 == 'O') && (space2 == 'X' || space2 == 'O') && (space3 == 'X' || space3 == 'O') && (space4 == 'X' || space4 == 'O') && (space5 == 'X' || space5 == 'O') && (space6 == 'X' || space6 == 'O') && (space7 == 'X' || space7 == 'O') && (space8 == 'X' || space8 == 'O') && (space9 == 'X' || space9 == 'O'))
	{
		std::cout << "Cat!\n";
		PlayAgain();
	}
}
void PlayAgain()
{
	//Runs in a while loop so the program can ask the question again if they player chooses a not valid command.
	//Every space is set to 0 to clear the game board, otherwise the board would have the same values from last game.
	//Placed inside of win conditions and cat checks so the game can immediately end or restart once the game is finished.
	bool playAgainCheck = true;
	while (playAgainCheck == true)
	{
		std::cout << "Do you want to play again? Y/N\n";
		std::cin >> endGame;
		if (endGame == 'y')
		{
			std::cout << "Restarting...\n";
			space1 = 0;
			space2 = 0;
			space3 = 0;
			space4 = 0;
			space5 = 0;
			space6 = 0;
			space7 = 0;
			space8 = 0;
			space9 = 0;
			main();
		}
		else if (endGame == 'n')
		{
			std::cout << "Good-Bye!\n";
			gameOver = true;
			playAgainCheck = false;
		}
		else
		{
			std::cout << "Not a valid command.\n";
			continue;
		}
	}
}
