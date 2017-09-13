#include <iostream>
#include "Player.h"
#include "Point2D.h"
int main()
{
	Point2D testOne;
	Point2D testTwo(5.0f, 5.5f);
	Point2D testThree = testOne.Add(testTwo);
	Point2D testFour = testThree.Add(testTwo);

	Player playerOne;
	Player playerTwo(testTwo,"Zach");
	Player playerThree(Point2D(1, 5), "Bob");
	bool testLevel = playerOne.LevelUp();

	system("pause");
}

/*
int main()
{
	Player zach;
	zach.mHealth = 100;
	zach.mLevel = 18;
	zach.mGender = true;
	zach.mResource = 50;

	zach.TakeDamage(10);
	zach.ModifyLevel(1);
	system("pause");
}
*/