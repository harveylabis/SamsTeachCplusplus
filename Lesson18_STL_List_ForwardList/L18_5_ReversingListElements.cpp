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

    std::list<int> linkInts {0, 1, 2, 3, 4, 5};

    std::cout << "Initial contents of the list: ";
    DisplayContents(linkInts);

    // reversing the list
    linkInts.reverse(); // using the reverse method of list
    // using algorithm header std::reverse(linkInts.begin(), linkInts.end()); 


    std::cout << "Contents of the list afer using reverse(): ";
    DisplayContents(linkInts);

    return 0;
}