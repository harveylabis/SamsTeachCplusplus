#include <iostream>
#include <vector>
#include <algorithm>

template <typename elementType>
struct DisplayElementKeepCount{
    int count;
    DisplayElementKeepcount(){ // contructor
        count = 0;
    }
    void operator()(const elementType &element){
        count++;
        std::cout << element << ' ';
    }
};

int main(void){

    std::vector<int>  numsInVec{22, 2017, -1, 999, 43, 901};
    std::cout << "Displaying the vector of integers: " << std::endl;
    
    DisplayElementKeepCount<int> result;
    result = std::for_each (numsInVec.cbegin(), numsInVec.cend(), DisplayElementKeepCount<int>());
    std::cout <<  "Function invoked " << result.count << " times" << std::endl;

    return 0;
}