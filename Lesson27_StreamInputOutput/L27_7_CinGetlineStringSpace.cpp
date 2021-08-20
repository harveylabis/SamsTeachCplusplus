/* LISTING 27.7 Reading a Complete Line Input by User Using getline() and cin */

// using getline and cin will include the the space ' ' 

#include <iostream>
#include <string>

int main(void){

    std::cout << "Enter your name: ";
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Hi " << name << std::endl;




    return 0;
}

