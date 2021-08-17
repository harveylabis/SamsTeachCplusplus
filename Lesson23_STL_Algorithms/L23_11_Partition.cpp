/* LISTING 23.11 Using partition() and stable_partition() to Partition a Range of
Integers into Even and Odd Values */

#include <iostream>
#include <algorithm>
#include <vector>

bool isEven (const int &num){
    return ((num % 2) == 0);
}

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

    std::vector<int> numsInVec{2017, 0, -1, 42, 10101, 25};
    std::vector<int> vecCopy (numsInVec);

    std::cout << "The initial contents are: " << std::endl;
    DisplayContents(numsInVec);

    std::cout << "The effect of using partition(): " << std::endl;
    std::partition(numsInVec.begin(), numsInVec.end(), isEven);
    DisplayContents(numsInVec);

    std::cout << "The effect of using stable_partition: " << std::endl;
    std::stable_partition(vecCopy.begin(), vecCopy.end(), isEven);
    DisplayContents(vecCopy);



    return 0;
}