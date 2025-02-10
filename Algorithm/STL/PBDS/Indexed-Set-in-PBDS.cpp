#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>//additional line
#include <ext/pb_ds/tree_policy.hpp>//additional line 

using namespace std;
using namespace __gnu_pbds;//additional line

// Define an indexed set
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
// s.find_by_order(1)->first
// s.order_of_key(make_pair(20, 2))
// s.erase(make_pair(15, 3));
int main() {

    // Find by Order (find_by_order) ->O(lon(n));
    // Order of Key (order_of_key)->O(lon(n));
    // Deletion (erase)->O(lon(n));


    indexed_set s;
    // Insert elements
    s.insert(10);
    s.insert(20);
    s.insert(15);
    s.insert(25);

    // Find the 2nd smallest element (0-based indexing)
    cout << "2nd smallest: " << *s.find_by_order(1) << "\n"; // Output: 15

    // Find the number of elements less than 20
    cout << "Number of elements < 20: " << s.order_of_key(20) << "\n"; // Output: 2

    // Check if an element exists
    if (s.find(15) != s.end()) {
        cout << "15 is present in the set.\n";
    }

    // Erase an element
    s.erase(15);
    cout << "Number of elements < 20 after erasing 15: " << s.order_of_key(20) << "\n"; // Output: 1

    return 0;
}
