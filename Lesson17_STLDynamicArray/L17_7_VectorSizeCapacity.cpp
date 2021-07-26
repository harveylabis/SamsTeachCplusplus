#include <iostream>
#include <vector>

int main(void){

    std::vector<int> integers(5); // 5 elements with default value as 0
    
    std::cout << "Vector integers was instantiated with" << std::endl;
    std::cout << "Size: " << integers.size();
    std::cout << ", Capacity: " << integers.capacity() << std::endl;

    // Inserting a 6th element in to the vector
    integers.push_back(666);

    std::cout << "Vector integers was instantiated with" << std::endl;
    std::cout << "Size: " << integers.size();
    std::cout << ", Capacity: " << integers.capacity() << std::endl; 

    // Inserting another element
    integers.push_back(777);

    std::cout << "Vector integers was instantiated with" << std::endl;
    std::cout << "Size: " << integers.size();
    std::cout << ", Capacity: " << integers.capacity();

    return 0;
}