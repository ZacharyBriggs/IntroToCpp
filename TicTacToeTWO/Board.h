#pragma once
#include <iostream>

class Board 
{
	char *board;
	int numSpaces;
public:
	Board(int size)
	{
		board = new char[size]; //allocates new memory for the char array.
		this->numSpaces = size;
		for (int i = 0; i < size; i++)
		{
			board[i] = 32;//assigns values to the board
		}
	}

	~Board()
	{
		delete board; //frees me3mory allocated for the board
	}

	void chooseSpace(int &space, char piece)
	{
		if (board[space] == 'X' || board[space] == 'O' || space > 8)
		{
			std::cout << "Invalid choice pick a new space.\n";
			std::cin >> space;
			chooseSpace(space, piece);
		}
		else 
			board[space] = piece;
		
	}
	void displayBoard()
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
	void ClearBoard()
	{
		{
			for (int i = 0; i < this->numSpaces; i++)
				board[i] = 32;
		}
	}
};
