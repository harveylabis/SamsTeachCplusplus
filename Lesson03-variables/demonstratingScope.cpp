#include <iostream>
using namespace std;

void multiplyNumbers(){
    cout << "Enter the first number: ";
    int firstNumber = 0;
    cin >> firstNumber;

    cout << "Enter the second number: ";
    int secondNumber = 0;
    cin >> secondNumber;

    // Multiply the two numbers, store result in a variable
    int multiplicationResult = firstNumber * secondNumber;

    // Display result
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << firstNumber * secondNumber << endl;

}

int main(){

    cout << "This program will help you to multiply two numbers" << endl;
    
    // Call the function that does all the work
    multiplyNumbers();

    // Trying to display result again; will report scope error
    // cout << firstNumber << " x " << secondNumber;
    // cout << " = " << firstNumber * secondNumber << endl;

    return 0;
}