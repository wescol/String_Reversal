/*Various String Reversal methods


Only headers included in the C++ Standard Library have been used:
https://en.cppreference.com/w/cpp/header
*/
#include <iostream>
#include "helperFunc.h"
#include "method1.h"

int main(int argc, char* argv[]) {
	if (argc == 1) { //run program without paramaters
		mainMenu();
	} else if (argc == 2) { //use 2nd parameter as input string
		methodMenu(argv[1]);
	} else if (argc > 2) {
		std::cout << "Unexepected number of arguments; argument count: " << argc << std::endl;
		return 1;
	}
	return 0;
}