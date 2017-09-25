#include "Player.h"
#include <iostream>

Player::Player()
{
	mHealth = 100;
	mPosition = new Point2D();
	mName = "George";
}
Player::Player(char* name)
{
	mName = name;
}

void Player::Move(char direction) //Moves the player up, down, left, or right
{
	if (direction == 'w')
	{
		*mPosition += *new Point2D(0, 1);
	}
	if (direction == 'a')
	{
		*mPosition += *new Point2D(-1, 0);
	}
	if (direction == 's')
	{
		*mPosition += *new Point2D(0,-1);
	}
	if (direction == 'd')
	{
		*mPosition += *new Point2D(1,0);
	}
}

void Player::SetPosition(Point2D * pos)
{
	mPosition = pos;
}
