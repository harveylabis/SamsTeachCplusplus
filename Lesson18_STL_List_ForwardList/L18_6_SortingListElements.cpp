#include <iostream>
#include <list>

bool SortPredicate_Descending(const int &lhs, const int &rhs){
    // define criteria for list::sort: return true for desired order
    return (lhs > rhs);
}

template <typename  T>
void DisplayContents(const T &container){
    for (auto element = container.cbegin();
        element != container.cend();
        element++){
            std::cout << *element << ' ';
        }
    std::cout << std::endl;
}

int main(void){

    std::list<int> linkInts {0, -1, 2011, 444, -5};

    std::cout << "Initial contents of the list are: " << std::endl;
    //DisplayContents(linkInts);
    
    // sorting the list using the sort() method
    linkInts.sort(); // ascending order (by default) uses '<'

    std::cout << "Order after sort(): " << std::endl;
    DisplayContents(linkInts);

    // sorting the list using a custom function / predicate 
    // linkInts.sort(std::greater<int>());
    linkInts.sort(SortPredicate_Descending);
    std::cout << "Order after sort() with a predicate:" << std::endl;
    DisplayContents(linkInts);

    return 0;
}