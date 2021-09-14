# CMakeList.txt : CMake project for SimpleBossExtended, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("SimpleBossExtended")

# Add source to this project's executable.
add_executable (SimpleBossExtended "SimpleBossExtended.cpp" "SimpleBossExtended.h" "Enemy.h" "Enemy.cpp" "Boss.h" "Boss.cpp")

# TODO: Add tests and install targets if needed.
