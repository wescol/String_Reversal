/*Various String Reversal methods


Only headers included in the C++ Standard Library have been used:
https://en.cppreference.com/w/cpp/header
*/
#include <algorithm>
#include <chrono>
#include <cmath>
#include <iostream>
#include "helperFunc.h"
#include "method1.h"

int main(int argc, char* argv[]) {
	if (argc == 1) { //Regular 
		mainMenu();
	}
	else if (argc == 2) {

	}
	else if (argc > 2) {
		std::cout << "Unexepected number of arguments; argument count: " << argc << std::endl;
		return 1;
	}

	std::cout << "Initial string: " << 42 << std::endl;
	std::cout << "Reverse string: " << 42 << std::endl;
	std::cout << "Completed in " << std::endl;

	return 0;
}