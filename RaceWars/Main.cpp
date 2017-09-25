#include "Player.h"
#include <time.h>
#include <iostream>
char randDirection();
int main()
{
	srand(time(NULL));
	Player Zach;
	char direction;
	for (int i = 0; i < 10; i++)
	{
		Zach.Move(direction = randDirection());
	}
	system("pause");
}

char randDirection()
{
	int direction = rand()%4+1;
	char directionChar;
	switch (direction)
	{
	case 1:
		directionChar = 'w';
		break;
	case 2:
		directionChar = 'a';
		break;
	case 3:
		directionChar = 's';
		break;
	case 4:
		directionChar = 'd';
		break;
	}
	return directionChar;
}
