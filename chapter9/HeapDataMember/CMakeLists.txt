# CMakeList.txt : CMake project for HeapDataMember, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("HeapDataMember")

# Add source to this project's executable.
add_executable (HeapDataMember "HeapDataMember.cpp" "HeapDataMember.h" "Critter.h" "Critter.cpp")

# TODO: Add tests and install targets if needed.
