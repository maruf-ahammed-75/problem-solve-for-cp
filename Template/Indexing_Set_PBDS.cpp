#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update> indexed_set;

int main() {
    
    indexed_set s;
    s.insert(5);s.insert(1);s.insert(10);s.insert(7);
    // number of elements // 0 bease index
    cout << "Rank of 7: " << s.order_of_key(7) << "\n";
    
    int k = 0;// (0-indexed)
    if (k >= 0 && k < s.size()) {
        cout << *s.find_by_order(k) << "\n";
    }
    // erase x
    s.erase(5);

    return 0;
}