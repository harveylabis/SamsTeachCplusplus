#include <iostream>
using namespace std;

int main(void)
{  
    int age = 30;
    int dogsAge = 9;

    cout << "Integer age = " << age << endl;
    cout << "Interger dogsAge = " << dogsAge << endl;

    int *pointsToInt = &age;
    cout << "pointsToInt points to age" << endl;

    // Displaying the value of pointer 
    cout << "pointsToInt = " << pointsToInt << endl;

    // Displaying the value at the pointed location
    cout << "*pointsToInt = " << *pointsToInt << endl;

    pointsToInt = &dogsAge;
    cout << "pointsToInt points to dogsAge now" << endl;

    // Displaying the value of pointer
    cout << "pointsToInt = " << pointsToInt << endl;

    // Displaying the value at the pointed location
    cout << "*pointsToInt = " << *pointsToInt << endl;

    // Overwriting the value pointed by pointsToInt
    *pointsToInt = 10;
    // Displaying the addess of pointsToInt which same as address of dogsAge 
    cout << pointsToInt << endl;
    // As a result, dogsAge = 10;
    cout << "dogsAge = " << dogsAge << endl;

    // printing the address of a pointer
    cout << "address of pointer: " << &pointsToInt << endl;
    // dereferencing a pointer that points to a pointer address
    cout << "pointer address of a pointer: " << *&pointsToInt << endl;
    // dereferencing a pointer that points to a pointer that points to a pointer
    cout << "value of a pointer of a pointer of a pointer: " << **&pointsToInt << endl;
    return 0;

}