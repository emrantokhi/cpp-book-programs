// Orc.cpp
// Body for orc object

#include "Orc.h"

Orc::Orc(int health) :
	Creature(health) 
{}

void Orc::Greet() const {
	std::cout << "The orc grunts hello!\n";
}