#include <iostream>
void PrintStuff()
{
	std::cout << "Stuff\n";
}

void main()
{
	PrintStuff();
	std::cout << "More Stuff\n";
	PrintStuff();
	std::cout << "Even More Stuff\n";

	system("pause");
}