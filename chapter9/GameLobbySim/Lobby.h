// Lobby.h
// Header file for Lobby object

#pragma once
#include <iostream>
#include <string>
#include "Player.h"

class Lobby {
	friend std::ostream& operator<<(std::ostream& os, const Lobby& lobby);
private:
	Player* player_head; //first player in lobby
public: 
	Lobby(); //constructor
	~Lobby(); //destructor
	
	void AddPlayer();
	void RemovePlayer();
	void ClearLobby();
};