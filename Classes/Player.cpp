#include "Player.h"
void Player::TakeDamage(int damAmount)
{
	mHealth -= damAmount;
}
void Player::ModifyLevel(int levelChange)
{
	mLevel += levelChange;
}