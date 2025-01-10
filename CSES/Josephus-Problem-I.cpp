#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here(){
    ll n;
    cin>>n;
    queue<ll>a;
    for(int i=1 ; i<=n ; i++){
        a.push(i);
    }
    while(!a.empty()){
        ll x = a.front();
        a.pop();
        a.push(x);
        cout<<a.front()<<' ';
        a.pop();
        
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
