#include <iostream>
#include <vector>
using namespace std;

int main(void){

    // vector of integers
    vector<int> integers;

    // vector initialized using C++ list initialization
    vector<int> initVector {202, 2017, -1};

    // Instantiate a vector with 10 elements (it can still grow)
    vector<int> tenElements(10);

    // Instantiate a vector with 10 elements, each initialized to 90
    vector<int> tenElemInit(10, 90);
    
    // Initialize a vector to the contents of another
    vector<int> copyVector (tenElemInit);

    // Vector initialized to 5 elements from another using iterators
    vector<int> partialCopy (tenElements.cbegin(), tenElements.cend() + 5); // cbegin/cend doest not allow modification 

    /* 
        cvar = something.cbegin() // ie. read-only/constant iterator
        var = something.begin() // ie. read/write iterator
    */

    return 0;
}