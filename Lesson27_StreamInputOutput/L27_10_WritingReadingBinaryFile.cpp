/* LISTING 27.10 Writing a struct to a Binary File and Reconstructing It from the Same */

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

struct Human{

    std::string name;
    std::string DOB;
    int age;

    Human() {};
    Human (const std::string inName, int Age, const std::string inDOB) {
        name = inName;
        age = Age;
        DOB = inDOB;

    }
};

int main(void){
    
    Human Input("Harvey Abiagador", 20, "May 2001");
    std::ofstream fsOut ("MyBinary.bin", std::ios_base::out | std::ios_base::binary);

    if (fsOut.is_open()){
        std::cout << "Writing one object of Human to a binary file" << std::endl;
        fsOut.write(reinterpret_cast<const char*>(&Input), sizeof(Input));
        fsOut.close();
    }

    std::ifstream fsIn ("MyBinary.bin", std::ios_base::in | std::ios_base::binary);

    if (fsIn.is_open()){
        Human somePerson;
        fsIn.read((char*) &somePerson, sizeof(somePerson));
        
        std::cout << "Reading information from binary file: " << std::endl;
        std::cout << "Name = " << somePerson.name << std::endl;
        std::cout << "Age = " << somePerson.age << std::endl;
        std::cout << "Date of birth = " << somePerson.DOB << std::endl;
    }

    return 0;
}