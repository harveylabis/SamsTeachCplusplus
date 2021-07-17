#include <iostream>

using namespace std;

int main()
{
    cout << "Enter two integers: " <<  endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;

    bool isEqual = (num1 == num2);
    cout << "Result of equality test: " << isEqual << endl;

    bool isUnequal = (num1 != num2);
    cout << "Result of inequality test: " << isUnequal << endl;

    bool isGreaterThan = (num1 > num2);
    cout << "Result of num1 > num2 test: " << isGreaterThan << endl;

    bool isLessThan = (num1 < num2);
    cout << "Result of num1 < num2 test: " << isLessThan << endl;

    bool isGreaterThanEqual = (num1 >= num2);
    cout << "Result of num1 >= num1 test: " << isGreaterThanEqual << endl;

    bool isLessThanEqual = (num1 <= num2);
    cout << "Result of num1 <= num2 test: " << isLessThanEqual << endl;

    

    return 0;
}