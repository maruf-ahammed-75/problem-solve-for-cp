#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    int n;
    cin>>n;4
    ll ans=0;
    
    ll sum=0;
    vector<pair<ll,ll>>a;
    vector<pair<ll,ll>>b;
    for(int i=0 ; i<n ; i++){
        ll x,y;
        cin>>x>>y;
        b.push_back({x,y});
        a.push_back({i,y-x});
    }
    sort(full(b));
    for(int i=0 ; i<n ; i++){
        // cout<<b[i].first<<' '<<b[i].second<<endl;
        sum+=b[i].first;
        ans+=(b[i].second-sum);
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
