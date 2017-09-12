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
	if (newCar.mTires < 0)
		newCar.mTires = 0;
	std::cout << "Input amount of seats.\n";
	std::cin >> newCar.mSeats;
	if (newCar.mSeats < 0)
		newCar.mSeats = 0;
	std::cout << "Input maker.\n";
	std::cin >> newCar.mMaker;
	std::cout << "Input model.\n";
	std::cin >> newCar.mModel;
	std::cout << "Input year.\n";
	std::cin >> newCar.mYear;
	return newCar;
}
/*
Vehicle zachCar;
zachCar.mTires = 4;
zachCar.mSeats = 5;
zachCar.mYear = 2015;
strcpy_s(zachCar.mMaker, "Ford\0");
strcpy_s(zachCar.mModel, "Focus\0");
zachCar.mEngine;
zachCar.EngineOn(false);
classCars[0] = zachCar;
*/