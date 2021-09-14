﻿// Blackjack.cpp
// Playing a simple game of blackjack with players between 1 and 7

#include "Blackjack.h"

void introduction();
int numPlayers();
std::vector<Player*>* setPlayers();
bool askPlayAgain();
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
	bool game = true;
	//print the board
	for (int i = 0; i < players->size(); i++) {
		//print player score
		std::cout << (*players)[i]->getName() << ":\n";
		(*players)[i]->printHand();
		std::cout << "Score: " << (*players)[i]->getScore() << "\n";
		
		std::cout << house->getName() << ":\n";
		house->printHand();
		std::cout << "\n";
	}
	game = false;
}

void introduction() {
	std::cout << "\t\tWelcome to Blackjack!\n";
	std::cout << "The rules are simple, keep your score 21 or under and have a higher score than the house!\n";
	std::cout << "Player amount: 1-7\n\n";
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
	while (players < 1 || players > 7) {
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