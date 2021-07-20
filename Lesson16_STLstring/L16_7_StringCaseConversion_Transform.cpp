#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void){

    cout << "Please enter a string for case-conversion: " << endl;
    cout << "> ";

    string inStr;
    getline(cin, inStr);
    cout << endl;

    // converting inStr to UPPER CASE
    transform(inStr.begin(), inStr.end(), inStr.begin(), ::toupper);
    cout << "The string converted to upper case is: " << endl;
    cout << inStr << endl << endl;

    // converting inStr to lower case
    transform(inStr.begin(), inStr.end(), inStr.begin(), ::tolower);
    cout << "The string converted to lower case is: " << endl;
    cout << inStr << endl << endl;

    return 0;
}