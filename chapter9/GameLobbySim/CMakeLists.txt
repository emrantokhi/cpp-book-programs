# CMakeList.txt : CMake project for GameLobbySim
cmake_minimum_required (VERSION 3.8)

project ("GameLobbySim")

# Add source to this project's executable.
add_executable (GameLobbySim "GameLobbySim.cpp" "GameLobbySim.h" "Player.h" "Player.cpp" "Lobby.h" "Lobby.cpp")

