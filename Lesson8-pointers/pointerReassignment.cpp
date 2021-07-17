#include <iostream>
using namespace std;

int main(void)
{
    int age = 30;
    int *pointsToInt = &age;    // assigns the address of age

    cout << "pointsToInt points to age now" << endl;
    cout << "pointsToInt = " << pointsToInt << endl;

    int dogsAge = 9;
    pointsToInt = &dogsAge;     // reassigns the address of dogsAge

    cout << "pointsToInt points to dogsAge now" << endl;
    cout << "pointsToInt: " << pointsToInt << endl;


    return 0;
} 