#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here(){
    ll n;
    cin>>n;
    stack<pair<ll,ll>>s;
    for(int i=1 ; i<=n ; i++){
        ll x;cin>>x;

        // cout<<"x = "<<x<<endl;
        while(!s.empty() && x <= s.top().ff){
            // cout<<"pop = ";
            // cout<<s.top().ff<<endl;
            s.pop();
        }
        if(!s.empty()){
            cout<<s.top().ss<<' ';
        }
        else{
            cout<<0<<' ';
        }
        s.push({x,i});
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
