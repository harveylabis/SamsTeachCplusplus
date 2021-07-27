#include <iostream>
#include <list>
#include <vector>

int main(void){

    // instantiate an empty list
    std::list<int> linkInts;

    // instantiate a list with 10 integers
    std::list<int> listWith10Integers(10);

    // instantiate a list with 4 integers, each 99
    std::list<int> listWith4IntegersEach99(4, 99);

    // create an exact copy of existing list
    std::list<int> listCopyAnother (listWith4IntegersEach99);

    // a vector with 10 integers, each 2017
    std::vector<int> vecIntegers(10, 2017);

    // instantiate a list using values from another container
    std::list<int> listContainsCopyofAnother(vecIntegers.cbegin(), vecIntegers.cend());

    return 0;
}