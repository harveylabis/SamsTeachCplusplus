#include <iostream>
#include <algorithm>
#include <vector>

int main(void){

    std::vector<int> numsInvec {25, 101, 2017, -50};

    auto evenNum = find_if(numsInvec.cbegin(), numsInvec.cend(), 
                        [] (const int &num) {return ((num % 2) == 0);});

    // if found even, display first occurence
    if (evenNum != numsInvec.cend()){
        std::cout << "Even number in collection is: " << *evenNum << std::endl;
    }

    return 0;
}