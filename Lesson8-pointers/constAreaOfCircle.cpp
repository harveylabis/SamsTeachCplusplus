/* Note:
    int const* is pointer to const int
    int *const is const pointer to int
    int const* const is const pointer to const int
 */

#include <iostream>
using namespace std;

void CalcArea(double const* const ptrPi,        // variable for constant pointer to constant double
                double const *const ptrRadius,  // variable for constant pointer to constant double
                double* const ptrArea){         // variable for constant pointer to double
    if (ptrPi && ptrRadius && ptrArea){
        *(ptrArea) = *(ptrPi) * (*(ptrRadius) * *(ptrRadius));
    }
}

int main(void){
    const double PI = 3.141592653589793;

    cout << "Enter radius: ";
    double radius = 0.0;
    cin >> radius;

    double area = 0.0;
    CalcArea(&PI, &radius, &area);

    cout << "Area is = " << area << endl;

    return 0;
}