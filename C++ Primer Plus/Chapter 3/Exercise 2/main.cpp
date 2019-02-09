/**
 * Write a short program that asks for your height in feet and inches and your weight in pounds.
 * (Use three variables to store the information.) Have the program report your body mass index (BMI).
 *
 * To calculate the BMI, first convert your height in feet and inches to your height in inches (1 foot = 12 inches).
 * Then convert your height in inches to your height in meters by multiplying by 0.0254.
 * Then convert your weight in pounds into your mass in kilograms by dividing by 2.2.
 * Finally, compute your BMI by dividing your mass in kilograms by the square of your height in meters.
 *
 * Use symbolic constants to represent the various conversion factors.
 */


#include <iostream>


int main()
{
    const int inches_in_feet{12};
    const double inches_to_meters{0.0254};
    const double  pounds_to_kilograms{2.2};

    int feet{}, inches{}, weight{};

    std::cout << "Enter your height int feet and inches: ";
    std::cin >> feet >> inches;

    std::cout << "Enter your weight in pounds: ";
    std::cin >> weight;

    const int total_inches{feet * inches_in_feet + inches};
    const double height_in_meters{total_inches * inches_to_meters};
    const double weight_in_kilograms{weight / pounds_to_kilograms};
    const double bmi{weight_in_kilograms / (height_in_meters * height_in_meters)};

    std::cout << "Your BMI is " << bmi << std::endl;

    return 0;
}