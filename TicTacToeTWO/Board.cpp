#include "Board.h"

Board::Board(int rows,int cols)
{
	{
		board = new char[rows+cols]; //allocates new memory for the char array.
		this->numSpaces = rows*cols;
		for (int i = 0; i < numSpaces; i++)
		{
			board[i] = 32;//assigns values to the board
		}
	}
}
Board::~Board()
{
	{
		delete board; //frees me3mory allocated for the board
	}
}
void Board::chooseSpace(int &space, char piece)
{
	if (board[space - 1] != 32 || space - 1 > 8 || space - 1 < 0)
	{
		std::cout << "Invalid choice pick a new space.\n";
		std::cin >> space;
		chooseSpace(space, piece);
	}
	else
		board[space - 1] = piece;

}
void Board::displayBoard()
{
	for (int i = 0; i < this->numSpaces; i++)
	{
		std::cout << board[i] << "|";
		if (i == 2)
			std::cout << std::endl;
		if (i == 5)
			std::cout << std::endl;
		if (i == 8)
			std::cout << std::endl;
	}
}
void Board::ClearBoard()
{
	{
		for (int i = 0; i < this->numSpaces; i++)
			board[i] = 32;
	}
}
void Board::winCondition(char piece, bool &gameRunning)
{
	//Checks rows
	for (int i = 0; i < 8; i += 3)
	{
		if (this->board[i] == 32)
			continue;
		if (this->board[i] == this->board[i + 2] && this->board[i + 1] == this->board[i + 2])
		{
			std::cout << piece << " wins!" << std::endl;
			gameRunning = false;
			break;
		}
	}
	//Checks cols
	for (int i = 0; i < 3; i++)
	{
		if (this->board[i] == 32)
			continue;
		if (this->board[i] == this->board[i + 6] && this->board[i + 3] == this->board[i + 6])
		{
			std::cout << piece << " wins!" << std::endl;
			gameRunning = false;
			break;
		}
	}
	//Checks Diagnols
	if (this->board[0] != 32 && this->board[0] == this->board[4] && this->board[4] == this->board[8])
		{
			std::cout << piece << " wins!" << std::endl;
			gameRunning = false;
		}
	if (this->board[2] != 32 && this->board[2] == this->board[4] && this->board[4] == this->board[6])
		{
			std::cout << piece << " wins!" << std::endl;
			gameRunning = false;
		}
	//Checks for cat
	int filledSpace = 0;
	for (int i = 0; i < 9; i++)
	{
		if (board[i] != 32)
			filledSpace++;
		if (filledSpace == 9)
		{
			gameRunning = false;
			std::cout << "You're all losers!" << std::endl;
		}
	}

}
