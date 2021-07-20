#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void){

    string sampleStr = "Hello String! Wake up to a beautiful day!";
    cout << "The original sample string is: ";
    cout << sampleStr << endl << endl;

    // Remove the "Wake up ... day!" i.e, from 13 to 28
    // Delete charactes given position and count, 0 based index position
    cout << "Truncating the second sentence: " << endl;
    sampleStr.erase(13, 28); // 13 is the ' ' and 28 is '!'
    cout << sampleStr << endl << endl; 

    // Find the character 'S' and remove it
    // Find character 'S' using find() algorithm
    // if one only---- size_t S_location = sampleStr.find('S');
    // But we are looking for many s (not sure though)
    string::iterator iChars = find(sampleStr.begin(), sampleStr.end(), 'S'); // will hold all the pointers to S in sampleStr

    // If character found, 'erase' to delete a character
    cout << "Erasing character 'S' from the sample string: " << endl;
    if (iChars != sampleStr.end())
        sampleStr.erase(iChars);
    
    cout << sampleStr << endl << endl;

    // Erase a range of charactes using an overload version of erase()
    cout << "Erasing a range between begin() and end(): " << endl;
    sampleStr.erase(sampleStr.begin(), sampleStr.end());

    // Verify the length after the erase() operation above
    if (sampleStr.length() == 0)
        cout << "The string is empty" << endl;

    return 0;
}