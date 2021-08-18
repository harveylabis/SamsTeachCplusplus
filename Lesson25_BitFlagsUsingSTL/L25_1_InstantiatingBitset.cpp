/* LISTING 25.1 Instantiating a std::bitset */

#include <iostream>
#include <bitset>
#include <string>

int main(void){

    std::bitset<4> fourBitset; // 4 bits initialized to 0000
    std::cout << "Initial contents of fourbits: " << fourBitset << std::endl;

    std::bitset<5> fiveBits("10101"); // 5 bits 10101
    std::cout << "Initial contents of fiveBits: " << fiveBits << std::endl;

    std::bitset<6> sixBits (0b100001); // C++14 binary literal
    std::cout << "Initial contents of sixBits: " << sixBits << std::endl; 

    std::bitset<8> eightBits (255); // 8 bits initialized to long int 255
    std::cout << "Initial contents of eightBits: " << eightBits << std::endl;

    // instantiate one bitset to a copy of another
    std::bitset<8> eightBitsCopy (eightBits);

    return 0;
}