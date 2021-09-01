// Critter.cpp
// Demonstrate using private variables

#include "Critter.h"

Critter::Critter(int hunger) :
	m_hunger(hunger)
{
	std::cout << "A new critter has been formed! Hunger level: " << getHunger() << "\n";
}

//constant member function (bc of const)
int Critter::getHunger() const {
	return m_hunger;
}

void Critter::setHunger(int hunger) {
	if (hunger < 0) {
		std::cout << "You cannot set hunger lower than 0." << std::endl;
	}
	else {
		m_hunger = hunger;
	}
}