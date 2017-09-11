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
struct Enemy
{
	float mHealth;
	int mAttackPower;
};
Player CreatePlayer();
Enemy CreateEnemy(float health, int attack);
Player CreatePlayer(int health, int strength, float moveSpeed);
int main()
{
	Player zach = {};
	Player steven = CreatePlayer();
	Player tj = CreatePlayer(100, 9001, 420);
	steven = tj;
	Enemy bandit = { 20.5f, 5 };
	Enemy frog = {5.0f, 15};
	while (bandit.mHealth > 0 && frog.mHealth > 0)
	{
		bandit.mHealth -= frog.mAttackPower;
		frog.mHealth -= bandit.mAttackPower;
	}
	system("pause");
}
Player CreatePlayer()
{
	Player newPlayer = {};
	return newPlayer;
}
Enemy CreateEnemy(float health, int attack)
{
	Enemy newEnemy = {};
}
Player CreatePlayer(int health,int strength, float moveSpeed)
{
	Player newPlayer = {health,0,strength,0,moveSpeed,0};
}