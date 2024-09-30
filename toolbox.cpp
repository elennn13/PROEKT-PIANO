#include "toolbox.hpp"
#include <iostream>
#include <Windows.h>



void placeSym(unsigned x, unsigned y, char sym) {
	static HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coords{ x, y };
	SetConsoleCursorPosition(handle, coords);
	std::cout << sym;
}
