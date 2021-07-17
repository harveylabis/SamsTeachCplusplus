#include <iostream>
using namespace std;

void GetSquare(int &number){
    cout << number << endl;
    number *= number;
}

int main(void){
    cout << "Enter a number you wish to square: ";
    int number = 0;
    cin >> number;

    GetSquare(number);
    cout << "Square is: " << number << endl;

    return 0;
}