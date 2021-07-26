#include <iostream>
#include <vector>

int main(void){

    std::vector<int> integers{50, 1, 987, 1001};

    std::vector<int>::const_iterator element = integers.cbegin();
    // auto element = integers.cbegin(); // auto type deduction

    while (element != integers.cend()){
        size_t index = distance(integers.cbegin(), element);

        std::cout << "Element at position ";
        std::cout << index << " is: " << *element << std::endl;

        // move to the next element
        element++;

    }
}