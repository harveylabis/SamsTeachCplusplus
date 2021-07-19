#include <iostream>
#include <string>
using namespace std;

// using find method 
/* The STL string also features find functions such as find_
first_of(), find_first_not_of(), find_last_of(), and
find_last_not_of() that assist the programmer in working with
strings. */

int main(void){
    
    string sampleStr ("Good day String! Today is beautiful!");
    cout << "Sample string is: " << sampleStr << endl << endl;

    // locating a string using the find method of string
    // Find substring "day" - find() returns position - 0 based index
    size_t charPos = sampleStr.find("day", 0);

    // Check if the substring was found
    if (charPos != string::npos){ // no found means charPos = string::npos
        cout << "First instance \"day\" at pos. " << charPos << endl;
    } else {
        cout << "Substring not found." << endl;
    }
    
    // cout << string::npos << endl; // largest possible value for an element type size_t - usually used to indicate no matches
    // cout << charPos << endl; 
    // cout << sampleStr[charPos] << endl;

    // Locating all instances of "day"
    cout << "Locating all instances of substring \"day\"" << endl;
    size_t subStrPos = sampleStr.find("day", 0); // search for the first match location

    // if found above, this loop will run continuing to search for further match
    while (subStrPos != string::npos){
        cout << "\"day\" found at position " << subStrPos << endl; // print the first match in first run
        size_t searchOffSet = subStrPos + 1; // go to the next position and make it as the starting point

        subStrPos = sampleStr.find("day", searchOffSet); // search for further match starting from one location above to avoid rematch
    }

    return 0;
}