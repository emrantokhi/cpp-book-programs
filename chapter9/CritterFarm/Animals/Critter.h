// Critter.h
// Header file for Critter object

#pragma once

#include <string>

class Critter {
private:
	std::string name;
public:
	Critter(std::string name = "Joe");
	std::string getName();
};