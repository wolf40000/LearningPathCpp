/**
 * Write a program that has main() call a user-defined function that takes a distance
 * in light years as an argument and then returns the distance in astronomical units.
 *
 * The program should request the light year value as input from the user and display
 * the result, as shown in the following code:
 *
 *  Enter the number of light years: 4.2
 *  4.2 light years = 265608 astronomical units.
 *
 * An astronomical unit is the average distance from the earth to the sun (about 150,000,000 km or 93,000,000 miles),
 * and a light year is the distance light travels in a year (about 10 trillion kilometers or 6 trillion miles).
 * (The nearest star after the sun is about 4.2 light years away.)
 *
 * Use type double and this conversion factor:
 *
 *  1 light year = 63240 astronomical units
 */


#include <iostream>


double toAstronomicalUnits(double light_years)
{
    double astronomical_units{light_years * 63'240};

    return astronomical_units;
}

int main()
{
    double light_years{};

    std::cout << "Enter the number of light years: ";
    std::cin >> light_years;

    double astronomical_units{toAstronomicalUnits(light_years)};

    std::cout << light_years << " light years = " << astronomical_units << " astronomical units." << std::endl;

    return 0;
}