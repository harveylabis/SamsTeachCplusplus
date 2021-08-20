/* LISTING 27.5 Inserting into a char Buffer Without Exceeding Its Bounds 

As far as possible, don’t use char arrays. Use std::string
instead of char* wherever possible.*/

// do not use this style

#include <iostream>
#include <string>

int main(void){

    std::cout << "Enter a line: ";
    char charBuf[10] = {0};
    std::cin.get(charBuf, 10); // you can exceed the charBuf size, something dangerous
    std::cout << "charBuf: " << charBuf << std::endl;

    return 0;
}