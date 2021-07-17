#include <iostream>
using namespace std;

// remove the try-catch block to see the application crash
int main(void)
{
    try
    {
        // Request a lot of memory!
        int *pointToManyNums = new int[0x1fffffff];
        // Use allocated memory
        delete [] pointToManyNums;
    }
    catch (bad_alloc)
    {
        cout << "Memory allocation failed. Ending program..." << endl;
    }

    return 0;
}