#include <iostream>
#include <forward_list>

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

    std::forward_list<int> flistIntegers {3, 4, 2, 2, 0};
    flistIntegers.push_front(1);

    std::cout << "Contents of forward_list:" << std::endl;
    DisplayContents(flistIntegers);

    // remove an element in forward_list
    flistIntegers.remove(2);
    flistIntegers.sort();
    std::cout << "Contents after removing 2 and sorting: " << std::endl;
    DisplayContents(flistIntegers);

    return 0;
}