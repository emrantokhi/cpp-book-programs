// Critter.cpp
// Critter object to show friend functions

#include "Critter.h"

Critter::Critter(const std::string& name) :
	m_name(name)
{}

std::string Critter::getName() const {
	return m_name;
}
