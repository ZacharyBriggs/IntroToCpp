#include <iostream>
#include "Cat.h"
int main()
{
	Cat catArray[26];
	char i = 65;
	int iter = 0;
	while (i < 123)
	{
		catArray[iter].NameMe(i);
		iter += 2;
		i += 2;
		if (i == 91)
		{
			i = 98;
			iter = 1;
		}
		if (i == 123)
		{
			break;
		}
	}
}