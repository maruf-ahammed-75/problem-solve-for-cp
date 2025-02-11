#include <bits/stdc++.h>
#define ll long long
#define ff first 
#define ss second
#define endl '\n'

#include <ext/pb_ds/assoc_container.hpp>//additional line
#include <ext/pb_ds/tree_policy.hpp>//additional line 

using namespace std;
using namespace __gnu_pbds;//additional line

// Define an indexed set
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
void Solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    indexed_set s;
    for(int i=1 ; i<=n ; i++){
        s.insert(i);
    }
    while(!s.empty()){
        n = (n+k)%s.size();
        cout<<*s.find_by_order(n)<<' ';
        s.erase(*s.find_by_order(n));
    }
    cout<<endl;
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int ts = 1;
    // cin >> ts;
    while (ts--){
        Solve();
    }

    return 0;
}
