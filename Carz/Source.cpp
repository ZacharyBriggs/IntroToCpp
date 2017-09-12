#include<iostream>
#include "Vehicle.h"
int main()
{
	Vehicle classCars[7];
	for (int i = 0; i < 0; i++)
	{
		Vehicle::CreateCar();
		classCars[i] =
	}
	Vehicle zachCar;
	zachCar.mTires = 4;
	zachCar.mSeats = 5;
	zachCar.mYear = 2015;
	strcpy_s(zachCar.mMaker, "Ford\0");
	strcpy_s(zachCar.mModel, "Focus\0");
	zachCar.mEngine;
	zachCar.EngineOn(false);
	classCars [0] = zachCar;
	system("pause");
}