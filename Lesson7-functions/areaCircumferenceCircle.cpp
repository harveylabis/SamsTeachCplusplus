#include <iostream>
using namespace std;

const double PI = 3.14159265;

// Function declarations (prototype)
double Area(double radius);
double Circumference(double radius);

int main()
{   
    cout << "Enter radius: ";
    double radius = 0.0;
    cin >> radius;

    // Call function 'Area' 
    cout << "Area is: " << Area(radius) << endl;

    // Call function 'Circumference'
    cout << "Circumference is: " << Circumference(radius) << endl;

    return 0;
}

double Area(double radius){
    return PI * radius * radius;
}

double Circumference(double radius){
    return 2 * PI * radius;
}