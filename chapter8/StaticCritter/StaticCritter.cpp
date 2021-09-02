// StaticCritter.cpp 
// Demonstrate the use of static variables and static functions
#include "StaticCritter.h"

int main()
{
	std::cout << "Total number of critters: " << Critter::getNumCritters() << "\n\n";

	Critter crit;
	Critter crit1(5);
	Critter crit2(10);

	std::cout << "\nTotal number of new critters: " << Critter::getNumCritters() << "\n\n";

	crit.greet();
	crit1.greet();
	crit2.greet();

	return 0;
}
