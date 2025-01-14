#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here(){
    ll n,k;
    cin>>n>>k;

    vector<ll>a(n);
    for(auto &i:a)cin>>i;
    ll i=0,j=-1;
    map<ll,ll>m;
    ll ans = 0;
    while(i!=n){
        if(j<=n && m.size()<=k){
            j++;
            if(j<n)m[a[j]]++;
            cout<<a[j]<<"  map = "<<m.size()<<endl

        }
        if(m.size()>k || j==n){
            m[a[i]]--;
            cout<<"i = "<<i<<' '<<"j = "<<j<<endl;
            ans+=abs(j-i);
            if(m[a[i]]==0){
                m.erase(a[i]);
            } 
            cout<<a[i]<<' '<<ans<<endl;
            i++;
        }
        
    }
    cout<<ans<<endl;
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
