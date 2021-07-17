#include <iostream>
using namespace std;

int main(void){
    // Request a LOT of memory space, use nothrow
    // use nothrow so that will return null if unsuccessful
    int *poinsToManyNums = new(nothrow) int [0x1fffffff];

    if (poinsToManyNums){ // check pointsToManyNums != NULL
        // Use allocated memory
        delete [] poinsToManyNums;
    } else {
        cout << "Memory allocation failed. Ending program..." << endl;
    }

    return 0;
}