#include <iostream>
using namespace std;

/* Overflow is reaching above the highest value a data type can hold
The value assigned to a variable will be the lowest value;
Go back to the first value.*/

int main(){
    unsigned short uShortValue = 65535;
    cout << "Incrementing unsigned short" << uShortValue << " gives: "; 
    cout << ++uShortValue << endl;

    short signedShort = 32767;
    cout << "Incrementing signed short" << signedShort << " gives: ";
    cout << ++signedShort << endl;

    return 0;
}