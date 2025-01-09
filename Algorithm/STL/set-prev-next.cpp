#include <iostream>
#include <set>
#include <iterator> // For std::prev and std::next

int main() {
    std::set<int> s = {10, 20, 30, 40, 50};

   
    auto it = s.find(30); 
    auto prevIt = std::prev(it);
    auto nextIt = std::next(it);

    multiset<int> ms = {1, 2, 2, 3, 3, 3};
    ms.erase(ms.find(2));
    
}
