#include <iostream>
#include <string>
#include <map>

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

    std::map<int, std::string> mapIntToStr;

    mapIntToStr.insert(std::make_pair(3, "Three"));
    mapIntToStr.insert(std::make_pair(45, "Forty Five"));
    mapIntToStr.insert(std::make_pair(-1, "Minus One"));
    mapIntToStr.insert(std::make_pair(1000, "Thousand"));

    std::cout << "The map contains " << mapIntToStr.size();
    std::cout << " key-value pair. They are: " << std::endl;
    DisplayContents(mapIntToStr);
    
    std::cout << "Enter the key you wish to find: ";
    int key = 0;
    std::cin >> key;

    // check if it exist
    auto pairFound = mapIntToStr.find(key);

    if (pairFound != mapIntToStr.cend()){
        std::cout << "Key " << pairFound->first << " points to value: ";
        std::cout << pairFound->second << std::endl;
    }
    else{
        std::cout << "Sorry, pair with key " << key << " not in map" << std::endl; 
    }

    // Finding elements in multimap
    std::multimap<int, std::string> mmapIntToStr (mapIntToStr.cbegin(), mapIntToStr.cend());
    mmapIntToStr.insert(std::make_pair(1000, "One Thousand"));

    std::cout << "Enter the key you want to find in multimap: ";
    int mmkey = 0;
    std::cin >> mmkey;

    auto mmpairFound = mmapIntToStr.find(mmkey);

    // check if found
    if (mmpairFound != mmapIntToStr.cend()){
        size_t numPairs = mmapIntToStr.count(mmkey);
        for (size_t counter = 0; counter < numPairs; counter++){
            std::cout << "Key " << mmpairFound->first;
            std::cout << ", Value [" << counter << "] = ";
            std::cout << pairFound->second << std::endl; // value
            // increment to go to the next value 
            pairFound++;
        }
    } else {
        std::cout << "Element not found in the multimap." << std::endl;
    }

    return 0;
}