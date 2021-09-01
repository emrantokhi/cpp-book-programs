# CMakeList.txt : CMake project for SimpleCritter
cmake_minimum_required (VERSION 3.8)

project ("SimpleCritter")

# Add source to this project's executable.
add_executable (SimpleCritter "SimpleCritter.cpp" "SimpleCritter.h" "Critter.cpp" "Critter.h")
