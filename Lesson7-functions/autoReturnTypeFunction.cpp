#include <iostream>
using namespace std;

const double PI = 3.14159265358979;

auto Area(double radius){
    return PI * radius * radius;
}

int main()
{
    cout << "Enter radius: ";
    double radius;
    cin >> radius;

    // Call function 'Area'
    cout << "Area is: " << Area(radius) << endl;
    // printf("Area is: %lf \n", Area(radius));

    return 0;
}