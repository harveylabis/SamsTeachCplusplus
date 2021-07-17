#include <iostream>
using namespace std;

int main(void)
{
    int age = 30;
    const double PI = 3.141592653589793;

    // Use & to find the address in memory
    cout << "Integer is located at: " << &age << endl;
    cout << "Double is located at : " << &PI << endl;

    return 0;
}