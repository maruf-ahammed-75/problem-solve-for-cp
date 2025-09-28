#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update> indexed_set;

#define int long long

void I_Am_Here() {
    int n;
    cin>>n;
    std::vector<int>a(n) ;
    indexed_set s;
    for(int i= 0; i<n ; i++){
        cin>>a[i];
        s.insert(i+1);
    }
    
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        x--;
        int y = *s.find_by_order(x);
        cout<<a[--y]<<' ';
        s.erase(y+1);
    }
}

int32_t main() {

    
    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}