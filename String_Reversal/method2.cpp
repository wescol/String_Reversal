#include "method2.h"
#include <algorithm>

std::string method2(std::string &inp) {
    reverse(inp.begin(), inp.end());
    return inp;
}
