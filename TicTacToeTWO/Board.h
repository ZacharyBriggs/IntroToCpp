#pragma once
#include <iostream>

class Board
{
	char *board;
	int numSpaces;
public:
	Board(int rows, int cols);
	~Board();
	void chooseSpace(int &space, char piece);
	void displayBoard();
	void ClearBoard();
	void winCondition(char piece,bool &gameRunning);
};
