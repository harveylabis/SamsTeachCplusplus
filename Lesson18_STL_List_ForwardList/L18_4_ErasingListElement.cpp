#include <iostream>
#include <list>

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

    std::list<int> linkInts{4, 3, 5, -1, 2017};

    // Store an iterator obtained in using insert()
    auto val2 = linkInts.insert(linkInts.begin(), 2);

    std::cout << &val2 << std::endl;

    std::cout << "Initial contents of the list: " << std::endl;
    DisplayContents(linkInts);

    std::cout << "After erasing element '" << *val2 << "':" << std::endl;
    linkInts.erase(val2);
    DisplayContents(linkInts);

    linkInts.erase(linkInts.cbegin(), linkInts.cend());
    std::cout << "Number of elements after erasing range: ";
    std::cout << linkInts.size() << std::endl;

    return 0;
}