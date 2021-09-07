// Critter.cpp
// Individual critters in a farm

#include "Critter.h"

Critter::Critter(std::string name) :
	name(name)
{}

std::string Critter::getName() {
	return name;
}