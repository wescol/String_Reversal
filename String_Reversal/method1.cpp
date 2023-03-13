/*
*/
#include "method1.h"

std::string method1(std::string &inpStr)
{
	std::string temp = "";
	for (int i = (inpStr.size() - 1); i >= 0; --i) {
		temp += inpStr.at(i);
	}
	return temp;
}
