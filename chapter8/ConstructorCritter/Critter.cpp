//Critter.cpp
// Critter object file
#include "Critter.h"

/*
Critter::Critter(int hunger) {
	m_Hunger = hunger;
	std::cout << "I am a new Critter that as been created! I have " << m_Hunger << " hunger.\n";
}
*/

//Member initializers
Critter::Critter(int hunger): 
	m_Hunger(hunger)
	//body of constructor
{
	std::cout << "I am a new Critter that as been created! I have " << m_Hunger << " hunger.\n";
}

void Critter::Greet() {
	std::cout << "I am a constructor critter and my hunger level is: " << m_Hunger << ".\n";
}