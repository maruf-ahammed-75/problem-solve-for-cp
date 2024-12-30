#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);
    vector<ll>c[n+1];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    for(int i=0 ; i<n ; i++){
        cin>>b[i];
        c[a[i]].push_back(b[i]);
    }
    ll ans=0;

    for(int i=1 ; i<=n ; i++){
        ll mx=INT_MIN;
        for(auto j:c[i]){
            ans+=j;
            mx=max(j,mx);
        }
        if(c[i].size())ans-=mx;
        
    }
    cout<<ans<<endl;
}

int main() {
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
