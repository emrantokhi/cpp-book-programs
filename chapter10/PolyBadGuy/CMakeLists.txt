# CMakeList.txt : CMake project for PolyBadGuy, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("PolyBadGuy")

# Add source to this project's executable.
add_executable (PolyBadGuy "PolyBadGuy.cpp" "PolyBadGuy.h" "Enemy.h" "Enemy.cpp" "Boss.h" "Boss.cpp")

# TODO: Add tests and install targets if needed.
