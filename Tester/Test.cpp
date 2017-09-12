#include <iostream>
//Modify your answer to allow the user to search for vehicles by year,name, and maker.
struct Vehicle
{
	int mNumTires;
	int mNumSeats;
	char mMakerName[255];
	char mModelName[255];
	int mModelYear;
};
Vehicle Print(Vehicle carInfo);
int main()
{
	Vehicle ebayAutomotive[15];
	ebayAutomotive[0] = { 2, 4, "Porshe", "911", 2016 };
	ebayAutomotive[1] = { 2, 4, "McLaren", "720s", 2018 };
	ebayAutomotive[2] = { 4, 4, "Honda", "Civic", 2017 };
	ebayAutomotive[3] = { 4,4,"Nissan", "Sentra", 2012 };
	ebayAutomotive[4] = { 2,4, "Ford", "Mustang", 1965 };
	ebayAutomotive[5] = { 2, 4, "Audi", "S8", 2017 };
	ebayAutomotive[6] = { 2, 2, "Ford", "GT", 2017 };
	ebayAutomotive[7] = { 2,4,"Toyota", "Supra", 1998 };
	ebayAutomotive[8] = { 4,4,"Ford", "Fiesta", 2005 };
	ebayAutomotive[9] = { 2, 1, "YuGiOh", "Duel Runner", 2025 };
	ebayAutomotive[10] = { 2, 3, "UNSC", "Warthog", 2500 };
	ebayAutomotive[11] = { 2, 1, "Moongoose", "Legion L40", 2017 };
	ebayAutomotive[12] = { 2, 2, "Ferrari", "La Farrari", 2015 };
	ebayAutomotive[13] = { 2, 2, "TVR", "Sergis", 2013 };
	ebayAutomotive[14] = { 1, 0, "US Army", "M1 Abrams", 2018 };
	char userInput[255];
	std::cout << "Search for a vehicle.\n";
	std::cin >> userInput;
	bool carFound = false;
	for (int i = 0; i < 15; i++)
	{
		if (strcmp(userInput, ebayAutomotive[i].mMakerName) == 0)
		{
			Print(ebayAutomotive[i]);
			std::cout << std::endl;
			carFound = true;
		}
		else if (strcmp(userInput, ebayAutomotive[i].mModelName) == 0)
		{
			Print(ebayAutomotive[i]);
			std::cout << std::endl;
			carFound = true;
		}
	}
	if (carFound == false)
		std::cout << "No results found.\n";
	system("pause");
}
Vehicle Print(Vehicle carInfo)
{
	std::cout << "Number of tires: " << carInfo.mNumTires << " Number of Seats: " << carInfo.mNumSeats << " Maker Name: " << carInfo.mMakerName << " Model Name: " << carInfo.mModelName << " Model Year: " << carInfo.mModelYear << std::endl;
	return carInfo;
}