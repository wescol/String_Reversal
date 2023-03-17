#include "method2.h"
#include <algorithm>

std::string method2(std::string &inp) {
    reverse(inp.begin(), inp.end()); //method of reversing string via <algorithm> using string iterators
    return inp;
}