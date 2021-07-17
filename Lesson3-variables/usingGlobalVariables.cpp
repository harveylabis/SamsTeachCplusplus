#include <iostream>
using namespace std;

// declaring three global int variables
int firstNumber = 0;
int secondNumber = 0;
int multiplicationResult = 0;

void multiplyNumbers(){
    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    // Multiply two numbers, store result in a variable 
    multiplicationResult = firstNumber * secondNumber;

    // Display result
    cout << "Displaying from MultiplyNumbers(): ";
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << firstNumber * secondNumber << endl;
}

int main(){
    cout << "This program will help you multiply two numbers" << endl;
    // Call the function that does all the work
    multiplyNumbers();

    cout << "Displaying from main(): ";

    // This line will now compile and work!
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << firstNumber * secondNumber << endl;

    return 0;
}