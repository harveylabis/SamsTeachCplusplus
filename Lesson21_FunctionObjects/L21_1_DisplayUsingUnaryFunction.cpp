#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

template<typename elementType>
struct DisplayElement{
    void operator()(const elementType &element) const { // why there is const
        std::cout << element    << ' ';
    }
};

int main(void){

    std::vector<int> numsInVec{0, 1, 2, 3, 1, -1, -9, 0, -999};
    std::cout << "Vector of integers contains: " << std::endl;
    std::for_each (numsInVec.cbegin(), numsInVec.cend(), DisplayElement<int>());
    std::cout << std::endl;

    std::list<char> charInList {'a', 'z', 'k', 'd'};
    std::cout << "List of characters contains: " << std::endl;
    std::for_each(charInList.cbegin(), charInList.cend(), DisplayElement<char>());
    
    return 0;
}