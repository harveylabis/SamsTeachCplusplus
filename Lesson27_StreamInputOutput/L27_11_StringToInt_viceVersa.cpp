/* LISTING 27.11 Converting an Integer Value into a String Representation and Vice Versa
Using std::stringstream */

#include <iostream>
#include <sstream>

int main(void){

    std::cout << "Enter an integer: ";
    int input = 0;
    std::cin >> input;

    std::stringstream converterStream;
    converterStream << input; 
    std::string inputAsStr;
    converterStream >> inputAsStr;

    std::cout << "Integer input = " << input << std::endl;
    std::cout << "String gained from integer = " << inputAsStr << std::endl;

    std::stringstream anotherStream;
    anotherStream << inputAsStr;
    int Copy = 0;
    anotherStream >> Copy;

    std::cout << "Integer gained from string, Copy = " << Copy << std::endl;

    return 0;
}