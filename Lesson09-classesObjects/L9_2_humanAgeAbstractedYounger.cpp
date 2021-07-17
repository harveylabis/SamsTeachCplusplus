#include <iostream>

class Human {
    private:
        // Private member data;
        int age;
    
    public:
        void SetAge(int inputAge){
            age = inputAge;
        }

        // Human lies about his/her age (if over 30)
        int GetAge(){
            if (age > 30)
                return (age - 2);
            else
                return age;
        }
};

int main(void){
    Human firstMan;
    firstMan.SetAge(35);
    // firstMan.age = 13; throws error because it is a private var

    Human firstWoman;
    firstWoman.SetAge(22);

    std::cout << "Age of firstMan " << firstMan.GetAge() << std::endl;
    std::cout << "Age of firstWoman " << firstWoman.GetAge() << std::endl;

    return 0;
}