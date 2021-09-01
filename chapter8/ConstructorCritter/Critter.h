// Critter.h
// Header file for Critter object

#include <iostream>

class Critter {
public:
	//Constructor
	Critter(int hunger = 0);
	//Member function
	void Greet();
	//Data member
	int m_Hunger;
};