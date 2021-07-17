#include <iostream>
using namespace std;

// Function declarations (prototype)
double Area(double radius, const double pi = 3.14);

int main()
{
    cout << "Enter radius: ";
    double radius = 0.0;
    cin >> radius;

    cout << "pi is 3.14, do you wish to change this (y/n) ? ";
    char changePi = '\0';
    cin >> changePi;

    double circleArea = 0.0;
    if (changePi == 'y'){
        cout << "Enter new pi: ";
        double newPi = 3.14;
        cin >> newPi;
        circleArea = Area(radius, newPi);
    } else {
        circleArea = Area(radius); // ignore 2nd param, use default value
    }

    // Call function area
    cout << "Area is: " << circleArea << endl;

    return 0;
}

double Area(double radius, const double pi){
    return (pi * radius * radius);
}