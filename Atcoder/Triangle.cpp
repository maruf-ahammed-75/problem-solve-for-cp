#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here(){
    ll n,m;
    cin>>n>>m;
    vector<ll>a[n+10];
    for(int i=0 ; i<m ; i++){
        ll x,y;cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
//     for(int i=1 ; i<=n ; i++){
//         cout<<i<< " = ";
//         for(auto j:a[i]){
//             cout<<j<<' ';
//         }
//         cout<<endl;
//     }
ll ans=0;
    for(int i=1 ; i<=n ; i++){
        for(int j=i+1 ; j<=n ; j++){
            for(int k=j+1 ; k<=n ; k++){
                ll x=0,y=0,z=0;
                for(auto b:a[i]){
                    if(b==j || b==k)x++;
                }
                for(auto b:a[j]){
                    if(b==i || b==k)x++;
                }
                for(auto b:a[k]){
                    if(b==j || b==i)x++;
                }
                if(x==6)ans++;
            }
        }
    }
    cout<<ans<<endl;
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
