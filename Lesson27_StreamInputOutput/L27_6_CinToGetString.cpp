/* LISTING 27.6 Inserting Text into a std::string Using cin */


// cin uses ' ' as the delimiter, it does not store the 
// characters after using space ' '


#include <iostream>
#include <string>

int main(void){

    std::cout << "Enter your name: ";
    std::string name;
    std::cin >> name;
    std::cout << "Hi " << name << std::endl;


    return 0;
}