#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <ctime>

int retNum(int a){
    return a++;
}

int main(void){

    std::srand(std::time(NULL)); // seed the random generator using time

    std::vector<int> numsInVec(5);
    std::generate(numsInVec.begin(), numsInVec.end(), std::rand);

    std::cout << "The elements of the vector are: " << std::endl;
    for (size_t index = 0; index < numsInVec.size(); index++){
        std::cout << numsInVec[index] << ' ';
    }
    std::cout << std::endl;

    std::list<int> numsInList (5);
    std::generate_n(numsInList.begin(), 3, std::rand);

    std::cout << "Elements in the list are: ";
    for (auto element = numsInList.cbegin();
            element != numsInList.cend();
            element++){
                std::cout << *element << ' ';
            }
    std::cout << std::endl;

    return 0;
}