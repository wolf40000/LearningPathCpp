/**
 * Write a short program that asks for your height in integer inches and then converts
 * your height to feet and inches. Have the program use the underscore character to
 * indicate where to type the response. Also use a const symbolic constant to represent the conversion factor.
 */


#include <iostream>


int main()
{
    const int inches_in_feet{12};
    int height_inches{};

    std::cout << "Enter your height in integer inches: ";
    std::cin >> height_inches;

    const int inches{height_inches % inches_in_feet};
    const int feet{height_inches / inches_in_feet};

    std::cout << "Your height is " << feet << " feet and " << inches << " inches." << std::endl;

    return 0;
}