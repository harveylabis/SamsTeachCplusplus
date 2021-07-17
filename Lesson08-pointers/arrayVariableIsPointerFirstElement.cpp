#include <iostream>
using namespace std;

int main(void){
    // Static array of 5 integers
    int myNumbers[5];

    // array assigned to pointer to int
    int* pointToNums = myNumbers;

    // Display address contained in pointer
    cout << "pointToNums   = " << pointToNums << endl;
    
    // Addess of first element of array
    cout << "&myNumbers[0] = " << &myNumbers[0] << endl;


    return 0;
}