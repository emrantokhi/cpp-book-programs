// Blackjack.cpp
// Playing a simple game of blackjack with players between 1 and 7

#include "Blackjack.h"

void introduction();
int numPlayers();
std::vector<Player*>* setPlayers();
bool askPlayAgain();
bool askDraw();
void printHouse(House* house);
void printBoard(Player* player, House* house);
void printWinners(std::vector<Player*>* players, House* house);
void playBlackJack(std::vector<Player*>* players, House* house);

int main()
{
	//set seed in main so that it does not keep on calling and resetting seed
	srand(static_cast<unsigned int>(time(0))); //set seed before player creation

	introduction();

	bool playAgain = true;
	
	while (playAgain) {
		std::vector<Player*>* players = setPlayers();
		House* house = new House();
		playBlackJack(players, house);
		delete players;
		delete house;
		players = 0;
		house = 0;
		playAgain = askPlayAgain();
	}

	return 0;
}

void playBlackJack(std::vector<Player*>* players, House* house) {
	bool draw = false;
	//run through all players before exposing house
	for (int i = 0; i < players->size(); i++) {
		printBoard((*players)[i], house);

		draw = askDraw();
		while (draw) {
			(*players)[i]->draw();
			printBoard((*players)[i], house);
			if ((*players)[i]->getScore() == 21) {
				(*players)[i]->setStatus("Win");
				std::cout << "\nAwesome! You just got 21!\n\n";
				break;
			}
			else if ((*players)[i]->getScore() > 21) {
				(*players)[i]->setStatus("Bust");
				std::cout << "\n" << (*players)[i]->getName() << ": Bust! Try again next time!\n\n";
				break;
			}
			draw = askDraw();
		}
	}
	//all players have been ran through, expose house
	house->revealHand();
	//if house's score is less than or equal to 16, keep drawing
	while (house->getScore() <= 16) {
		house->draw();
		printHouse(house);
	}
	//set status to check if bust or win
	if (house->getScore() == 21) {
		house->setStatus("Win");
	}
	else if (house->getScore() > 21) {
		house->setStatus("Bust");
	}

	printHouse(house);

	printWinners(players, house);
}

//print house only after reveal
void printHouse(House* house) {
	//print house
	std::cout << house->getName() << ":\n";
	house->printHand();
	std::cout << "Score: " << house->getScore() << "\n\n";
}

void printWinners(std::vector<Player*>* players, House* house) {
	bool oneWinner = false;
	std::cout << "\nWinners:\n";
	for (int i = 0; i < players->size(); i++) {
		//if the player is bust or has the same score as house, continue
		if (((*players)[i]->getStatus() == "Bust") || ((*players)[i]->getScore() == house->getScore())) {
			continue;
		}
		//if players score is > house score or if house busted and player did not
		else if(((*players)[i]->getScore() > house->getScore()) || 
			((house->getStatus() == "Bust") && (*players)[i]->getStatus() != "Bust")) {
			std::cout << (*players)[i]->getName() << "\n";
			oneWinner = true;
		}
	}

	if (!oneWinner) {
		std::cout << "House! Everyone lost...\n";
	}
}

void printBoard(Player* player, House * house) {
	//print player score
	std::cout << "--------------------------------\n";
	std::cout << player->getName() << ":\n";
	player->printHand();
	std::cout << "Score: " << player->getScore() << "\n";
	//print house
	std::cout << "\n" << house->getName() << ":\n";
	house->printHand();
	std::cout << "\n";
	std::cout << "--------------------------------\n";
}

//Ask the player if they want to draw
bool askDraw() {
	char choice = 'f';
	while (choice != 'y' && choice != 'n') {
		std::cout << "\nWould you like a hit (y/n): ";
		std::cin >> choice;
	}
	std::cout << "\n";
	if (choice == 'y') {
		return true;
	}
	else {
		return false;
	}
}

void introduction() {
	std::cout << "\t\tWelcome to Blackjack!\n";
	std::cout << "The rules are simple, keep your score 21 or under and have a higher score than the house!\n";
	std::cout << "Player amount: 1-7\n\n";
}

//Ask the player if they wish to play again
bool askPlayAgain() {
	char choice = 'f';
	while (choice != 'y' && choice != 'n') {
		std::cout << "\nWould you like to play again (y/n): ";
		std::cin >> choice;
	}
	std::cout << "\n";
	if (choice == 'y') {
		return true;
	}
	else {
		return false;
	}
}

//get number of players
int numPlayers() {
	int players = 0;
	while (players < 1 || players > 7) {
		std::cout << "How many players are there: ";
		std::cin >> players;
	}
	std::cout << "\n";
	return players;
}

//Sets the number of players in a vector that exists on the heap
std::vector<Player*>* setPlayers() {
	int num_players = numPlayers();
	//new returns a pointer, vector of Player pointers, as players will be declared on heap
	std::vector<Player*>* players = new std::vector<Player*>; //write it to the heap

	for (int i = 0; i < num_players; i++) {
		std::string name;
		std::cout << "What is the player " << i << "'s name: ";
		std::cin >> name; //get name
		players->push_back(new Player(name)); //push new player onto vector
	}

	std::cout << "\n";
	return players;
}