// Creature.cpp
// Body for creature abstract class

#include "Creature.h"

Creature::Creature(int health) :
	m_health(health) 
{}

void Creature::DisplayHealth() const{
	std::cout << "Health: " << m_health;
}