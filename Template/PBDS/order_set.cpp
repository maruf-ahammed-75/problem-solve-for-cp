#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>//additional line
#include <ext/pb_ds/tree_policy.hpp>//additional line 

using namespace std;
using namespace __gnu_pbds;//additional line

// Define an indexed set
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
//greater(x ar the koto gula boro value ache)
//greater_equal(for multiset)
// typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
//for multiset or same value count

// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
// s.find_by_order(1)->first
// s.order_of_key(make_pair(20, 2))

int main() {

    // Find by Order (find_by_order) ->O(lon(n));
    // Order of Key (order_of_key)->O(lon(n));
    // Deletion (erase)->O(lon(n));


    indexed_set s;
    // Insert elements
    s.insert(10);

    // Find the 2nd smallest element (0-based indexing)
    cout << "2nd smallest: " << *s.find_by_order(1) << "\n"; 

    // Find the number of elements less than 20
    cout << "Number of elements < 20: " << s.order_of_key(20) << "\n";

    // Check if an element exists
    if (s.find(15) != s.end()) {
        cout <<"15 is present in the set.\n";
    }

    // Erase an element
    s.erase(15);
    return 0;
}
