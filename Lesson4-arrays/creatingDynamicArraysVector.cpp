#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> dynArray (3); //  dynamic array of int
    dynArray[0] = 365;
    dynArray[1] = -421;
    dynArray[2] = 789;

    cout << "Number of integers in array: " << dynArray.size() << endl;

    cout << "Enter another element to insert: ";
    int newValue = 0;
    cin >> newValue;
    dynArray.push_back(newValue);

    cout << "Number of integers in array: " << dynArray.size() << endl;
    cout << "Last element in the array: " << dynArray[dynArray.size() - 1] << endl;

    return 0;
}