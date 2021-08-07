#include <iostream>
#include <set>
#include <algorithm>

int main(void){

    std::set<int> setInts {43, 78, -1, 124};

    // Display contents of the set to the screen
    for (auto element = setInts.cbegin();
            element != setInts.cend();
            element++){
                std::cout << *element << ' ';
            }
    std::cout << std::endl;

    // Trying to find an element
    auto elementFound = setInts.find(-1);

    // Check if found
    if (elementFound != setInts.cend()){
        int loc = distance(setInts.cbegin(), elementFound);
        std::cout << "Element " << *elementFound << " found at " << loc << std::endl;
    } else {
        std::cout << "Element not found in set!" << std::endl;
    }

    // Finding another
    auto anotherFind = setInts.find(12345);

    // Check if found...
    if (anotherFind != setInts.cend()){
        std::cout << "Element " << *anotherFind << "found!" << std::endl;
    } else {
        std::cout << "Element not found in set!" << std::endl;
    }

    return 0;
}