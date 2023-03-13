/*Various String Reversal methods

*/
#include "method1.h"
#include <string>
#include <iostream>
#include <chrono>


int main(int argc, char* argv[]) {
	std::string test = "Hello!";

	std::string btest = method1(test);


	std::cout << "Initial string: " << test << std::endl;
	std::cout << "Reverse string: " << btest << std::endl;
	std::cout << "Completed in " << std::endl;

	return 0;
}