// Critter.cpp
// Critter object 

#include "Critter.h"

int Critter::m_num_critters = 0;

Critter::Critter(int hunger) :
	m_hunger(hunger)
{
	//set current critter number to number of total critters
	m_critter_num = m_num_critters;
	//+1 to the static num_critters to keep count whenever constructor is called.
	m_num_critters++;
	std::cout << "A new critter has been born! Hunger level: " << getHunger() << "\n";
}


/*
Critter::Critter(int hunger) {
	setHunger(hunger);
	//set current critter number to number of total critters
	m_critter_num = m_num_critters;
	//+1 to the static num_critters to keep count whenever constructor is called.
	m_num_critters++;
	std::cout << "A new critter has been born! Hunger level: " << getHunger() << "\n";
}
*/


void Critter::setHunger(int hunger) {
	if (hunger < 0) {
		std::cout << "You cannot set the hunger below 0.\n\n";
	} 
	else {
		m_hunger = hunger;
	}
}

//Constant member function
int Critter::getHunger() const {
	return m_hunger;
}

//Get the value of the critter
int Critter::getCritterNum() const {
	return m_critter_num;
}

void Critter::greet() {
	std::cout << "I am critter " << getCritterNum() 
		<< " and my hunger level is : " << getHunger() << "\n\n";
}

//Static in the definition, dont state here
int Critter::getNumCritters() {
	return m_num_critters;
}