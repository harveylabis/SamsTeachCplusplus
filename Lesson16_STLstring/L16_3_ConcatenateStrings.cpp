#include <iostream>
#include <string>
using namespace std;

int main(void){

    string sampleStr1 ("Hello");
    string sampleStr2 (" String!");

    // concatenating using += operator
    sampleStr1 += sampleStr2 += " and World!"; // you can also directly add multiple times
    cout << sampleStr1 << endl << endl;

    // concatenanting using the append method of string
    string sampleStr3 (" Fun is not needing to use pointers!");
    sampleStr1.append(sampleStr3);
    cout << sampleStr1 << endl << endl;

    // concatenating with string decalired using const char*
    const char* consCStyleString = " You however still can!"; // a string is declared using C style
    sampleStr1.append(consCStyleString);
    cout << sampleStr1 << endl << endl;

    return 0;

}