// Creature.h
// Header file for creature abstract class

#include <iostream>

class Creature {
protected:
	int m_health;
public:
	Creature(int health = 100);
	virtual void Greet() const = 0; //pure virtual member function
	virtual void DisplayHealth() const;
};