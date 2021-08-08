#include <string>
#include <map>

template <typename keyType>
// same definition as std::greater<int>
struct ReverseSort{
    bool operator() (const keyType &key1, const keyType &key2){
        return (key1 > key2);
    }
};

int main(void){

    // map and multimap key of type int to value of type string
    std::map<int, std::string> mapIntToStr1;
    std::multimap<int, std::string> mmapIntToStr1;

    // map and multimap instantiated as a copy of another
    std::map<int, std::string> mapIntToStr2 (mapIntToStr1);
    std::multimap<int, std::string> mmapIntToStr2 (mmapIntToStr1);

    // map and multimap contructed given a part of another map or multimap
    std::map<int, std::string> mapIntToStr3 (mapIntToStr1.cbegin(), mapIntToStr1.cend());
    std::multimap<int, std::string> mmapIntToStr3 (mmapIntToStr1.cbegin(), mmapIntToStr1.cend());
    
    // map and multimap with a predicate that inverses sort order 
    std::map<int, std::string, std::greater<int>> mapIntToStr4 (mapIntToStr1.cbegin(), mapIntToStr1.cend());
    std::multimap<int, std::string, ReverseSort<int>> mmapIntToStr4 (mmapIntToStr1.cend(), mmapIntToStr1.cend());

    return 0;
}