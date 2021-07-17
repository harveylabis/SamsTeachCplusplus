#include <iostream>
#include <string>

using namespace std;

int main()
{
    // create a string
    string greetString ("Hello std::string!");
    cout << greetString << endl;

    // cin function will only take characters until it reaches' '
    cout << "Enter a line of text: ";
    string firstLine;
    // getline will read a line and put it into the stream; simply includes all what you typed
    getline(cin, firstLine);

    cout << "Enter another: ";
    string secondLine;
    getline(cin, secondLine);

    cout << "Result of concatenation: " << endl;
    // string concatenation is just a string arithmetic addition
    string concatString = firstLine + " " + secondLine;
    cout << concatString << endl;

    cout << "Copy of concatenated string: ";
    string aCopy;
    aCopy = concatString;
    cout << aCopy << endl;


    // the string.length() will give the number of characters
    cout << "Length of concat string: " << concatString.length() << endl;

    return 0;
}