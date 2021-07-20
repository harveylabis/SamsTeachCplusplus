#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void){

    string sampleStr = "Hello String! We will reverse you!";
    cout << "The original sample string is: " << endl;
    cout << sampleStr << endl << endl;

    // reversing the string using the reverse function from algorithm (not from string!!!)
    reverse(sampleStr.begin(), sampleStr.end()); // one can also apply bounds, i.e, put - x or + x in the argument

    cout <<  "After applying the std::reverse algorithm:" << endl;
    cout << sampleStr << endl;

    return 0;
}