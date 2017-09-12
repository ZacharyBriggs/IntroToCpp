#pragma once
class Vehicle
{
public:
	int mTires;
	int mSeats;
	char mMaker[255];
	char mModel[255];
	int mYear;
	bool mEngine;
	void EngineOn(bool onOff);
	Vehicle CreateCar();
};
