#include <iostream>
#include <list>

template <typename T>
void DisplayVector(const T &container){
    for (auto element = container.cbegin(); 
        element != container.cend();
        element++) {
        std::cout << *element << ' ';
    }
    std::cout << std::endl;
}

int main(void){

    std::list<int> linkList1;

    // Inserting elements at the beginning...
    linkList1.insert(linkList1.cbegin(), 2);
    linkList1.insert(linkList1.cbegin(), 1);

    // Inserting element at the end...
    linkList1.insert(linkList1.cend(), 3);

    std::cout << "The contents of the list 1 after inserting elements:" << std::endl;
    DisplayVector(linkList1);

    std::list<int> linkList2;

    // Inserting 4 elements with the same value 0 ...
    linkList2.insert(linkList2.cbegin(), 4, 0);

    std::cout << "The contenst of list 2 after inserting '";
    std::cout << linkList2.size() << "' elements of a value: " << std::endl;
    DisplayVector(linkList2);

    std::list<int> linkList3;

    // Inserting elements from another list at the beginning ...
    linkList3.insert(linkList3.cbegin(), linkList1.cbegin(), linkList1.cend());

    std::cout << "The contents of list 3 after inserting the contents of ";
    std::cout << "list 1 at the beginning:" << std::endl;
    DisplayVector(linkList3);

    // Inserting elements from another list at the end ...
    linkList3.insert(linkList3.cend(), linkList2.cbegin(), linkList2.cend());

    std::cout << "The contents of list 3 after inserting ";
    std::cout << "the contents of list 2 at the end:" << std::endl;
    DisplayVector(linkList3);


    return 0;
}