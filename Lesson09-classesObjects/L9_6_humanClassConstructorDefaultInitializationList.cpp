// LISTING 9.6 Default Constructor That Accepts Parameters with Default Values to Set
// Members Using Initialization Lists

#include <iostream>
#include <string>
using namespace std;

class Human{
    private:
        string name;
        int age;

    public:
        Human(string humansName = "Adam", int humansAge = 25)
            :name(humansName), age(humansAge) {
                cout << "Constructed a human called " << name;
                cout << ", " << age << " years old." << endl;
            }
};

int main(void){
    Human adam;
    Human eve("Eve", 28);

    return 0;
}
