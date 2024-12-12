#include <bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    ll n;
    cin>>n;
    map<ll,ll>m;
    for(int i=0 ; i<n ; i++){
        ll x;
        cin>>x;
        m[x]++;
    }
    ll ans=0;
    if(m.begin()->first == prev(m.end())->first){
        ans=((m.begin()->second-1)*m.begin()->second)/2;
    }
    else ans = (m.begin()->second*prev(m.end())->second);
    cout<<abs(m.begin()->first - prev(m.end())->first)<<' '<<ans<<endl;
    // cout<<m.begin()->first<<' '<<m.begin()->second<<endl;
    // cout<<prev(m.end())->first<<' '<<prev(m.end())->second<<endl;
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
