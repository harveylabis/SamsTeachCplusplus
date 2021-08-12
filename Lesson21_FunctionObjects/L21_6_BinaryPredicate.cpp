#include <algorithm>
#include <string>
#include <iostream>

class CompareStringNoCase{
    public:
        bool operator() (const std::string &str1, const std::string &str2) const {
            std::string str1LowerCase;
            std::string str2LowerCase;
            
            // Assign space
            str1LowerCase.resize(str1.size());
            str2LowerCase.resize(str2.size());

            // Convert every character to the lower case
            // str1
            std::transform(str1.begin(), str1.end(), str1LowerCase.begin(), ::tolower);

            // str2
            std::transform(str2.begin(), str2.end(), str2LowerCase.begin(), ::tolower);
            
            
            // std::cout << (str1LowerCase < str2LowerCase) << std::endl;
            return (str1LowerCase < str2LowerCase);
        }
};