#include <set>

int main(void){

    // a simple set or multiset of integers (using default sort predicate)
    std::set<int> setInts1;
    std::multiset<int> msetIns1;

    // set and multiset instantiated given a sort predicate
    std::set<int, std::greater<int>> setInts2;
    std::multiset<int, std::greater<int>> msetIns2;

    // creating one set from another, or part of another container
    std::set<int> setInts3 (setInts1);
    std::multiset<int> msetIns3 (setInts1.cbegin(), setInts1.end());

    return 0;
}