#include <iostream>
#include <set>

template <typename T>
void DisplayContents(const T &container){
    for (std::set<int>::const_iterator element = container.cbegin();
            element != container.cend();
            element++){
                std::cout << *element << ' ';
            }
    std::cout << std::endl;
}

int main(void){

    std::set<int> setInts {202, 151, -999, -1}; // std::greater<int> to change to descending, ascending default
    setInts.insert(-1);
    std::cout << "Contents of the set:" << std::endl;
    DisplayContents(setInts);

    std::multiset<int> msetInts;
    msetInts.insert(setInts.cbegin(), setInts.cend());
    msetInts.insert(-1); // duplicate

    std::cout << "Contents of the multiset:" << std::endl;
    DisplayContents(msetInts);
    
    std::cout << "Number of instances of '-1' in the multiset are: ";
    std::cout << msetInts.count(-1) << std::endl;

    return 0;
}