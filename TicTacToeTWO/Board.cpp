#include "Board.h"

Board::Board(int rows,int cols)
{
	{
		board = new char[rows+cols]; //allocates new memory for the char array.
		this->numSpaces = rows*cols;
		this->numRows = rows;
		this->numCols = cols;
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
	if (board[space - 1] == 'X' || board[space - 1] == 'O' || space - 1 > 8 || space - 1 < 0)
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
void Board::winCondition(char piece)
{
	for (int i = 0; i < numCols; i++)
	{
		//Checks rows
		if (this->board[i] == 32)
			continue;
		if (this->board[i] == this->board[i + 3])
		{
			if (this->board[i] == this->board[i + 6] && this->board[i + 3] == this->board[i + 6])
			{
				std::cout << piece << " wins!" << std::endl;
			}
		}
		//Checks cols
		if (this->board[i] == this->board[i + 1])
		{
			if (this->board[i] == this->board[i + 2] && this->board[i + 1] == this->board[i + 2])
			{
				std::cout << piece << " wins!" << std::endl;
			}
		}
		//Checks diagnols
		if (this->board[i] == this->board[i + 4])
		{
			if (this->board[i] == this->board[i + 8] && this->board[i + 4] == this->board[i + 8])
			{
				std::cout << piece << " wins!" << std::endl;
			}
		}
	}
}
