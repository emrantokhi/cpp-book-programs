# CMakeList.txt : CMake project for AbstractCreature, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("AbstractCreature")

# Add source to this project's executable.
add_executable (AbstractCreature "AbstractCreature.cpp" "AbstractCreature.h" "Creature.h" "Creature.cpp" "Orc.h" "Orc.cpp")

# TODO: Add tests and install targets if needed.
