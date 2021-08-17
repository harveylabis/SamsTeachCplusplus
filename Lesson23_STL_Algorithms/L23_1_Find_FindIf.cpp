#include <iostream>
#include <algorithm>
#include <vector>

int main(void){

    std::vector<int> numsInVec {2017, 0, -1, 42, 10101, 25};

    std::cout << "Enter number to find in collection: ";
    int numToFind = 0;
    std::cin >> numToFind;

    // use find to find a certain element (==s)
    auto element = std::find(numsInVec.cbegin(), numsInVec.cend(), numToFind);
    if (element != numsInVec.cend()){
        std::cout << "Value " << *element << " found!" << std::endl;
    } else {
        std::cout << "No element contains value " << numToFind << std::endl;
    }

    // use find_if if a custom condition (unary predicate) is necessary to supply
    auto evenNum = find_if(numsInVec.cbegin(), numsInVec.cend(), 
                        [] (const int &num) {return ((num % 2) == 0);});

    if (evenNum != numsInVec.cend()){
        std::cout << "Even number '" << *evenNum << "' found at position [";
        std::cout << std::distance(numsInVec.cbegin(), evenNum) << "]" << std::endl;
    }

    return 0;
}