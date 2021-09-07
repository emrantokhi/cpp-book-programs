// CritterFarm.cpp 
// Demonstrates Aggregation

#include "CritterFarm.h"

int main()
{
	Farm farm;
	farm.listAllCritters();

	std::cout << "Creating critters to be added to the farm.\n";

	Critter critter("Leo");
	Critter critter1("Alice");
	Critter critter2;

	farm.addCritter(critter);
	farm.addCritter(critter1);
	farm.addCritter(critter2);

	farm.listAllCritters();
}
