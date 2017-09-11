#include <iostream>
struct Student
{
	char mName[255];
	char mID[255];
	int mAge;
};
int main()
{
	Student classRoom[7];
	classRoom[0] = { "Zach", "s171", 18 };
	classRoom[1] = { "Luke", "s172", 18 };
	classRoom[2] = { "Matthew", "s173", 18 };
	classRoom[3] = { "TJ","s174",21 };
	classRoom[4] = { "Steven","s175", 19 };
	classRoom[5] = { "Ralenski","s176", 20 };
	classRoom[6] = { "Brett", "s177", 18 };
	int oldest = classRoom[0].mAge;
	strcpy(char oldName[255])
	char oldName[255] = classRoom[0].mName[255];
	int oldID[255] = classRoom[0].mID[255];
	for (int i = 0; i < 7; i++)
	{
		if (classRoom[i].mAge > oldest)
		{
			if(classRoom)
			oldest = classRoom[i].mAge;
		}
	}
	std::cout << oldest << std::endl;
	system("pause");
}