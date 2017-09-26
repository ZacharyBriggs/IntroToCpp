#include "Dungeon.h"

void Dungeon::GenRooms()
{
}
Dungeon::Dungeon()
{
	mRooms = new Point2D;
	mNumCols = 6;
	mNumRows = 6;
}
Dungeon::Dungeon(Player * player, int rows, int cols)
{
	mPlayer = new Player;
	mNumCols = cols;
	mNumRows = rows;
}
void Dungeon::PrintRooms()
{
}