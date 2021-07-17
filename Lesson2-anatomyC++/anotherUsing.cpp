// Preprocessor directive 
#include <iostream>

// Start of your program
int main(){

    /* 
     The difference between using namespace std and using std::cout is that the former allows
    all artifacts in the std namespace (cout, cin, etc.) to be used without explicit inclusion
    of the namespace qualifier std::. With the latter, the convenience of not needing to 
    disambiguate the namespace explicitly is restricted to only std::cout and std::endl.
    */
   
    using std::cout;
    using std::endl;

    /* Write to the screen using std::cout */
    cout << "Hello World" << endl;

    // Return a value to the OS
    return 0;
}