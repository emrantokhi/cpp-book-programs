// Critter.h
// Header file for critter object

#include <string>
#include <iostream>

class Critter {
	//make these global functions friends of Critter class
	friend void Peek(const Critter& critter);
	friend std::ostream& operator<<(std::ostream& os, const Critter& critter);
private:
	std::string m_name;

public:
	Critter(const std::string& name = "Leo");
	std::string getName() const;
};