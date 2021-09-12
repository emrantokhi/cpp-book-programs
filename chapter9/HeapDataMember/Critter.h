// Critter.h
// Header file for Critter object

#include <iostream>
#include <string>

class Critter {
    friend std::ostream& operator<<(std::ostream& os, const Critter& critter); //overloaded print operator
private:
	std::string * p_name;
	int m_age;
public:
	Critter(const std::string& name = "Leo", int age = 0);
	~Critter(); //Destructor prototype
	Critter(const Critter& critter); //copy constructor prototype
	Critter& Critter::operator=(const Critter& critter); //overloaded assignment
};
