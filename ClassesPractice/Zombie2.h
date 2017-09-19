#pragma once
class Zombie
{
private:
	int mHealth;
	int mAttack;
public:
	Zombie();
	Zombie(int health, int attack);
	int GetHealth();
	int GetAttack();
	void SetHealth(int health);
	void SetAttack(int attack);
};
