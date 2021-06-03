// DieRoller.cpp 
#include "DieRoller.h"

int main()
{
	//a seed is a starting place for computer to start when looking at random numbers
	srand(static_cast<unsigned int>(time(0))); //static_cast casts time(0) to an unsigned int

	int randomNumber = rand();

	int die = (randomNumber % 6) + 1; //randomNumber % 6 returns a # from 0-5 

	std::cout << "You rolled a fair die and got a " << die << "!" << std::endl;

	std::cout << "Rand max: " << RAND_MAX << std::endl;

	std::cout << "Time: " << time(0) << std::endl;

	return 0;
}
