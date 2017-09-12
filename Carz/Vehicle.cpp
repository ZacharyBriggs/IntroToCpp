#include "Vehicle.h"
#include <iostream>
void Vehicle::EngineOn(bool onOff)
{
	mEngine = onOff;
}
Vehicle Vehicle::CreateCar()
{
	Vehicle newCar;
	std::cout << "Input amount of tires.\n";
	std::cin >> newCar.mTires;
	std::cout << "Input amount of seats.\n";
	std::cin >> newCar.mSeats;
	std::cout << "Input maker.\n";
	std::cin >> newCar.mMaker;
	std::cout << "Input model.\n";
	std::cin >> newCar.mModel;
	std::cout << "Input year.\n";
	std::cin >> newCar.mYear;
	return newCar;
}