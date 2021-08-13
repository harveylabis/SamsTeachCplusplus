#include <iostream>
#include <algorithm>
#include <vector>

int main(void){

    std::vector<int> numsInVec{25, 26, 27, 28, 29, 30, 31};
    std::cout << "The vector contains: {25, 26, 27, 28, 29, 30, 31}" << std::endl;

    std::cout << "Enter divisor (> 0): ";
    int divisor = 1;
    std::cin >> divisor;

    // Find the first element that is a multiple of divisor
    std::vector<int>::iterator element;
    element = std::find_if(numsInVec.begin(), numsInVec.end(),
                            [divisor] (const int &dividend) {return ((dividend % divisor) == 0);});

    
    // Display the element found
    if (element != numsInVec.cend()){
        std::cout << "First element in vector divisible by " << divisor <<": " << *element << std::endl;
    }

    return 0;
}