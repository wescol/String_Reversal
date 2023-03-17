#include "method6.h"
#include <algorithm>

std::string method6(std::string &inp) {
    std::string reversedString;
    reversedString.resize(inp.size());
    std::transform(inp.rbegin(), inp.rend(), reversedString.begin(), [](char c) {return c;}); //reverse string using transform from <algorithm> and a lambda function

    return reversedString;
}
