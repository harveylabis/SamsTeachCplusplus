#include <string>
#include <iostream>
#include <typeinfo>>

using namespace std;

int main(void){

    string stlString ("Hello String!"); // sample string

    // Access the elements of the string using array syntax
    cout << "Access the elements of the string using array syntax" << endl;
    for (size_t charCounter = 0; charCounter < stlString.length(); charCounter++){
        cout << "Character [" << charCounter << "] is: ";
        cout << stlString[charCounter] << endl;
    }
    cout << endl;

    // Access the elements of the string using iterators
    cout << "Access the elements of the string using iterators" << endl;
    int charOffset = 0; // counter
    // string::const_iterator charLocator; // a pointer - can be ommited because charLocator is in auto type
    for (auto charLocator = stlString.begin(); charLocator != stlString.end(); charLocator++){
        cout << "Character [" << charOffset++ << "] is: ";
        cout << *charLocator << endl;
    }
    cout << endl;

    // Access contents as a const char*
    cout << "The char* representation of the string is: ";
    cout << stlString.c_str() << endl;
    cout << typeid(stlString.c_str()).name() << endl; // PKc -> P - constant; K - pointer; c - character

    



    return 0;
}