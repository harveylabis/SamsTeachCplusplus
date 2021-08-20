/* LISTING 27.1 Displaying an Integer in Decimal, Octal, and Hexadecimal Formats Using
cout and <iomanip> Flags */

#include <iostream>
#include <iomanip>

int main(void){

    std::cout << "Enter an integer: ";
    int input = 0;
    std::cin >> input;

    std::cout << "Integer in octal: " << std::oct << input << std::endl;
    std::cout << "Integer in hexadecimal: " << std::hex << input << std::endl;

    std::cout << "Integer in hex using base notation: ";
    std::cout << std::setiosflags(std::ios_base::hex|std::ios_base::showbase|std::ios_base::uppercase);
    std::cout << input << std::endl;

    std::cout << "Integer after resetting I/O flags: ";
    std::cout << std::resetiosflags(std::ios_base::hex|std::ios_base::showbase|std::ios_base::uppercase);
    std::cout << input << std::endl;


    return 0;
}