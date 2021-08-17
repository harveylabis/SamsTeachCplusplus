#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename T>
void DisplayContents (const T &container){
    for (auto element = container.cbegin();
            element != container.cend();
            element++){
                std::cout << *element << ' ';
            }
    std::cout << std::endl;
}

int main(void){

    std::vector<int> numsInVec {2017, 0, -1, 42, 10101, 25, 9, 9, 9};
    std::list<int> numInList {-1, 42, 10101};

    std::cout << "The contents of the sample vector are: " << std::endl;
    DisplayContents(numsInVec);

    std::cout << "The contents of the sample list are: " << std::endl;
    DisplayContents(numInList);

    std::cout << "Search for the contents of list in vector: " << std::endl;
    auto range = std::search(numsInVec.cbegin(), numsInVec.cend(),
                        numInList.cbegin(), numInList.cend());
    
    // Check if search found a match
    if (range != numsInVec.cend()){
        std::cout << "Sequence in list found in vector at position: ";
        std::cout << std::distance(numsInVec.cbegin(), range) << std::endl;
    }

    std::cout << "Searching {9, 9, 9} in vector using search_n(): " << std::endl;
    auto partialRange = std::search_n(numsInVec.cbegin(), numsInVec.cend(), 3, 9);

    // Check if search_n found a match
    if (partialRange != numsInVec.cend()){
        std::cout << "Sequence {9, 9, 9} found in vector at position: ";
        std::cout << std::distance(numsInVec.cbegin(), partialRange);
    }

    return 0;
}