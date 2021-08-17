#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
void DisplayContents(const T &container){
    for (auto element = container.cbegin();
        element != container.cend();
        element++){
            std::cout << *element << ' ';
        }
    std::cout << std::endl;
}

int main(void){

    // Initialize a sample vector with 3 elements
    std::vector<int> numsInVec (3);
    std::cout << "Initialize a sample vector with 3 elements: ";
    DisplayContents(numsInVec);

    // Fill all the elements in the container with value 9
    std::fill(numsInVec.begin(), numsInVec.end(), 9);
    std::cout << "Fill all the elements in the container with value 9: ";
    DisplayContents(numsInVec);

    // Increase the size of the vector to hold 6 elements
    numsInVec.resize(6);

    // Fill the three elements starting at offset position 3 with value -9
    std::fill_n(numsInVec.begin()+3, 3, -9);
    // std::fill(numsInVec.begin()+3, numsInVec.end(), -9);
    std::cout << "Fill the three elements starting at offset position 3 with value -9: ";
    DisplayContents(numsInVec);




    return 0;
}