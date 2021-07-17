#include <iostream>
using namespace std;

int main()
{

    int startValue = 101;
    cout << "Start value of interger being operated: " << startValue << endl;

    int postfixIncrement = startValue++;
    cout << "Result of postfix increment: " << postfixIncrement << endl;
    cout << "After Postfix Increment, startValue = " << startValue << endl;

    startValue = 101;
    int prefixIncrement = ++startValue;
    cout << "Result of prefix increment = " << prefixIncrement << endl;
    cout << "After prefix increment, startValue = " << startValue << endl;

    startValue = 101;
    int postfixDecrement = startValue--;
    cout << "Result of postfix decrement = " << postfixDecrement << endl;
    cout << "After postfix decrement, startValue = " << startValue << endl;
    
    startValue = 101;
    int prefixDecrement = --startValue;
    cout << "Result of perfix decrement = " << prefixDecrement << endl;
    cout << "After postfix decrement, startValue = " << startValue << endl; 

    return 0;
}