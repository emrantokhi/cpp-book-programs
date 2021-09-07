// Farm.h
// Farm header file for Farm object
 
#pragma once

#include <iostream>
#include <vector>
#include "Animals/Critter.h"

class Farm {
private:
	std::vector<Critter> farm;
public:
	Farm(); //should have spaces to reserve to be more efficient
	void listAllCritters();
	void addCritter(Critter critter); //should be a reference
};