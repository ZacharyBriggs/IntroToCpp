#pragma once
class Person
{
private:
	int mAge;
	char* mName;
	float mColor[3];
public:
	Person();
	Person(char* name, int age, float* color);
	void DisplayInfo();
	Person operator+(const Person & other);
};