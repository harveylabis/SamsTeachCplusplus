#include <iostream>
#include <string>
using namespace std;

int main(void){
    const char* constCStyleString = "Hello world!";
    cout << "Constant string is: " << constCStyleString << endl;

    string strFromConst (constCStyleString); // constructor
    cout << "strFromConst is: " << strFromConst << endl;

    string str2 ("Hello String!");
    string str2copy (str2);
    cout << "strCopy is: " << str2copy << endl;

    // Initialize a string to the first 5 characters of another
    string strPartialCopy (constCStyleString, 5);
    cout << "strPartialCopy is: " << strPartialCopy << endl;

    // Initialize a string object to contain 10 'a' s
    string strRepeatChars (10, 'a');
    cout << "stRepeatChars is: " << strRepeatChars << endl;

    // variable definition also works?
    string copyA = strRepeatChars;
    cout << "A copy of repeating A's: " << copyA << endl;
    return 0;
}