#include <iostream>
//Modify your answer to allow the user to search for vehicles by year,name, and maker. 
struct Item
{
	char mName[255];
	int  mCost;
	int  mQuantity;
};
struct Shop
{
	int mTotalGold;
	Item mItems[5];
};
void PrintShopInv(Shop shopData);
int main()
{
	Shop blacksmith = { 2000 };
	blacksmith.mItems[0] = { "Stick",1,1 };
	blacksmith.mItems[1] = { "Wand",5,1 };
	blacksmith.mItems[2] = { "Dagger",15,1 };
	blacksmith.mItems[3] = { "Sword",30,1 };
	blacksmith.mItems[4] = { "Excalibur",1500,1 };
	PrintShopInv(blacksmith);
	system("pause");
}
void PrintShopInv(Shop shopData)
{
	std::cout << "Current shop funds: " << shopData.mTotalGold << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Name     : " << shopData.mItems[i].mName << std::endl;
		std::cout << "Cost     : "  << shopData.mItems[i].mCost << std::endl;
		std::cout << "Quantity : " << shopData.mItems[i].mQuantity << std::endl;
	}
}
/*
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
	std::cout << "Enter a vehicle maker.\n";
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
*/
/*
Vehicle Print(Vehicle carInfo);
int main()
{
	Vehicle MatthewCar = { 4,2,"Nissan","Frontier",2001 };
	Vehicle LukeCar = { 4,4,"Subaru","BRZ",2014 };
	Vehicle StevenCar = { 2,1,"Mongoose","Legion L40",2017 };
	Print(MatthewCar);
	system("pause");
}
Vehicle Print(Vehicle carInfo)
{
	std::cout << "Number of tires: " << carInfo.mNumTires << " Number of Seats: " << carInfo.mNumSeats << " Maker Name: " << carInfo.mMakerName << " Model Name: " << carInfo.mModelName << " Model Year: " << carInfo.mModelYear << std::endl;
	return carInfo;
}
*/
/*
struct Player
{
	char mName[255];
	int mScore;
};
Player players[5];
Player CreatePlayer();
int main()
{
	CreatePlayer();
	for (int i = 0; i < 5; i++)
	{
		players[i] = CreatePlayer();
		system("cls");
	}
	system("cls");
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Name\n" << players[i].mName << "Score\n" << players[i].mScore;
	}
	system("pause");
}
Player CreatePlayer()
{
	Player newPlayer = {};
	std::cout << "Input Name.\n";
	std::cin >> newPlayer.mName;
	std::cout << "Input Score.\n";
	std::cin >> newPlayer.mScore;
	return newPlayer;
}
*/