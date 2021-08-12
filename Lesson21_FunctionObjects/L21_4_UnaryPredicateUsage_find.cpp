#include <algorithm>
#include <vector>
#include <iostream>

template <typename numberType>
struct IsMultiple{
    numberType Divisor;

    IsMultiple(const numberType &divisor){
        Divisor = divisor;
    }
    
    bool operator()(const numberType &element){
        return ((element % Divisor) == 0);
    }
};

int main(void){

    std::vector<int> numsInVec {25, 26, 27, 28, 29, 30, 31};
    std::cout << "The vector contains: 25, 26, 27, 28, 29, 30, 31" << std::endl;

    std::cout << "Enter divisor (> 0): ";
    int divisor = 2;
    std::cin >> divisor;

    // Find the first element that is a multiple of divisor
    auto element = std::find_if(numsInVec.cbegin(), numsInVec.cend(), IsMultiple<int>(divisor));

    if (element != numsInVec.cend()){
        std::cout << "First element in vector divisible by " << divisor;
        std::cout << ": " << *element << std::endl;
    // } else {
    //     std::cout << "No element is divisible by " << divisor << std::endl;
    // }


    return 0;
}