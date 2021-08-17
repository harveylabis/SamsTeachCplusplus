#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <deque>
#include <functional> // for std::plus<int>


int main(void){

    std::string str ("THIS is a TEst string!");
    std::cout << "The sample string is: " << str << std::endl;

    std::string strLowerCaseCopy;
    strLowerCaseCopy.resize(str.size());

    std::transform(str.cbegin(), str.cend(), strLowerCaseCopy.begin(), ::tolower);

    std::cout << "Result of 'transform' on the string with 'tolower': ";
    std::cout << "\"" << strLowerCaseCopy << "\"" << std::endl;

    // Two sample vectors of integers...
    std::vector<int> numsInVec1{ 2017, 0, -1, 42, 10101, 25 };
    std::vector<int> numsInVec2 (numsInVec1.size(), -1);

    // A destination range for holding the result of addition
    std::deque<int> sumInDeque (numsInVec1.size());

    std::transform(numsInVec1.cbegin(), numsInVec1.cend(), numsInVec2.cbegin(),
                    sumInDeque.begin(), std::plus<int>());

    std::cout << "Result of 'transform' using binary function 'plus': " << std::endl;
    std::cout << "Index   Vector1 + Vector2 = Result (in Deque)" << std::endl;
    for (size_t index = 0; index < numsInVec1.size(); index++){
        std::cout << index << " \t" << numsInVec1[index] << "\t+  ";
        std::cout << numsInVec2[index] << " \t  =    ";
        std::cout << sumInDeque[index] << std::endl;
    }

    return 0;
}