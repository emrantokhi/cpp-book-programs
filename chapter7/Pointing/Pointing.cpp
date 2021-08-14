// Pointing.cpp 
// Demonstrates the use of pointers

#include "Pointing.h"

int main()
{
	int* pPointer; //declared a pointer
	int* pScore = 0; //initialized and declared a pointer
	int score = 500;

	pScore = &score; //set pointer to score's address

	std::cout << "The address of score (&score): " << &score << std::endl;
	std::cout << "pScore the pointer: " << pScore << std::endl;
	std::cout << "The Score variable: " << score << std::endl;
	std::cout << "pScore dereferenced (*pScore): " << *pScore << std::endl;


	std::cout << "\nAdding 500 to score variable: " << std::endl;
	score += 500;
	std::cout << "Score variable: " << score << std::endl;
	std::cout << "pScore dereferenced (*pScore): " << *pScore << std::endl;

	std::cout << "\nAdding 500 to pScore dereferenced (*pScore): " << (*pScore += 500) << std::endl;
	std::cout << "Score variable: " << score << std::endl;

	std::cout << "\nAssigning a new address to pScore (not dereferenced; pScore)" << std::endl;
	int newScore = 1000;
	pScore = &newScore;
	std::cout << "Address of newScore is (&newScore): " << &newScore << std::endl;
	std::cout << "Address that pScore is holding (pScore): " << pScore << std::endl;
	std::cout << "Value of newScore: " << newScore << std::endl;
	std::cout << "Value that pScore is pointing to (*pScore): " << *pScore << std::endl;

	std::cout << "\nAssigning a string pointer, str to pStr" << std::endl;
	std::string str = "food";
	std::string* pStr = &str;

	std::cout << "Value of str is: " << str << std::endl;
	std::cout << "Value pointed to by pStr (*pStr): " << *pStr << std::endl;
	std::cout << "(*pStr).size() is: " << (*pStr).size() << std::endl;
	std::cout << "pStr->size() is: " << pStr->size() << std::endl;

	//ONLY USE -> on pointer variables like pStr, short hand for (*pStr)
	//so it's short hand the value that the pointer is pointing to

	return 0;
}
