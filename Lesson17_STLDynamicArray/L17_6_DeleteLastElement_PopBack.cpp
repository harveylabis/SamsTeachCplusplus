#include <iostream>
#include <vector>

template <typename T> // include datatype to DisplayVector -- to cater all data types to vector - avoid redefinition

void DisplayVector(std::vector<T> &inVec){
    for (auto element = inVec.cbegin(); element != inVec.cend(); element++){
        std::cout << *element << ' ';
    }
    std::cout << std::endl;
}

int main(void){

    std::vector<int> integers;

    integers.push_back(50);
    integers.push_back(1);
    integers.push_back(987);
    integers.push_back(1001);

    std::cout << "Vector contains " << integers.size() << " elements: ";
    DisplayVector(integers);

    // Erase element at the end
    integers.pop_back();

    std::cout << "After a call to pop_back()" << std::endl;
    std::cout << "Vector contains " << integers.size() << " elements: ";
    DisplayVector(integers);


    return 0;
}