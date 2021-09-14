// Boss.cpp
// Body for Boss object

#include "Boss.h"

Boss::Boss(int multiplier) {
	m_multiplier = new int(multiplier);
}

Boss::~Boss() {
	std::cout << "\nBoss Destructor is called. Deleting m_multiplier.\n";
	delete m_multiplier;
	m_multiplier = 0;
}

void Boss::Attack() const {
	std::cout << "The enemy strikes and deals " << ((*m_damage) * (*m_multiplier)) << " to your HP!\n";
}