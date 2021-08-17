#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
void DisplayContents (const T &container){
    for (auto element = container.cbegin();
            element != container.cend();
            element++){
                std::cout << *element << ' ';
            }
    std::cout << "| Number of elements: " << container.size() << std::endl;
}

int main(void){

    std::vector<int> numsInvec(6);

    // fill first 3 elements with value 8, last 3 with 5
    std::fill(numsInvec.begin(), numsInvec.begin()+3, 8);
    std::fill_n(numsInvec.begin()+3, 3, 5);

    // shuffle the container
    std::random_shuffle(numsInvec.begin(), numsInvec.end());

    std::cout << "The initial contents of the vector: " << std::endl;
    DisplayContents(numsInvec);

    std::cout << "'std::replace' value 5 by 8" << std::endl;
    std::replace(numsInvec.begin(), numsInvec.end(), 5, 8);
    DisplayContents(numsInvec);

    std::cout << "'std::replace _if' even values by -1" << std::endl;
    std::replace_if(numsInvec.begin(), numsInvec.end(), 
                [] (const int & num) {return ((num % 2) == 0);}, -1);
    std::cout << "Vector after replacements: " << std::endl;
    DisplayContents(numsInvec);




    return 0;
}