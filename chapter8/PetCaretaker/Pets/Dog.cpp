// Dog.cpp
// Pet dog object that player will take care of

#include "Dog.h"

//Constructors
Dog::Dog(std::string name, int hunger, int mood, int energy) :
	name(name),
	hunger(hunger),
	mood(mood),
	energy(energy)
{
	modifier = S_HAPPY_MOD;
}

//Getters and setters
int Dog::getHunger() {
	return hunger;
}

int Dog::getEnergy() {
	return energy;
}

int Dog::getMood() {
	return mood;
}

int Dog::getModifier() {
	return modifier;
}

std::string Dog::getName() {
	return name;
}

std::string Dog::getStatus() {
	switch (modifier) {
	case S_SAD_MOD:
		return "Sad ):";
		break;
	case S_MEH_MOD:
		return "Okay |:";
		break;
	case S_HAPPY_MOD:
		return "Happy (:";
		break;
	default:
		return "Error";
		break;
	}
}

void Dog::setName(std::string name) {
	this->name = name;
}

//Change the modifier based on mood
void Dog::checkMood() {
	if (mood <= 100 && mood > 75) {
		modifier = S_HAPPY_MOD;
	}
	else if (mood <= 75 && mood > 45) {
		modifier = S_MEH_MOD;
	}
	else if (mood <= 45 && mood >= 0) {
		modifier = S_SAD_MOD;
	}
}

//Make sure stats are always between 0 and 100
void Dog::checkStats() {
	if (mood > 100) {
		mood = 100;
	}
	else if (mood < 0) {
		mood = 0;
	}

	if (hunger > 100) {
		hunger = 100;
	}
	else if (hunger < 0) {
		hunger = 0;
	}

	if (energy > 100) {
		energy = 100;
	}
	else if (energy < 0) {
		energy = 0;
	}
}

//lowerMood will be called each iteration of game loop
void Dog::lowerStats() {
	hunger -= 5;
	energy -= 5;
	mood -= 5;
	checkStats();
	checkMood();
}

//activity functions
void Dog::eat() {
	std::cout << "Your dog runs over to its topped off bowl of delicious dog food, complete with "
		<< "real protein!\n\n" << std::endl;
	std::cout << "\t\t    ,    /-.\n\t\t   ((___/ __>\n\t\t   /      }\n";
	std::cout << "\t\t   \\ .--.(    ___\n\t\t    \\\\   \\\\  /___\\\n";
	//Hunger and energy always go up same no matter mood
	hunger += 15;
	energy += 5;
	switch (modifier) {
		case S_HAPPY_MOD:
			mood += 0;
			break;
		//default is for meh/sad as they are the same
		default:
			mood += 5;
			break;
	}
	checkStats();
	checkMood();
}

void Dog::sleep() {
	//Dog house ascii art
	std::cout << "\n\t\t            ,/A\\,\n\t\t          .//`_`\\\\,\n\t\t"
		<< "        ,//`____-`\\\\,\n\t\t      ,//`[_" << name << "_]`\\\\,\n\t\t"
		<< "    ,//`=  ==  __-  _`\\\\,\n\t\t     |  __ .-----.  _  | \n\t\t"
		<< "     | - _/       \\-   |\n\t\t     |__  | .-\"-. | __=| \n\t\t"
		<< "     |  _=|/)   (\\|    |\n\t\t     |-__ (/ a a \) -__ |\n\t\t     |___ /`\\_Y_/`\\____|\n\t\t"
		<< "          \)8===8(/";
	//Hunger and energy are always the same no matter mood
	hunger -= 15;
	energy += 15;
	switch (modifier) {
		case S_SAD_MOD:
			mood -= 5;
			break;
		case S_HAPPY_MOD:
			mood += 10;
			break;
		default:
			break;
	}
	checkStats();
	checkMood();
}

void Dog::fetch() {
	std::cout << "\nYou and " << name << " go to the park with a nice, juicey, green tennis ball and play fetch!\n";
	std::cout << "\n\t\t                .--~~,__\n\t\t   :-....,-------`~~'._.'\n\t\t    `-,,,  ,_      ;'~U'\n\t\t"
		<< "     _,-' ,'`-__; '--.\n\t\t    (_/'~~      ''''(;\n";
	//Hunger and energy always same no matter mood
	hunger -= 15;
	energy -= 15;
	switch (modifier) {
		case S_SAD_MOD:
			mood += 15;
			break;
		case S_MEH_MOD:
			mood += 10;
			break;
		case S_HAPPY_MOD:
			mood += 5;
			break;
	}
	checkStats();
	checkMood();
}

void Dog::walk() {
	std::cout << "\nYou and " << name << " go on a nice walk outside, the day's breezy and warm!\n";
	std::cout << "\n\t\t                  ;~~,__\n\t\t   :-....,-------'`-'._.'\n\t\t    `-,,,  ,       ,'~~'\n\t\t"
		<< "        ; ,'~.__; /--.\n\t\t        :| :|   :|``(;\n\t\t        `-'`-'  `-'\n";
	//Hunger and energy are the same no matter mood
	hunger -= 10;
	energy -= 10;
	switch (modifier) {
		case S_SAD_MOD:
			mood += 10;
			break;
		default:
			mood += 5;
			break;
	}
	checkStats();
	checkMood();
}

//Don't do anything!
void Dog::doNothing() {
	std::cout << "\nYou and " << name << " stare at each other intently, doing nothing.\n";
	std::cout << "\n\t\t       /^-^\\\n\t\t      / o o \\\n\t\t     /   Y   \\\n\t\t     V \\ v / V\n\t\t       / - \\\n\t\t"
		<< "      /    |\n\t\t(    /     |\n\t\t ===/___) ||\n";
	checkStats();
	checkMood();
}

void Dog::printStats() {
	std::cout << "\nHunger: " << hunger << "\tMood: " << mood << "\tEnergy: " 
		<< energy << "\tStatus: " << getStatus() << std::endl;
}