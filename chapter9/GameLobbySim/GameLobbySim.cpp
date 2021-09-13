// GameLobbySim.cpp 
// Simulates a video game lobby

#include "GameLobbySim.h"

//friend functions
std::ostream& operator<<(std::ostream& os, const Player& player);
std::ostream& operator<<(std::ostream& os, const Lobby& lobby);
//function prototypes
void introduction();
int getChoice();
void printMenu();
void optionSelect(Lobby& lobby, int choice);

int main()
{
	introduction();
	
	Lobby lobby;

	int choice = 0;
	while (choice != 9) {
		std::cout << lobby;
		printMenu();
		choice = getChoice();
		optionSelect(lobby, choice);
	}
	return 0;
}

void introduction() {
	std::cout << "\t\tWelcome to Game Lobby Simulator!\n";
	std::cout << "In this game, you will control a lobby of players.\n";
	std::cout << "You can add players, remove them, or clear the lobby!\n";
	std::cout << "This game was used to demonstrate Dynamic Memory and Heaps, enjoy!\n\n";
}

int getChoice() {
	int choice;
	std::cout << "Enter what choice you would like to do: ";
	std::cin >> choice;
	std::cout << std::endl;
	return choice;
}

void printMenu() {
	std::cout << "Options:\n";
	std::cout << "1. Add a player to the lobby.\n";
	std::cout << "2. Remove the first player from the lobby.\n";
	std::cout << "3. Clear the lobby.\n";
	std::cout << "9. Exit the simulation.\n\n";
}

void optionSelect(Lobby& lobby, int choice) {
	switch (choice) {
		case 1:
			lobby.AddPlayer();
			break;
		case 2:
			lobby.RemovePlayer();
			break;
		case 3:
			lobby.ClearLobby();
			break;
		case 9:
			std::cout << "Clearing everyone from the lobby!\nHave a great day!\n\n";
			break;
		default:
			std::cout << "That is an invalid choice.\n\n";
			break;
	}
}

std::ostream& operator<<(std::ostream& os, const Player& player)
{
	os << player.p_name;
	return os;
}

std::ostream& operator<<(std::ostream& os, const Lobby& lobby) {
	os << "Players in the lobby:\n";
	if (lobby.player_head != 0) {
		Player* holder = lobby.player_head;
		while (holder != 0) {
			os << holder->getName() << "\n";
			holder = holder->getNext();
		}
	}
	os << "\n";
	return os;
}