#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    ll n;
    cin>>n;
    ll size =0 ;
    vector<pair<ll,ll>>a;
    vector<ll>b(600000,0);
    for(int i=0 ; i<n ; i++){
        ll x;
        cin>>x;
        if(x==(i+1)){
            size++;
        }
        else{
            a.push_back({i+1,x});
            b[i+1]=x;
        }
    }
    ll ans = (size*(size-1))/2;
    // cout<<ans<<endl<<endl;
    for(auto i:a){
        ll in = i.first;
        ll val = i.second;
        if(in == b[val] && val == b[in]){
            ans++;
            b[val]=0;
            b[in]=0;
        }
        // cout<<in<<' '<<val<<endl;
        // cout<<b[in]<<' '<<b[val]<<endl;
    }
    // cout<<"sdf"a;
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
