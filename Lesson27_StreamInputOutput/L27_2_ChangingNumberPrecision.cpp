/* LISTING 27.2 Using cout to Display Pi and a Circle’s Area Using Fixed-Point and
Scientific Notations */

#include <iostream>
#include <iomanip>

int main(void){

    const double PI = double (22.0) / 7;
    std::cout << "PI = " << PI << std::endl;

    std::cout << "Setting precision to 7: ";
    std::cout << std::setprecision(7);
    std::cout << "PI = " << PI << std::endl;
    std::cout << std::fixed << "PI = " << PI << std::endl;
    std::cout << std::scientific << "Scientific PI = " << PI << std::endl;

    std::cout << "Setting precision to 10: ";
    std::cout << std::setprecision(10);
    std::cout << "PI = " << PI << std::endl;
    std::cout << std::fixed << "PI = " << PI << std::endl;
    std::cout << std::scientific << "Scientific PI = " << PI << std::endl;

    std::cout << "Enter a radius: ";
    double radius = 0.0;
    std::cin >> radius;
    std::cout << std::fixed << "Area of circle: " << PI*radius*radius << std::endl;

    return 0;
}