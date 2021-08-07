#include <iostream>
#include <unordered_set>

template <typename T>
void DisplayContents(const T &container){
    std::cout << "Unordered sets contains: ";
    for (auto element = container.cbegin();
            element != container.cend();
            element++){
                std::cout << *element << ' ';
            }
    std::cout << std::endl;

    std::cout << "Number of elements, size() = " << container.size() << std::endl;
    std::cout << "Bucket count = " << container.bucket_count() << std::endl;
    std::cout << "Max load factor = " << container.max_load_factor() << std::endl;
    std::cout << "Load factor = " << container.load_factor() << std::endl << std::endl;
}

int main(void){

    std::unordered_set<int> usetInt {1, -3, 2017, 300, -1, 989, -300, 9};
    DisplayContents(usetInt);

    usetInt.insert(999);
    DisplayContents(usetInt);

    std::cout << "Enter int you want to check for existence in set: ";
    int input = 0;
    std::cin >> input;

    auto elementFound = usetInt.find(input);

    if (elementFound != usetInt.cend()){
        std::cout << *elementFound << " found in set" << std::endl;
    } else {
        std::cout << input << " not available n set" << std::endl;
    }
    
    return 0;
}
