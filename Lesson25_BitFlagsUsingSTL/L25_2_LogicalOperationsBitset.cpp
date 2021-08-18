/* LISTING 25.2 Performing Logical Operations Using a Bitset */

#include <iostream>
#include <string>
#include <bitset>


int main(void){

    std::bitset<8> inputBits;
    std::cout << "Enter 8-bit sequence: ";
    std::cin >> inputBits; // store user input in bitset

    std::cout << "Num 1s you supplied: " << inputBits.count() << std::endl;
    std::cout << "Num 0s you supplied: " << inputBits.size() - inputBits.count() << std::endl;

    std::bitset<8> inputFlipped (inputBits); // copy
    inputFlipped.flip(); // toggle the bits - flip values
    std::cout << "Flipped version is: " << inputFlipped << std::endl;

    std::cout << "Result of AND, OR, and XOR between the two: " << std::endl;
    std::cout << inputBits << " & " << inputFlipped << " = " << (inputBits & inputFlipped) << std::endl; // bitwise AND
    std::cout << inputBits << " | " << inputFlipped << " = " << (inputBits | inputFlipped) << std::endl; // bitwise OR
    std::cout << inputBits << " ^ " << inputFlipped << " = " << (inputBits ^ inputFlipped) << std::endl; // bitwise XOR



    return 0;
}