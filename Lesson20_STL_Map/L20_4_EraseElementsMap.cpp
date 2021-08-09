#include <iostream>
#include <map>
#include <string>

template <typename T>
void DisplayContents(const T &container){
    for (auto element = container.cbegin();
            element != container.cend();
            element++){
                std::cout << element->first << " -> " << element->second << std::endl;
            }
    std::cout << std::endl;
}

int main(void){

    std::multimap<int, std::string> mmapIntToStr;

    // insert the key-value pairs into the multimap
    mmapIntToStr.insert(std::make_pair(3, "Three"));
    mmapIntToStr.insert(std::make_pair(45, "Forty Five"));
    mmapIntToStr.insert(std::make_pair(-1, "Minus One"));
    mmapIntToStr.insert(std::make_pair(1000, "Thousand"));

    // insert duplicates into the multimap
    mmapIntToStr.insert(std::make_pair(-1, "Minus One"));
    mmapIntToStr.insert(std::make_pair(1000, "Thousand"));

    std::cout << "The multimap contains " << mmapIntToStr.size();
    std::cout << " key-value pairs. They are: " << std::endl;
    DisplayContents(mmapIntToStr);

    // erasing an element with key as -1 from the multimap
    auto numPairsErased = mmapIntToStr.erase(-1);
    std::cout << "Erased " << numPairsErased << " pairs with -1 as key." << std::endl;

    // erasing an element given an iterator from the multimap
    auto pair = mmapIntToStr.find(45);
    if (pair != mmapIntToStr.cend()){
        mmapIntToStr.erase(pair);
        std::cout << "Erased a pair with 45 as key using iterator." << std::endl;
    } 

    // Erase a range from the multimap...
    std::cout << "Erasing the range of pairs with 1000 as key." << std::endl;
    mmapIntToStr.erase(mmapIntToStr.lower_bound(1000), mmapIntToStr.upper_bound(1000));
    std::cout << "The multimap now contains " << mmapIntToStr.size();
    std::cout << " key-value pairs. They are: " << std::endl;
    DisplayContents(mmapIntToStr);

    // as expected, only key 3 left.

    return 0;
}