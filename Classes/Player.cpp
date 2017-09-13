#include <iostream>
#include "Player.h"
Player::Player()
{
	mPos = Point2D();
	strcpy_s(mName, "Default");
	mLevel = 1;
}
Player::Player(Point2D pos, char name[255])
{
	mPos = pos;
	strcpy_s(mName, name);
	mLevel = 1;
}
void Player::MovePlayer(Point2D move)
{
	move.Add(posXY)
}
bool Player::LevelUp()
{
	int levelCap = 110;
	if (mLevel < levelCap)
	{
		mLevel++;
		std::cout << "Level Up!";
		return true;
	}
	else
		return false;
}
/*
#include "Player.h"
void Player::TakeDamage(int damAmount)
{
	mHealth -= damAmount;
}
void Player::ModifyLevel(int levelChange)
{
	mLevel += levelChange;
}
*/

