#include <iostream>
using namespace std;

int main(void)
{
    int age = 30;
    int *pAge = &age; // pointer initialize to age

    // Display the value of pointer
    cout << "Integer is located at: " << pAge << endl;

    return 0;
}