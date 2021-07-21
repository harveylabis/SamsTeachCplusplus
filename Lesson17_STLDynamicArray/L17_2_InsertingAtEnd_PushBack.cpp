#include <iostream>
#include <vector>
using namespace std;

// push back adds an element to the end of the vector

int main(void){

    vector<int> integers;

    // Inserting sample integers into the vector
    integers.push_back(50);
    integers.push_back(1);
    integers.push_back(987);
    integers.push_back(1001);

    cout << "The vector contains ";
    cout << integers.size() << " elements!" << endl;

    // Show the elements of the vector
    cout << "The elements are:" << endl;
    for (int i: integers){
        cout << i << endl;
    }

}