#include <iostream>
using namespace std;

const double Pi = 3.14159265;

void QueryAndCalculate()
{
    cout << "Enter radius: ";
    double radius = 0.0;
    cin >> radius;

    cout << "Do you wish to calculate circumference (y / n) ? ";
    char calcCircum = '\0';
    cin >> calcCircum;

    if (calcCircum == 'n'){
        return;
    }

    cout << "Circumference: " << 2 * Pi * radius << endl;
    return;

}


int main()
{
    QueryAndCalculate();

    return 0;
}