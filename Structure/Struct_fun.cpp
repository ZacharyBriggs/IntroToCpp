#include <iostream>
struct Player
{
	int mHealth;
	int mResource;
	float mMoveSpeed;
	int mLevel;
	int mArmor;
	int mStrength;
};
Player CreatePlayer();
Player CreatePlayer(int health, int strength, float moveSpeed);
int main()
{
	Player zach = {};
	Player steven = CreatePlayer();
	Player tj = CreatePlayer(100, 9001, 420);
	steven = tj;
	system("pause");
}
Player CreatePlayer()
{
	Player newPlayer = {};
	return newPlayer;
}
Player CreatePlayer(int health,int strength, float moveSpeed)
{
	Player newPlayer = {health,0,strength,0,moveSpeed,0};
}