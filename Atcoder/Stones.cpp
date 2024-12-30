#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    ll n,k;
    cin>>n>>k;
    vector<ll>a(k);
    for(int i =0 ; i<k ; i++)cin>>a[i];
    vector<ll>dp(n+1,0);
    for(int i=1 ; i<=n ; i++){
        for(auto x:a){
            if(i>=x){
                dp[i] = max(dp[i],i-dp[i-x]);
            }
        }
    }
    cout<<dp[n]<<endl;
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
