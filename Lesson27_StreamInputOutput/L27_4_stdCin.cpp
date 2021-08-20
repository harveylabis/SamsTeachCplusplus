/* LISTING 27.4 Using cin to Read Input into an int, a Floating-Point Number Using
Scientific Notation into a double, and Three Letters into a char */

#include <iostream>

int main(void){

    std::cout << "Enter an integer: ";
    int inputNum = 0;
    std::cin >> inputNum;

    std::cout << "Enter the value of Pi: ";
    double Pi = 0.0;
    std::cin >> Pi;

    std::cout << "Enter three characters separated by spaces: ";
    char char1 = '\0', char2 = '\0', char3 = '\0';
    std::cin >> char1 >> char2 >> char3;

    std::cout << "The recorded variable values are: " << std::endl;
    std::cout << "inputNum: " << inputNum << std::endl;
    std::cout << "Pi: " << Pi << std::endl;
    std::cout << "The three characters: " << char1 << char2 << char3 << std::endl;


    return 0;
}