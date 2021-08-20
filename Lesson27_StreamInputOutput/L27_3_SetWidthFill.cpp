/* LISTING 27.3 Set the Width of a Field via setw() and the Fill Characters Using
setfill() Manipulators */

#include <iostream>
#include <iomanip>

int main(void){

    std::cout << "Hey - default!" << std::endl;
    std::cout << std::setw(35); // set field with to 35 columns  
    std::cout << "Hey - right aligned!" << std::endl;

    std::cout << std::setw(35) << std::setfill('*');
    std::cout << "Hey - right aligned!" << std::endl;
    std::cout << "Hey - back to default!" << std::endl;

    return 0;
}