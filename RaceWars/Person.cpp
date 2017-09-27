#include "Includes.h"
Person::Person()
{
	mName = "Default";
	mAge = 18;
	for (int i = 0; i < 3; i++)
		mColor[i] = 255;
}

Person::Person(char* name, int age, float* color)
{
	mName = name;
	mAge = age;
	for (int i = 0; i < 3; i++)
		mColor[i] = color[i];
}

void Person::DisplayInfo()
{
	std::cout << "Name: " << mName << " Age: " << mAge << " Color: ";
	for (int i = 0; i < 3; i++)
		std::cout << mColor[i] << ",";
	std::cout << std::endl;
}

Person Person::operator+(const Person & other)
{
	Person temp;
	for (int i = 0; i < strlen(mName)+strlen(other.mName); i++)
	{
		if (i > strlen(mName))
			temp.mName[i] = other.mName[i];
		temp.mName[i] = mName[i];
	}
	temp.mAge = 0;
	for (int i = 0; i < 3; i++)
		temp.mColor[i] = (mColor[i] + other.mColor[i]) / 2;
	return temp;
}
