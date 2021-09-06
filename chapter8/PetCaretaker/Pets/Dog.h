// Dog.h
// Pet Dog object

#pragma once

#include <iostream>
#include <string>

class Dog {
private:
	int hunger;
	int energy;
	int mood; 
	int modifier;
	std::string name;
	
	//only for use by activity functions
	inline void checkMood(); 
	inline void checkStats();
public:
	Dog(std::string name = "Chop", int hunger = 100, int mood = 100, int energy = 100);
	int getHunger();
	int getEnergy();
	int getMood();
	int getModifier();
	std::string getStatus();
	std::string getName();

	void setName(std::string name);

	//Called to naturally lower stats per turn
	void lowerStats();

	void eat();
	void sleep();
	void fetch();
	void walk();
	void doNothing();
	void printStats();
	

	//mood modifiers (how much mood dog loses based on current mood)
	static const int S_HAPPY_MOD = 5;
	static const int S_SAD_MOD = 10;
	static const int S_MEH_MOD = 15;
};