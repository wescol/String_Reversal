#include "method4.h"

std::string method4(std::string inp)
{
    if (inp.length() == 0) {
        return inp;
    }
    else {
        return method4(inp.substr(1)) + inp[0]; //rebuild inp string in reverse recursively using 'substrings' of the original string
    }
}
