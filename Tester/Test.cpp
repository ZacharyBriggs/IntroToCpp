#include <iostream>

int Add(int a, int b)
{
	return a + b;
}
int Sub(int a, int b, int c)
{
	return a - b - c;
}
int MultTen(int a)
{
	return a * 10;
}
float Halve(float a)
{
	return a / 2;
}
int main()
{
	std::cout << Add(1, 2) << std::endl;
	std::cout << Sub(6, 4, 2) << std::endl;
	std::cout << MultTen(5) << std::endl;
	std::cout << Halve(3) << std::endl;
	system("pause");
}
