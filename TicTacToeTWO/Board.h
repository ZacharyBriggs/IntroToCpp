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
		numSpaces = size;
		for (int i = 0; i < size; i++)
		{
			board[i] = 32;//assigns values to the board
		}
	}

	~Board()
	{
		delete board; //frees me3mory allocated for the board
	}

	void chooseSpace(int space, char piece)
	{
		board[space] = piece;
	}
	void displayBoard()
	{
		for (int i = 0; i < numSpaces; i++)
		{
			std::cout << board[i];
			if (i % (numSpaces - 1) == 0)
				std::cout << std::endl;
		}
	}
	void ClearBoard()
	{
		{
			for (int i = 0; i < numSpaces; i++)
				board[i] = 32;
		}
	}
};
