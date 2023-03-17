#include "helperFunc.h"
#include <algorithm>
#include <chrono>
#include <cmath>
#include <fstream>
#include <istream>
#include <iostream>
#include <string>
#include "method1.h"
#include "method2.h"
#include "method3.h"
#include "method4.h"
#include "method5.h"
#include "method6.h"

void mainMenu() {
	const bool RUNNING = true;

	while (RUNNING) { //Loop endlessly until 'Quit' option is selected
		std::cout << "\tMENU" << std::endl << std::endl;

		std::cout << "1 - Reverse input string" << std::endl;
		std::cout << "0 - Quit program" << std::endl;

		std::cout << "Select an option: ";
		size_t selection;
		std::cin >> selection;

		std::string input;
		switch (selection) {
		case 1:
			std::cout << "Enter string: ";
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //clear cin buffer
			std::getline(std::cin, input);
			std::cout << std::endl;
			methodMenu(input); //pass desired string to method selection helper function
			break;
		case 0:
			return;
		default:
			std::cout << "Invalid selection '" << selection << "'" << std::endl;
			continue;
		}
	}
}

void methodMenu(std::string inp) {
	std::cout << std::endl << "\tString Reversal Menu" << std::endl << std::endl;
	std::cout << "1 - Method 1: for loop that iterates from last string index " << std::endl;
	std::cout << "2 - Method 2: reverse() function from <algorithm>" << std::endl;
	std::cout << "3 - Method 3: use char*'s to reverse input string" << std::endl;
	std::cout << "4 - Method 4: recursive function that utilizes 'substrings'" << std::endl;
	std::cout << "5 - Method 5: use a stack to reverse string" << std::endl;
	std::cout << "6 - Method 6: transform() function from <algorithm>" << std::endl;
	std::cout << "0 - Quit program" << std::endl;

	std::cout << "Select a method to reverse the string: ";
	std::string reversedString;
	size_t selection;

	std::cin >> selection;
	std::cout << "Reverse string: ";
	auto start = std::chrono::steady_clock::now(); //start time evaluation
	switch (selection) {
	case 1:
		reversedString = method1(inp);
		break;
	case 2:
		reversedString  = method2(inp);
		break;
	case 3:
		reversedString = method3(inp);
		break;
	case 4:
		reversedString = method4(inp);
		break;
	case 5:
		reversedString = method5(inp);
		break;
	case 6:
		reversedString = method6(inp);
		break;
	default:
		std::cout << "Invalid selection '" << selection << "'" << std::endl;
		methodMenu(inp); //display methodMenu in the event of invalid input
		return;
	}
	auto end = std::chrono::steady_clock::now(); //end time evaluation
	auto diff = end - start; //calculate time evaluation
	std::cout << reversedString << std::endl;
	std::cout << "Function completed in: " << std::chrono::duration<double, std::milli>(diff).count() << " ms" << std::endl << std::endl;
}
