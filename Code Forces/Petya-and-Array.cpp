#include <bits/stdc++.h>
#define ll long long
// #define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
#include <ext/pb_ds/assoc_container.hpp>//additional line
#include <ext/pb_ds/tree_policy.hpp>//additional line 

using namespace std;
using namespace __gnu_pbds;//additional line
typedef tree<int, null_type, greater_equal<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;


void I_Am_Here() {
    int n,m;
    cin>>n>>m;
    std::vector<int>a(n),presum(n+1,0);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    indexed_set s;
    int ans =0;
    s.insert(0);
    int sum=0;
    for(int i=0 ; i<n ; i++){
        sum+=a[i];
        ans+=s.order_of_key(sum-m);
        s.insert(sum);
    }
    cout<<ans<<endl;
    

}

int32_t main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);


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