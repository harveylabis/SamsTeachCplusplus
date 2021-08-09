#include <iostream>
#include <string>
#include <unordered_map>

template<typename T1, typename T2>
void DisplayUnorderedMap(std::unordered_map<T1, T2> &container){
    std::cout << "Unordered map contains: " << std::endl;
    for (auto element = container.cbegin();
            element != container.cend();
            element++){
                std::cout << element->first << " -> " << element->second << std::endl;
            }
    std::cout << "Number of pairs, size(): " << container.size() << std::endl;
    std::cout << "Bucket count = " << container.bucket_count() << std::endl;
    std::cout << "Current load factor: " << container.load_factor() << std::endl;
    std::cout << "Max load factor: " << container.max_load_factor() << std::endl;
}

int main(void){

    std::unordered_map<int, std::string> umapIntToStr;
    umapIntToStr.insert(std::make_pair(1, "One"));
    umapIntToStr.insert(std::make_pair(45, "Forty Five"));
    umapIntToStr.insert(std::make_pair(1001, "Thousand One"));
    umapIntToStr.insert(std::make_pair(-2, "Minus Two"));
    umapIntToStr.insert(std::make_pair(-1000, "Minus One Thousand"));
    umapIntToStr.insert(std::make_pair(100, "One Hundred"));
    umapIntToStr.insert(std::make_pair(12, "Twelve"));
    umapIntToStr.insert(std::make_pair(-100, "Minus One Hundred"));

    DisplayUnorderedMap<int, std::string>(umapIntToStr);

    std::cout << "Inserting one more element" << std::endl;
    umapIntToStr.insert(std::make_pair(300, "Three Hundred"));
    DisplayUnorderedMap<int, std::string> (umapIntToStr);

    std::cout << "Enter key to find for: ";
    int key = 0;
    std::cin >> key;

    auto element = umapIntToStr.find(key);
    if (element != umapIntToStr.cend()){
        std::cout << "Found! Key pairs with value " << element->second << std::endl;
    } else {
        std::cout << "Key has no corresponding pair value!" << std::endl;
    }

    // more on DSA

    return 0;
}
