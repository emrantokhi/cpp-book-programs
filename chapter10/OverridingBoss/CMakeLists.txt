# CMakeList.txt : CMake project for OverridingBoss, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("OverridingBoss")

# Add source to this project's executable.
add_executable (OverridingBoss "OverridingBoss.cpp" "OverridingBoss.h" "Enemy.h" "Enemy.cpp" "Boss.h" "Boss.cpp")

# TODO: Add tests and install targets if needed.
