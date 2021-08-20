/* LISTING 27.8 Creating a New Text File and Writing Text into It Using ofstream */

#include <fstream>
#include <iostream>

int main(void){

    std::ofstream myFile;
    myFile.open("HelloFile.txt", std::ios_base::out);

    
    if (myFile.is_open()){
        std::cout << "File open successful" << std::endl;

        // writing a text to the file
        myFile << "My first text file!" << std::endl;
        myFile << "Hello file!";

        std::cout << "Finished writing to file, will close now" << std::endl;
        myFile.close();
    }


    return 0;

}