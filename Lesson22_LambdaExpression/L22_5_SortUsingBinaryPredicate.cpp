#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
void DisplayContents(const T &container){
    for (auto element = container.cbegin();
            element != container.cend();
            element++){
                std::cout << *element << ' ';
            }
    std::cout << std::endl;
}

int main(void){

    std::vector<std::string> namesInVec { "jim", "Jack", "Sam", "Anna"};
    
    // insertion order
    std::cout << "The names in vector in order of insertion: " << std::endl;
    DisplayContents(namesInVec);
    // sort algorithm defaul: case sensitive
    std::cout << "Order after case sensitive sort: " << std::endl;
    std::sort(namesInVec.begin(), namesInVec.end());
    DisplayContents(namesInVec);

    // sort with ignoring case using lambda
    std::cout << "Order after sort ignoring case: " << std::endl;
    std::sort(namesInVec.begin(), namesInVec.end(), 
            [] (const std::string &str1, const std::string &str2) -> bool {
                std::string str1LowerCase;
                str1LowerCase.resize(str1.size());
                std::transform(str1.begin(), str1.end(), str1LowerCase.begin(), ::tolower);
                std::string str2LowerCase;
                str2LowerCase.resize(str2.size());
                std::transform(str2.begin(), str2.end(), str2LowerCase.begin(), ::tolower);
                return (str1LowerCase < str2LowerCase);
            });
    DisplayContents(namesInVec);

    return 0;
}

