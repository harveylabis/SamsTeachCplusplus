/* LISTING 25.4 Using the vector<bool> */

#include <vector>
#include <iostream>

int main(void){

    std::vector<bool> boolFlags(3);
    boolFlags[0] = true;
    boolFlags[1] = true;
    boolFlags[2] = false;

    boolFlags.push_back(true); // we can add more flag

    std::cout << "The contents of the vector are: ";
    for (size_t index = 0; index < boolFlags.size(); index++){
        std::cout << boolFlags[index] << ' ';
    }
    std::cout << std::endl;

    boolFlags.flip();
    std::cout << "The contents of the vector are: ";
    for (size_t index = 0; index < boolFlags.size(); index++){
        std::cout << boolFlags[index] << ' ';
    }
    std::cout << std::endl;




    return 0;
}