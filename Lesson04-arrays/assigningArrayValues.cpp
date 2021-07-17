#include <iostream>

using namespace std;

constexpr int Square (int number) { return number*number; }

int main()
{
    const int ARRAY_LENGTH = 5;
    
    // Array of 5 integers, initialized using const
    int myNumbers[ARRAY_LENGTH] = {5, 10, 0, -101, 20};

    // Using a constexpr for array of 25 integers
    int moreNumbers [Square(ARRAY_LENGTH)];

    cout << "Enter index of the element to be changed: ";
    int elementIndex = 0;
    cin >> elementIndex;    

    cout << "Enter new value: ";
    int newValue = 0;
    cin >> newValue;

    myNumbers[elementIndex] = newValue;
    moreNumbers[elementIndex] = newValue;

    cout << "Element " << elementIndex << " in array myNumbers is: " << myNumbers[elementIndex] << endl;
    cout << "Element " << elementIndex << " in array moreNumbers is: " << moreNumbers[elementIndex] << endl;

    // printing out of index
    cout << myNumbers[100] << endl; // --> this runs weirdly

    return 0;
}