/**
 * Write a program that asks the user to enter his or her age.
 * The program then should display the age in months:
 *
 *  Enter your age: 29
 *
 *  Your age in months is 348.
 *
 */


#include <iostream>


int main()
{
    int age{};

    std::cout << "Enter your age: ";
    std::cin >> age;

    int months{age * 12};

    std::cout << "Your age in months is " << months << std::endl;

    return 0;
}