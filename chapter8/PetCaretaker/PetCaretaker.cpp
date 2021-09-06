// PetCaretaker.cpp 
// Take care of a lil puppy dog

#include "PetCaretaker.h"

void doActivity(Dog& dog);
void showActivities(Dog& dog);
int checkStats(Dog& dog);
std::string nameDog();
void introduction();

int main()
{
	introduction();
	std::string name = nameDog();
	int loss;

	Dog dog(name);

	while (true) {
		//If the dog runs out of energy, force a sleep (dog passes out)
		if (dog.getEnergy() == 0) {
			dog.sleep();
			std::cout << "\nYour dog passed out from being so tired! It's asleep in the dog house.\n";
			//Check if dog stats hit 0
			loss = checkStats(dog);
			if (loss == 1 || loss == 2 || loss == 3) {
				break;
			}
		}
		else {
			dog.printStats();
			std::cout << std::endl;

			doActivity(dog);

			//Naturally lower stats per turn
			dog.lowerStats();

			//Check if dog stats hit 0
			loss = checkStats(dog);
			if (loss == 1 || loss == 2 || loss == 3) {
				break;
			}
		}
	}

	dog.printStats();

	if (loss == 1) {
		std::cout << "Your dog was rescued from you. Make sure you go feed and play with your dog...\n";
	}
	else if (loss == 2) {
		std::cout << "You let your dog get hungry!!! ): Feed it next time.\n";
		std::cout << "Now your dog ran away to the neighbor's home because they feed it!\n";
	}
	else if (loss == 3) {
		std::cout << "Your dog got really sad, and you weren't giving it any attention, so it ran away to find a better home!\n";
	}
}

void introduction() {
	std::cout << "\t\tWelcome to Pet Caretaker!\n\n";
	std::cout << "You will be taking care of a fluffy dog, that you'll get to name!\n";
	std::cout << "You must keep your dog's hunger, energy, and mood up!\n";
	std::cout << "If your dog's hunger or mood hit's 0, you lose ):\n";
	std::cout << "Make sure to keep your dog's stats up through different activities!\n";
	std::cout << "Enjoy (:\n\n";
}

//name the dog
std::string nameDog() {
	std::string name;
	
	std::cout << "What will you name your dog: ";
	std::cin >> name;

	std::cout << "\nYour dog's name is " << name << "!\n\n";

	return name;
}


//Print out activiites based on mood
void showActivities(Dog& dog) {
	switch (dog.getModifier()) {
		case dog.S_SAD_MOD:
			std::cout << "1. Eat (Hunger+++, Energy+, Mood++)\n";
			std::cout << "2. Sleep (Hunger---, Energy+++, Mood-)\n";
			std::cout << "3. Fetch (Hunger---, Energy---, Mood+++)\n";
			std::cout << "4. Walk (Hunger--, Energy--, Mood++)\n";
			std::cout << "5. Rename dog\n";
			std::cout << "6. Do Nothing\n";
			break;
		case dog.S_MEH_MOD:
			std::cout << "1. Eat (Hunger+++, Energy+, Mood++)\n";
			std::cout << "2. Sleep (Hunger---, Energy+++)\n";
			std::cout << "3. Fetch (Hunger---, Energy---, Mood++)\n";
			std::cout << "4. Walk (Hunger--, Energy--, Mood+)\n";
			std::cout << "5. Rename dog\n";
			std::cout << "6. Do Nothing\n";
			break;
		case dog.S_HAPPY_MOD:
			std::cout << "1. Eat (Hunger+++, Energy+)\n";
			std::cout << "2. Sleep (Hunger---, Energy+++, Mood++)\n";
			std::cout << "3. Fetch (Hunger---, Energy---, Mood+)\n";
			std::cout << "4. Walk (Hunger--, Energy--, Mood+)\n";
			std::cout << "5. Rename dog\n";
			std::cout << "6. Do Nothing\n";
			break;
		default:
			std::cout << "Error.";
			break;
	}
}

void doActivity(Dog& dog) {
	int activity;

	showActivities(dog);

	std::cout << "\nWhat would you like to do with your dog: ";
	std::cin >> activity;

	switch (activity) {
		case 1: 
			dog.eat();
			break;
		case 2:
			dog.sleep();
			break;
		case 3:
			dog.fetch();
			break;
		case 4:
			dog.walk();
			break;
		case 5:
			dog.setName(nameDog());
			break;
		case 6:
			dog.doNothing();
			break;
		default:
			std::cout << "Invalid option!" << std::endl;
			break;
	}
}

int checkStats(Dog& dog) {
	//1 means neglect
	if (dog.getHunger() == 0 && dog.getMood() == 0) {
		return 1;
	}
	//2 status means loss by hunger
	else if(dog.getHunger() == 0) {
		return 2;
	}
	//3 status means loss by mood
	else if (dog.getMood() == 0) {
		return 3;
	}
	return 0;
}