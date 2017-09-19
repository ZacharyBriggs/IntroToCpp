#pragma once
class Zombie 
{
public:
	int mHealth;
	int mAttackPower;
	Zombie();
	Zombie(int hp, int atk); //Assigns values to mHealth & mAttackPower
	int GetHealth(); //Returns value of mHealth
	int GetAttack(); //Returns value of mAttackPower
	void TakeDamage(int amount); //modifies the values of mHealth by value passed in
	bool IsDead(); // if mHealth > 0 zombies is not dead

};