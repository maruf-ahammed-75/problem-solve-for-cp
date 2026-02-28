#include <bits/stdc++.h>
#define ll long long
// #define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define endl "\n"
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> indexed_set;

void I_Am_Here() {
    int n;
    cin>>n;
    int k;
    cin>>k;
    indexed_set s;
    for(int i=1 ; i<=n ; i++){
        s.insert(i);
    }
    int x = 0;
    while(s.size()){
        x += k;
        x%=s.size();
        cout<<*s.find_by_order(x)<<' ';
        
        s.erase(*s.find_by_order(x));
    }
    cout<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    int t = 1;
    // cin >> t;   
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}