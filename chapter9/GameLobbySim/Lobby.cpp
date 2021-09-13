// Lobby.cpp 
// Lobby object file, Lobby is the list

#include "Lobby.h"

//constructor
Lobby::Lobby() {
	player_head = 0;
}

//destructor
Lobby::~Lobby() {
	delete player_head;
}

void Lobby::AddPlayer() {
	//Get new player name
	std::string name;
	std::cout << "Enter the name of the new player: ";
	std::cin >> name;
	std::cout << std::endl;

	//Find last item
	if (player_head == 0) {
		//no players in lobby
		player_head = new Player(name);
	}
	else {
		Player* holder = player_head;
		//if next is not empty, set holder to the next
		while (holder->getNext() != 0) {
			holder = holder->getNext();
		}
		//when holder's next is empty, set it equal to new player
		holder->setNext(new Player(name));
	}
}

void Lobby::RemovePlayer() {
	if (player_head == 0) {
		std::cout << "There are no players in the lobby to remove!\n\n";
	} 
	else {
		Player* holder = player_head->getNext();
		delete player_head;
		player_head = holder;
	}
}

void Lobby::ClearLobby() {
	if (player_head == 0) {
		std::cout << "There are no players in the lobby to remove!\n\n";
	}
	else {
		delete player_head;
		player_head = 0;
	}
}