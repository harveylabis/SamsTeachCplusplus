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

    std::vector<int> vecMultiplicand {0, 1, 2, 3, 4};
    std::vector<int> vecMultiplier {100, 101, 102, 103, 104};

    // Holds the result of multiplication
    std::vector<int> vecResult;
    
    // Make space for the result of the multiplicaotion
    vecResult.resize(vecMultiplier.size());

    std::transform(vecMultiplicand.begin(), vecMultiplicand.end(), 
                        vecMultiplier.begin(), vecResult.begin(),
                        [] (const int a, const int b) {return a * b;}); // lambda

    std::cout << "The contents of the first vector are: " << std::endl;
    DisplayContents(vecMultiplicand);

    std::cout << "The contents of the second vector are: " << std::endl;
    DisplayContents(vecMultiplier);

    std::cout << "The result of the multiplication is: " << std::endl;
    DisplayContents(vecResult);

    return 0;
}