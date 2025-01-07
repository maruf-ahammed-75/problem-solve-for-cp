#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#include <ext/pb_ds/assoc_container.hpp>//additional line
#include <ext/pb_ds/tree_policy.hpp>//additional line 

using namespace std;
using namespace __gnu_pbds;//additional line
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;

void I_Am_Here() {
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    indexed_set s;

    for(int i=0 ; i<k ;i++){
        s.insert({a[i],i});
    }
    // 
    // for(auto i:s)cout<<i.ff<< ' '<<i.ss<<endl;
    // cout<<"ans = ";
    cout<<s.find_by_order((k-1)/2)->first<<' ';
    // cout<<endl;
    s.erase({a[0],0});
    
    for(int i=1 ; i<n-k+1 ; i++){
        // cout<<"index = "<<i-1 <<' '<<k+i-1<<endl;
        s.insert({a[k+i-1],k+i-1});
        
        // for(auto i:s)cout<<i.ff<< ' '<<i.ss<<endl;
        
        // cout<<"ans = ";
        cout<<s.find_by_order((k-1)/2)->first<<' ';
        // cout<<endl;
        
        s.erase({a[i],i});
        
    }
    cout<<endl;
    
    // for(auto i:s)cout<<i.ff<<' '<<i.ss<<endl;
}

int32_t main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    int t=1;
    // cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
