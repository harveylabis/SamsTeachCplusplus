#include <iostream>
#include <string>
using namespace std;

class Human {
    private:
        string name;
        int age;
    public:
        // constructor
        Human() { 
            age = 0; // initialization; set age to 1 as default
            cout << "Constructed an instance of class Human" << endl;
        }
        void SetName(string humansName){
            name = humansName;
        }
        void SetAge(int humansAge){
            age = humansAge;
        }
        void IntroduceSelf(){
            cout << "I am " + name << " and I am ";
            cout << age << " years old." << endl;
        }
};

int main(){
    
    Human firstWoman;
    firstWoman.SetName("Eve");
    firstWoman.SetAge(28);

    firstWoman.IntroduceSelf();

}