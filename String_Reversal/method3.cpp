#include "method3.h"

std::string method3(std::string &inp)
{
    char* start = &inp[0]; //pointer at start of inp string
    char* end = &inp[inp.length() - 1]; //pointer at end of inp string

    while (start < end) { //swap chars within string using pointers
        char temp = *start; //set temp char to hold 'start' char during char swap
        *start = *end;
        *end = temp;
        start++; //move pointer 'position' within string
        end--;
    }

    return inp;
}