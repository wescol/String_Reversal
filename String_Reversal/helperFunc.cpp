#include "helperFunc.h"
#include <iostream>
#include <string>
#include "method1.h"
#include "method2.h"
#include "method3.h"
#include "method4.h"

void mainMenu() {
	const bool RUNNING = true;

	while (RUNNING) { //Loop endlessly until 'Quit' option is selected
		std::cout << "\tMENU" << std::endl << std::endl;

		std::cout << "1 - Reverse input string" << std::endl;
		std::cout << "2 - Reverse string from input file" << std::endl;
		std::cout << "0 - Quit program" << std::endl;

		std::cout << "Select an option: ";
		size_t selection;
		std::cin >> selection;

		std::string inputString;
		switch (selection) {
		case 1:
			std::cout << "Enter string: ";
			std::getline(std::cin, inputString);
			std::cout << std::endl;

			std::cout << "Reversed string: " << methodMenu(inputString) << std::endl; //pass desired string to method selection helper function
			break;
		case 2:
			std::cout << "Enter file name: ";

			std::cout << std::endl;
			break;
		case 0:
			return;
		default:
			std::cout << "Invalid selection '" << selection << "'" << std::endl;
			continue;
		}
	}
}

std::string methodMenu(std::string inp) {
	std::cout << "\tString Reversal Menu" << std::endl << std::endl;
	std::cout << "1 - Method 1: for loop that iterates from last string index " << std::endl;
	std::cout << "2 - Method 2: reverse() function from <algorithm>" << std::endl;
	std::cout << "3 - Method 3: use char*'s to reverse input string" << std::endl;
	std::cout << "4 - Method 4: recursive function that utilizes 'substrings'" << std::endl;
	std::cout << "5 - Method 5: " << std::endl;
	std::cout << "6 - Method 6: " << std::endl;
	std::cout << "7 - Method 7: " << std::endl;
	std::cout << "8 - Method 8: " << std::endl;
	std::cout << "0 - Quit program" << std::endl;

	std::cout << "Select a method to reverse the string: ";
	size_t selection;
	std::cin >> selection;
	switch (selection) {
	case 1:
		return method1(inp);
	case 2:
		return method2(inp);
	case 3:
		return method3(inp);
	case 4:
		return method4(inp);
	case 5:
	case 6:
	case 7:
	case 8:
	default:
		std::cout << "Invalid selection '" << selection << "'" << std::endl;
		return methodMenu(inp);
	}
}
