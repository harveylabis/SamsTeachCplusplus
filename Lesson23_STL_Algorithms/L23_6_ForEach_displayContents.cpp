#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

template <typename elementType>
struct DisplayElementKeepCount {
    int count;
    DisplayElementKeepCount(): count(0) {} // constructor
    void operator () (const elementType &element){
        ++count;
        std::cout << element << ' ';
    }
};

int main(void){

    std::vector<int> numsInVec {2017, 0, -1, 42, 10101, 25};
    std::cout << "Elements of the vector are: " << std::endl;
    DisplayElementKeepCount<int> functor = std::for_each(numsInVec.cbegin(), numsInVec.cend(), 
                    DisplayElementKeepCount<int>());
    std::cout << std::endl;

    // Use the state stored in the return value of for_each!
    std::cout << "'" << functor.count << "' elements displayed" << std::endl;

    std::string str ("for_each and strings!");
    std::cout << "Sample string: " << str << std::endl;

    std::cout << "Characters displayed using lambda: " << std::endl;
    int numChars = 0;
    std::for_each(str.cbegin(), str.cend(), 
                [&numChars] (char c) {std::cout << c << ' '; ++numChars;});
    std::cout << std::endl;
    std::cout << "'" << numChars << "' characters displayed" << std::endl;


    return 0;
}
