#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

template <typename T>
void DisplayContents(const T &container){
    for(auto element = container.cbegin();
        element != container.cend();
        element++){
            std::cout << *element << ' ';
        }
    std::cout << std::endl;
}

int main(void){

    std::vector<std::string> vecNames {"John", "jack", "sean", "Anna"};

    // insert a duplicate
    vecNames.push_back("jack");

    std::cout << "The initial contents of the vector are: " << std::endl;
    DisplayContents(vecNames);

    std::cout << "The sorted vector contains the names in the order: " << std::endl;
    std::sort(vecNames.begin(), vecNames.end());
    DisplayContents(vecNames);

    std::cout << "Searching for \"John\" using 'binary_search': " << std::endl;
    bool elementFound = std::binary_search(vecNames.cbegin(), vecNames.cend(), "John");
    std::cout << "Result: ";
    if (elementFound){
        std::cout << "John was found in the vector." << std::endl;
    } else {
        std::cout << "John was NOT found in the vector." << std::endl;
    }

    // Erase adjcanet duplicates
    auto newEnd = std::unique(vecNames.begin(), vecNames.end());
    vecNames.erase(newEnd, vecNames.end());

    std::cout << "The contents of the vector after using 'unique': " << std::endl;
    DisplayContents(vecNames);



    return 0;
}