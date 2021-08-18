/* LISTING 25.3 The Instantiation of vector<bool> */

#include <vector>
#include <iostream>

template <typename T>
void DisplayContents (const T &container){
    for (auto element = container.cbegin();
            element != container.cend();
            element++){
                std::cout << *element;
            }
    std::cout << std::endl;
} 

int main(void){

    // Instantiate an object using the default constructor
    std::vector<bool> boolFlag1;
    DisplayContents(boolFlag1); // nothing

    // Initialiaze a vector with 10 elements with value true (1)
    std::vector<bool> boolFlags2 (10, true);
    DisplayContents(boolFlags2);

    // Initialize one object as a copy of another
    std::vector<bool> boolFlags2Copy (boolFlags2);
    DisplayContents(boolFlags2Copy);



    return 0;
}