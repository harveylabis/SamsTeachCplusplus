#include <algorithm>
#include <list>
#include <string>
#include <iostream>

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
    std::list<std::string> names {"John", "Brad", "jack", "sean", "Anna"};

    std::cout << "Sorted content of the list are: " << std::endl;
    names.sort();
    DisplayContents(names);

    std::cout << "Lowest index where \"Brad\" can be inserted is: ";
    auto minPos = std::lower_bound(names.cbegin(), names.cend(), "Brad");
    std::cout << std::distance(names.cbegin(), minPos) << std::endl;

    std::cout << "Highes index where \"Brad\" can be inserted is: ";
    auto maxPos = std::upper_bound(names.cbegin(), names.cend(), "Brad");
    std::cout << std::distance(names.cbegin(), maxPos) << std::endl;

    std::cout << "List after inserting Brad in sorted order: " << std::endl;
    names.insert(minPos, "Brad");
    DisplayContents(names);



    return 0;
}