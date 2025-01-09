#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    multiset<ll>s;
    for(int i=0 ; i<n ; i++){
        auto x = s.upper_bound(a[i]);
        if(x==s.end()){
            s.insert(a[i]);
        }
        else{
            s.erase(x);
            s.insert(a[i]);
        }
    }
    cout<<s.size()<<endl;
    
    
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    // cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
