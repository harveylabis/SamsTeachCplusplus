#include <iostream>
#include <set>

template <typename T>
void DisplayContents(const T &container){
    for (auto element = container.cbegin();
            element != container.cend();
            element++){
                std::cout << *element << ' ';
            }
    std::cout << std::endl;
}

typedef std::multiset<int> MSETINT; // alias the multiset as MSETINT

int main(void){

    MSETINT msetInts {43, 78, 78, -1, 124};

    std::cout << "multiset contains " << msetInts.size() << " elements." << std::endl;
    DisplayContents(msetInts);

    std::cout << "Enter the number to erase from the set: ";
    int input = 0;
    std::cin >> input;

    std::cout << "Erasing " << msetInts.count(input);
    std::cout << " instance(s) of value " << input << std::endl;

    msetInts.erase(input);

    std::cout << "multiset now contains " << msetInts.size() << " elements: ";
    DisplayContents(msetInts);
    
    return 0;
}