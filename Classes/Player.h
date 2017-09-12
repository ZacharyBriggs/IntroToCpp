#pragma once
class Player
{
public:
	int mHealth;
	char mName[255];
	int mResource;
	int mLevel;
	bool mGender;

	void TakeDamage(int damAmount);
	void ModifyLevel(int levelChange);
};