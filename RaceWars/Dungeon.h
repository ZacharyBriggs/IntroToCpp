#pragma once
#include "Player.h"
class Dungeon
{
private:
	Point2D* mRooms;
	Player* mPlayer;
	int mNumCols;
	int mNumRows;
public:
	void GenRooms();
	Dungeon();
	Dungeon(Player* player, int rows, int cols);
	bool CheckPlayerPosition();
	void PrintRooms();
};