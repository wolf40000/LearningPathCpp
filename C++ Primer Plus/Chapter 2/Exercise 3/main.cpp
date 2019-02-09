/**
 * Write a C++ program that uses three user-defined functions (counting main() as one)
 * and produces the following output:
 *
 *  Three blind mice
 *  Three blind mice
 *  See how they run
 *  See how they run
 *
 * One function, called two times, should produce the first two lines, and the remaining function,
 * also called twice, should produce the remaining output.
 */


#include <iostream>


void ThreeBlindMiceFunction()
{
    std::cout << "Three blind mice" << std::endl;
}

void SeeHowTheyRun()
{
    std::cout << "See how they run" << std::endl;
}

int main()
{
    ThreeBlindMiceFunction();
    ThreeBlindMiceFunction();

    SeeHowTheyRun();
    SeeHowTheyRun();

    return 0;
}