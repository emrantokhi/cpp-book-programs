// Farm.cpp
// Demonstrates Aggregates and holds a list of farm animals

#include "Farm.h"

Farm::Farm() {
	std::cout << "You have created an empty farm! Add some animals!\n";
}

void Farm::listAllCritters() {
	std::vector<Critter>::iterator c_iter;
	if (farm.size() == 0) {
		std::cout << "There are no critters on the farm!\n";
	}
	else {
		for (c_iter = farm.begin(); c_iter != farm.end(); c_iter++) {
			std::cout << "Hi, my name is " << c_iter->getName() << "\n";
		}
	}
}

void Farm::addCritter(Critter critter) {
	farm.push_back(critter);
}