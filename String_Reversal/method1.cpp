/*
*/
#include "method1.h"
#include <string>

std::string method1(std::string &inpStr)
{
	std::string reversedString = ""; //temporary string to hold reversed string
	for (int i = (inpStr.size() - 1); i >= 0; --i) { //cycle through input string backwards
		reversedString += inpStr.at(i);
	}
	return reversedString;
}
