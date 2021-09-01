// SimpleCritter.cpp 
// Demonstrates the use of classes

#include "SimpleCritter.h"
/*
class Critter {
public:
	int m_Hunger; //data member
	void Greet(); //member function prototype
};

void Critter::Greet() {
	std::cout << "Hello, I am a critter. My hunger level is: " << m_Hunger << " .\n";
}
*/

int main()
{
	Critter crit1; 
	Critter crit2;
	
	crit1.m_Hunger = 10;
	crit2.m_Hunger = 12;

	crit1.Greet();
	crit2.Greet();

	return 0;
}
