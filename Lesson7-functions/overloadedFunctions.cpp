/* Functions with the same name and return type but with different parameters or set of
parameters are said to be overloaded functions.
*/

#include <iostream>
using namespace std;

const double PI = 3.141592653589793;

// Function declaration (prototype)
double Area(double radius); // area of circle
double Area(double radius, double height); // area of cylinder

int main()
{
    cout << "Enter 'z' for Cylinder, 'c' for Cicle: ";
    char userSelection = '\0';
    cin >> userSelection;

    cout << "Enter radius: ";
    double radius = 0.0;
    cin >> radius;

    if (userSelection == 'z'){
        cout << "Enter height: ";
        double height = 0.0;
        cin >> height;

        // Invoke overloaded variant of Area for Cylinder
        cout << "Area of cylinder is: " << Area(radius, height) << endl; 
    } else {
        cout << "Area of Circle is: " << Area(radius) << endl;
    }   

    return 0;
}

// The compilers knows what function to use based on the 
// number of paramaters passed.

// Area function for circle
double Area(double radius){
    return (PI * radius * radius);
}

// Area function for cylinder
double Area(double radius, double height){
    return (2 * Area(radius)) + (2 * PI * radius * height);
}