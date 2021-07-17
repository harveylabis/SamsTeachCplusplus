#include <iostream>
#include <string>
using namespace std;

class Human{
    private:
        string name;
        int age;
    public:
        Human(string humansName = "Adam", int humansAge = 25){
            name = humansName;
            age = humansAge;    
            cout << "Overloaded constructor creates " << name;
            cout << " of age " << age << endl;
        }

        void IntroduceYourself(){
            cout << "I am " + name << " and I am ";
            cout << age << " years old." << endl;
        }
};

int main(){
    Human firstMan; 
    Human firstWoman("Eve", 28);

    firstMan.IntroduceYourself();
    firstWoman.IntroduceYourself();

}