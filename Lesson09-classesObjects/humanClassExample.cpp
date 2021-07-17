#include <iostream>
#include <string>
using namespace std;

class Human {
  public:
    string name;
    int age;

  void IntroduceSelf(){
    cout << "I am " + name << " and I am ";
    cout << age << " years old." << endl;
  }
};

int main(void){
  // An object of class Human with attribute name as "Adam"
  Human firstman;

  firstman.name = "Adam";
  firstman.age = 30;

  // An object of class Human with attribute name as "Eve"
  Human firstwoman;

  firstwoman.name = "Eve";
  firstwoman.age = 28;

  firstman.IntroduceSelf();
  firstwoman.IntroduceSelf();

  return 0;
}
