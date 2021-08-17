#include <iostream>
#include <algorithm>
#include <vector>

template <typename elementType>
bool isEven(const elementType &number){
    return ((number % 2) == 0); // true, if even
}

int main(void){

    std::vector<int> numsInVec {2017, 0, -1, 42, 10101, 25};

    size_t numZeroes = std::count(numsInVec.cbegin(), numsInVec.cend(), 0);
    std::cout << "Number of instances of '0': " << numZeroes << std::endl;

    size_t numEvens = std::count_if(numsInVec.cbegin(), numsInVec.cend(), isEven<int>);
    std::cout << "Number of even elements: " << numEvens << std::endl;
    std::cout << "Number of odd elements: " << (numsInVec.size() - numEvens) << std::endl; 

    return 0;
}