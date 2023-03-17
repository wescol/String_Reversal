#include "method5.h"
#include <stack>

std::string method5(std::string &inp) {

    std::string reversedString;
    std::stack<char> charStack;

    for (int i = 0; i < inp.length(); i++) { //populate stack with inp string in order
        charStack.push(inp[i]);
    }

    while (!charStack.empty()) { //push top of stack into reversed string then pop off top of stack
        reversedString += charStack.top();
        charStack.pop();
    }

    return reversedString;
}
