/*
*/
#include "method1.h"
#include <string>

std::string method1(std::string &inpStr)
{
	std::string reversedString = "";
	for (int i = (inpStr.size() - 1); i >= 0; --i) {
		reversedString += inpStr.at(i);
	}
	return reversedString;
}
