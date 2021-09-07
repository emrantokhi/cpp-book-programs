# CMakeList.txt : CMake project for CritterFarm
cmake_minimum_required (VERSION 3.8)

project ("CritterFarm")

# Add source to this project's executable.
add_executable (CritterFarm "CritterFarm.cpp" "CritterFarm.h" "Animals/Critter.h" "Animals/Critter.cpp" "Farm.h" "Farm.cpp")

