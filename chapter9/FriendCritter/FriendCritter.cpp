// FriendCritter.cpp 
// Demonstrates the use of friend functions and operator overloading

#include "FriendCritter.h"

void Peek(const Critter& critter);
std::ostream& operator<<(std::ostream& os, const Critter& critter);

int main()
{
	Critter critter;
	Critter critter1("Bowly");

	std::cout << "Testing out Peek() function:\n";
	Peek(critter);
	std::cout << "\n";

	std::cout << "Testing out overloading << operator:\n";
	std::cout << critter;
	std::cout << critter1;

	return 0;
}


//Friend function, allows main to access private members
void Peek(const Critter& critter) {
	std::cout << critter.m_name << std::endl;
}

//Friend function, access all private members of critter
//it is like overloading system.out.print in java for objects
//overloads the << operator so you can send a critter object to cout
std::ostream& operator<<(std::ostream& os, const Critter& critter) {
	os << "Critter Object - ";
	os << "name: " << critter.getName() << "\n";
	return os;
}
