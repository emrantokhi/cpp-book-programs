# CMakeList.txt : CMake project for SimpleBoss, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("SimpleBoss")

# Add source to this project's executable.
add_executable (SimpleBoss "SimpleBoss.cpp" "SimpleBoss.h" "Enemy.h" "Enemy.cpp" "Boss.cpp" "Boss.h")

# TODO: Add tests and install targets if needed.
