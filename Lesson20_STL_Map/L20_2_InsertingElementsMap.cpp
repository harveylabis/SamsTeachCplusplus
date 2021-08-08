#include <iostream>
#include <string>
#include <map>

typedef std::map<int, std::string> MAP_INT_STRING;
typedef std::multimap<int, std::string> MMAP_INT_STRING;

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

    MAP_INT_STRING mapIntToStr;

    // Insert key-value pairs into map using value_type
    mapIntToStr.insert(MAP_INT_STRING::value_type(3, "Three"));

    // Insert a pair using function make_pair
    mapIntToStr.insert(std::make_pair(-1, "Minus One"));

    // Insert a pair object directly
    mapIntToStr.insert(std::pair<int, std::string>(1000, "One Thousand"));

    // Use an array-like syntax for inserting key-value pairs
    mapIntToStr[1000000] = "One Million";

    std::cout << "The map contains " << mapIntToStr.size();
    std::cout << " key-value pairs. They are: " << std::endl;
    DisplayContents(mapIntToStr);

    // instantiate a multimap that is a copy of a map
    MMAP_INT_STRING mmapIntToStr (mapIntToStr.cbegin(), mapIntToStr.cend());

    // the insert function works the same way for multimap too
    // a multimap can store duplicates - store duplicates
    mmapIntToStr.insert(std::make_pair(1000, "Thousand"));

    std::cout << std::endl;

    std::cout << "The multimap contains " << mmapIntToStr.size();
    std::cout << " key-value pair. They are: " << std::endl;
    DisplayContents(mmapIntToStr);

    // The multimap can return number of pairs with same key
    std::cout << "The number of pairs in the multimap with 1000 as their key: ";
    std::cout << mmapIntToStr.count(1000) << std::endl;

    // trying to copy mmap to map (duplicates to no duplicates allowed)
    MAP_INT_STRING mapIntToStr2 (mmapIntToStr.cbegin(), mmapIntToStr.cend());
    DisplayContents(mapIntToStr2);

    // so it removed the second object of same key

    return 0;
}