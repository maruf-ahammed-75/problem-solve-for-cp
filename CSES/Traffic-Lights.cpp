#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here(){
    ll x,n;
    cin>>x>>n;
    vector<ll>a(n);
    for(int i=0 ; i<n ;i++){
        cin>>a[i];
    }

    multiset<ll>ans;
    set<ll>s;
    s.insert(0);
    s.insert(x);

    ans.insert(x);
    for(int i=0 ; i<n ; i++){
        s.insert(a[i]);
        auto it = s.find(a[i]);
        ll x = *prev(it);
        ll y = *next(it);
        ans.erase(ans.find(abs(x-y)));
        ans.insert(abs(x-a[i]));
        ans.insert(abs(y-a[i]));
        // for(auto i:ans)cout<<i<<' ';
        // cout<<endl;
        cout<<*ans.rbegin()<<endl;
    }
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
