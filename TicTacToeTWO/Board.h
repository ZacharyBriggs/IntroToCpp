#pragma once
#include <iostream>

class Board 
{
	char *board;
	int numSpaces;
public:
	Board(int size);
	~Board();
	void chooseSpace(int &space, char piece);
	void displayBoard();
	void ClearBoard();
	void winCondition();
};
