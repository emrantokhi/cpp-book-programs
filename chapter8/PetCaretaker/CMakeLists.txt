# CMakeList.txt : CMake project for PetCaretaker, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("PetCaretaker")

# Add source to this project's executable.
add_executable (PetCaretaker "PetCaretaker.cpp" "PetCaretaker.h" "Pets/Dog.h" "Pets/Dog.cpp")

# TODO: Add tests and install targets if needed.
