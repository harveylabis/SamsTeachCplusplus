/* LISTING 27.9 Reading Text from File HelloFile.txt Created in Listing 27.8 */

#include <iostream>
#include <fstream>
#include <string>

int main(void){

    std::ifstream myFile;
    myFile.open("HelloFile.txt", std::ios_base::in);

    if (myFile.is_open()){

        std::cout << "File open successful. It contains: " << std::endl << std::endl;
        std::string fileContents;

        /* while (myFile.good()){
            std::getline(myFile, fileContents); 
            // output the fileContents to cout
        }
        */ 

       // this is good:
       // Note: It is bad idea to test the stream on the outside and then read/write to it 
       // inside the body of the conditional/loop statement. This is because the act of reading 
       // may make the stream bad. It is usually better to do the read as part of the test.
       // https://stackoverflow.com/questions/4708335/istreamgetline-return-type
       
        while (std::getline(myFile, fileContents)){ // this returns a stream which can be converted to bool
            std::cout << fileContents << std::endl;
        }

        std::cout << std::endl << "Finished reading file, will close now" << std::endl;
        myFile.close();
    } else {
        std::cout << "open() failed: chech if file is in right folder" << std::endl;
    }




    return 0;
}