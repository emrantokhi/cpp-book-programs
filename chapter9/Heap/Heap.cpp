// Heap.cpp 
// Demonstrates what to and what not to do with the heap
// Demonstrates dynamically allocating memory

#include "Heap.h"

//function prototypes
int* intOnHeap(); //returns an int on the heap
//Memory leak functions
void leak1();
void leak2();

int main()
{
	int* pHeap = new int;
	*pHeap = 10;
	std::cout << "*pHeap (dereferenced): " << *pHeap << "\n\n";

	int* pHeap2 = intOnHeap();
	std::cout << "*pHeap2: " << *pHeap2 << "\n\n";

	std::cout << "Freeing memory pointed to by pHeap\n\n";
	delete pHeap;

	std::cout << "Freeing memory pointed to by pHeap2\n\n";
	delete pHeap2;

	//this gets rid of dangling pointers, delete only frees memory, not pointer;
	pHeap = 0;
	pHeap2 = 0;

	return 0;
}

int* intOnHeap() {
	int* pTemp = new int(20);
	return pTemp;
}

void leak1() {
	int* drip1 = new int(30); //is a leak because it just stays on the heap 
}

void leak2() {
	int* drip2 = new int(50);
	drip2 = new int(100);
	delete drip2;
	//memory leak because the first drip2 is still on heap?
}