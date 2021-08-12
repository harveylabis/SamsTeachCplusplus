#include "L21_6_BinaryPredicate.cpp"
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>


template <typename T>
void DisplayContents(const T &container){
    for (auto element = container.cbegin();
        element != container.cend();
        element++){
            std::cout << *element << std::endl;
        }
}

int main(void){
    // Define a vector of string to hold names
    std::vector<std::string> names;

    // Insert some sample names into the vector
    names.push_back("jim");
    names.push_back("Jack");
    names.push_back("Sam");
    names.push_back("Anna");

    std::cout << "The names in vector in order of insertion: " << std::endl;
    DisplayContents(names);

    std::cout << "Names after sorting using default std::less<>: " << std::endl;
    std::sort(names.begin(), names.end());
    DisplayContents(names);

    std::cout << "Sorting using predicate that ignores case: " << std::endl;
    std::sort(names.begin(), names.end(), CompareStringNoCase());
    DisplayContents(names);

    return 0;
}


