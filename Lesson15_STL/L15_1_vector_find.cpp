#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){

    // A dynamic array of integers
    vector <int> intArray;

    // Insert sample integers to dynami array
    intArray.push_back(50);
    intArray.push_back(2991);
    intArray.push_back(23);
    intArray.push_back(9999);

    cout << "The contents of the vector are: " << endl;
    
    // Walk the vector and read values using an iterator
    vector <int>::iterator arrIterrator = intArray.begin();
    while (arrIterrator != intArray.end()){
        // Write the value to the screen
        cout << *arrIterrator << endl;

        // Increment the iterator to access the next element
        ++arrIterrator;
    }

    // Find an element (say 2991) using the 'find' algorithm
    vector <int>::iterator elFound = find(intArray.begin(), intArray.end(), 2991);
    if (elFound != intArray.end()){
        // Determine the position of element using std::distance
        int elPos = distance(intArray.begin(), elFound);
        cout << "Value " << *elFound; 
        cout << " found in the vector at position: " << elPos << endl;
    }



    return 0;
}