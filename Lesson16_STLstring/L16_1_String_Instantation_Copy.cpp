#include <iostream>
#include <string>
using namespace std;

int main(void){

    const char* constCStyleString = "Hello world!";
    cout << "Constant string is: " << constCStyleString << endl;

    string strFromConst (constCStyleString); // constructor
    



    return 0;
}