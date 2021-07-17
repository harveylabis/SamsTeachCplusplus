#include <iostream>
using namespace std;

int main(void){
    const int ARRAY_LEN = 5;

    // Static array of 5 integers, initialized
    int myNumbers[ARRAY_LEN] = {24, -1, 365, -999, 2011};

    // Pointer initialized to the first element in array
    int *pointsToNum = myNumbers;

    cout << "Display array using pointer syntax, operator*" << endl;    
    for (int index = 0; index < ARRAY_LEN; ++index){
        cout << "Element " << index << " = " << *(myNumbers + index) << ": " << (myNumbers + index) << endl;
    }

    cout << "Display array using ptr with array syntax, operator[]" << endl;
    for (int index = 0; index < ARRAY_LEN; ++index){
        cout << "Element " << index << " = " << pointsToNum[index] << ": " << (myNumbers + index) << endl;
    }




    return 0;
}