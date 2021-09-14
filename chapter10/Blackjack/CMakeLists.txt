# CMakeList.txt : CMake project for Blackjack, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Blackjack")

# Add source to this project's executable.
add_executable (Blackjack "Blackjack.cpp" "Blackjack.h" "Cards/Card.h" "Cards/Card.cpp" "Cards/Hand.h" "Cards/Hand.cpp" "Players/Player.h" "Players/Player.cpp" "Players/House.h" "Players/House.cpp")

# TODO: Add tests and install targets if needed.
