// Critter.cpp
// Critter object body

#include "Critter.h"

Critter::Critter(const std::string& name, int age){
	std::cout << "Constructor called.\n\n";
	p_name = new std::string(name); //putting name on the heap
	m_age = age;
}

//destructor
Critter::~Critter() {
	std::cout << "\nDestructor is called.\n";
	delete p_name;
}

//Copy constructor
Critter::Critter(const Critter& critter) {
	std::cout << "\nCopy Constructor called.\n";
	p_name = new std::string(*(critter.p_name));
	m_age = critter.m_age;
}


//Assignment overload
Critter& Critter::operator=(const Critter& critter) {
	std::cout << "\nOverloaded Assignment Operator called\n";
	if (this != &critter) {
		delete p_name;
		p_name = new std::string(*(critter.p_name));
		m_age = critter.m_age;
	}
	return *this; //this is a pointer so you need to dereference it
}
