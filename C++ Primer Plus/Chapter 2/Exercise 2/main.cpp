/**
 * Write a C++ program that asks for a distance in furlongs and converts it to yards.
 * (One furlong is 220 yards or 201.168 meters.)
 */


#include <iostream>


int main()
{
    double furlong{};

    std::cout << "Furlongs: ";
    std::cin >> furlong;

    double yards{furlong * 220};

    std::cout << "Yards:" << yards << std::endl;

    return 0;
}