#include <iostream>
using namespace std;

void GetSquare(int const &number, int &result){
    result = number * number;
}

int main(void){
    cout << "Enter a number you wish to square: ";
    int number = 0;
    cin >> number;
    
    int square = 0;
    GetSquare(number, square);
    cout << number << "^2 = " << square << endl;


    return 0;
}