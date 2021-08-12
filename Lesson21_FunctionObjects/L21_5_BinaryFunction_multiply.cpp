#include <iostream>
#include <algorithm>
#include <vector>

template <typename elementType>
struct Multiply {
    public:
        elementType operator() (const elementType &elem1, const elementType &elem2){
            return (elem1 * elem2);
        }
};

int main(void){

    std::vector<int> multiplicands {0, 1, 2, 3, 4};
    std::vector<int> multipliers {100, 101, 102, 103, 104};

    // A third container that holds the result of multiplication
    std::vector<int> vecResult;

    // Make space for the result of the multiplication
    vecResult.resize(multipliers.size());
    std::transform(multiplicands.begin(),
                    multiplicands.end(),
                    multipliers.begin(),
                    vecResult.begin(),
                    Multiply<int>());

    std::cout << "The contents of the first vector are: " << std::endl;
    for (size_t index = 0; index < multiplicands.size(); index++){
        std::cout << multiplicands[index] << ' ';
    }
    std::cout << std::endl;

    std::cout << "The contents of the second vector are: " << std::endl;
    for (size_t index = 0; index < multipliers.size(); index++){
        std::cout << multipliers[index] << ' ';
    }
    std::cout << std::endl;

    std::cout << "The result of the multiplication is: " << std::endl;
    for (size_t index = 0; index < vecResult.size(); index++){
        std::cout << vecResult[index] << ' ';
    }
    std::cout << std::endl; 

    return 0;
}