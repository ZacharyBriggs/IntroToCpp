#include <iostream>
#include <fstream>
int main()
{
	std::fstream file;
	char *name = new char[255];
	file.open("test.txt", std::ios_base::out | std::ios_base::app);
	if (file.is_open())
	{
		std::cout << "Enter 6 student's names.\n";
		for (int i = 0; i < 6; i++)
		{
			std::cin >> name;
			file << name << std::endl;
		}
		std::cout << "Written.\n";
	}
	else
		std::cout << "Uh oh.\n";
	for (int i = 0; i < 6; i++)
	{
		file.getline(name, i);
	}
	file.close();
	system("pause");
}