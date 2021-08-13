#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

int main(void){

    std::vector<int> numsInVec {101, -4, 500, 21, 42, -1};
    std::list<char> charInList {'a', 'h', 'z', 'k', 'l'};

    // Display array of integers
    std::cout << "Display elements in a vector using lambda: " << std::endl;
    std::for_each(numsInVec.cbegin(), numsInVec.cend(), 
                [] (const int &element) {std::cout << element << ' '; });
    std::cout << std::endl;

    // Display the list of characters
    std::cout<< "Display elements in a list using lambda: " << std::endl;
    std::for_each(charInList.cbegin(), charInList.cend(), 
                [] (const char &element) {std::cout << element << ' ';});

    return 0;
}