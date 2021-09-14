// Blackjack.cpp
// Playing a simple game of blackjack with players between 1 and 7

#include "Blackjack.h"

void introduction();
int numPlayers();
std::vector<Player*>* setPlayers();
bool askPlayAgain();
void playBlackJack(std::vector<Player*>* players);

int main()
{
	introduction();
	bool playAgain = true;
	while (playAgain) {
		std::vector<Player*>* players = setPlayers();
		playBlackJack(players);
		delete players;
		playAgain = askPlayAgain();
	}
	return 0;
}

void playBlackJack(std::vector<Player*>* players) {
	bool game = true;
	while (game) {
		for (int i = 0; i < players->size(); i++) {
			(*players)[i]->printHand();
			std::cout << "Score: " << (*players)[i]->getScore();
		}
		game = false;
	}
}

void introduction() {
	std::cout << "\t\tWelcome to Blackjack!\n";
	std::cout << "The rules are simple, keep your score 21 or under and have a higher score than the house!\n";
}

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
	while (players < 1 && players > 7) {
		std::cout << "How many players are there: ";
		std::cin >> players;
	}
	std::cout << "\n";
	return players;
}

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