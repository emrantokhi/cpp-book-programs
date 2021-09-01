// Critter.h
// Header file for Critter Object

#include <iostream>

class Critter {
private: //private variables
	int m_hunger;
public: //public variables
	int getHunger() const;
	void setHunger(int hunger = 0);
	Critter(int hunger = 0);
};