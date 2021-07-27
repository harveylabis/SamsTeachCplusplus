#include<iostream>
#include<list>

template <typename T>
void DisplayContents(const T &container){
    for (auto element = container.cbegin(); element != container.cend(); element++){
            std::cout << *element << ' ';
        }
    std::cout << std::endl;
}

int main(void){

    std::list<int> linkInts{-101, 42};

    // insert to front
    linkInts.push_front(10);
    linkInts.push_front(2011);
    linkInts.push_front(2020);

    // insert to back
    linkInts.push_back(-1);
    linkInts.push_back(999);
    linkInts.push_front(2000);

    // display the elements of the list
    DisplayContents(linkInts);

    return 0;
}