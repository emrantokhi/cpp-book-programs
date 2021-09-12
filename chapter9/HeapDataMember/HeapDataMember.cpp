// HeapDataMember.cpp : Defines the entry point for the application.
//

#include "HeapDataMember.h"

//friend functions
std::ostream& operator<<(std::ostream&, const Critter& critter);
//Function prototypes
void testDestructor();
void testCopyConstructor(Critter copy);
void testAssignment();

int main()
{
	testDestructor(); //function scrope ends, so destructor is called
	std::cout << "\n";

	Critter critter("Poochie", 12);
	testCopyConstructor(critter); //sent a copy, so copy constructor called
	
	testAssignment();

	return 0;
}

void testDestructor() {
	Critter critter("Roger", 5);
	std::cout << critter;
}

void testCopyConstructor(Critter copy) {
	std::cout << copy;
}

void testAssignment() {
	std::cout << "Creating critter 1 'Steve' and critter 2 'Lopez'\n";
	Critter critter1("Steve", 4);
	Critter critter2("Lopez", 5);
	
	std::cout << "Setting critter2 equal to critter1 so both are steve.\n\n";

	critter2 = critter1;

	std::cout << "Critter 1: " << critter1 << "\nCritter2: " << critter2 << std::endl;
}


//Print out overload
std::ostream& operator<<(std::ostream& os, const Critter& critter){
	os << "Critter object - Name: " << *(critter.p_name) << "\nAge: " << critter.m_age;
	return os;
}

