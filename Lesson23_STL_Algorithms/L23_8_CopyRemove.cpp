#include <algorithm>
#include <vector>
#include <iostream>
#include <list>

template <typename T>
void DisplayContents (const T &container){
    for (auto element = container.cbegin();
            element != container.cend();
            element++){
                std::cout << *element << ' ';
            }
    std::cout << "| Number of elements: " << container.size() << std::endl;
}

int main(void){

    std::list<int> numsInList {2017, 0, -1, 42, 10101, 25};
    
    std::cout << "Source (list) contains: " << std::endl;
    DisplayContents(numsInList);

    // Initialize vector to hold 2x elements as the list
    std::vector<int> numsInVec (numsInList.size() * 2);
    DisplayContents(numsInVec);

    auto lastElement = std::copy(numsInList.cbegin(), numsInList.cend(), numsInVec.begin());
    std::cout << "Destination (vector) after copy: " << std::endl;
    DisplayContents(numsInVec);

    // copy odd numbers from list into vector
    std::copy_if(numsInList.cbegin(), numsInList.cend(), lastElement, 
                [] (const int &num) {return ((num % 2) != 0);});
    std::cout << "Destination (vector) after copy_if odd number: " << std::endl;
    DisplayContents(numsInVec);

    // Remove all instances of '0', resize vector using erase()
    auto newEnd = std::remove(numsInVec.begin(), numsInVec.end(), 0); // removes 0 and move to end of container
    numsInVec.erase(newEnd, numsInVec.end()); // newEnd is the starting point of sequence of 0s
    std::cout << "Destination (vector) after remove and erase 0: " << std::endl;
    DisplayContents(numsInVec);

    // Remove all the odd numbers from the vector using remove_if
    newEnd = std::remove_if(numsInVec.begin(), numsInVec.end(), 
            [] (const int &num) {return ((num % 2) != 0);});
    numsInVec.erase(newEnd, numsInVec.end());
    std::cout << "Destination (vector) after remove_if and erase odd number: " << std::endl;
    DisplayContents(numsInVec);

    return 0;
}