#include <iostream>
using namespace std;

int main(void)
{
    // Request for memory space for an int
    // new returns a pointer, and that is the reason we assigned to one
    int *pointsToAnAge = new int;
    cout << "location given: " << pointsToAnAge << endl;

    // Use the allocated memory to store a number
    cout << "Enter your dog's age: ";
    cin >> *pointsToAnAge;

    // Use indirection operator (*) to access value
    cout << "Age " << *pointsToAnAge << " is stored at " << pointsToAnAge << endl;

    // releasing the requested memory
    // removing the value stored at the address pointed by poinstToAnAge
    delete pointsToAnAge;

    // trying to show pointsToAnAge after deleting
    // now it contains 0 because its value was removed
    cout << "location given: " << *pointsToAnAge << endl;

    // but the pointer pointsToAnAge is still there
    cout << "location given: " << pointsToAnAge << endl;

    /*  NOTE: 
        Operator delete cannot be invoked on any address contained in
        a pointer, rather only those that have been returned by new and
        only those that have not already been released by a delete .
        Thus, the pointers seen in Listing 8.6 contain valid addresses,
        yet should not be released using delete because the addresses
        were not returned by a call to new .
     */


    return 0;
}