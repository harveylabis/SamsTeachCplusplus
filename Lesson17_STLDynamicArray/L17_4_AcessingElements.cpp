#include <iostream>
#include <vector>

int main(void){
    std::vector <int> integers {50, 1 , 987, 1001};

    for(size_t index = 0; index < integers.size(); index++){
        std::cout << "Element[" << index << "] = "; 
        std::cout << integers[index] << std::endl; // use integers.at(index) 
    }

    integers[2] = 2011; // change the value of 3rd element
    std::cout << "After replacement: " << std::endl;
    std::cout << "Elements[2] = " << integers[2] << std::endl;

    // when using integers[index], you should make sure that index in in range of integers capacity
    // a better way is to use integers.at(index)
    
}