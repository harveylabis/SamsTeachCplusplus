#include <iostream>
using namespace std;

int main(void){
    cout << "Is it sunny (y/n) : ";
    char userInput = '\0';
    cin >> userInput;

    // declare pointer and initialize
    bool *const isSunny = new bool;
    *isSunny = true;

    if (userInput == 'n'){
        *isSunny = false;
    }

    cout << "Boolean flag sunny says: " << *isSunny << endl;

    // release valid memory
    delete isSunny;

    return 0;
}