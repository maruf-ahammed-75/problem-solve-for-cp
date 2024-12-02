#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
ll dp[100000+9999]={0};
ll dp2[100000+9999];
//--------using recursion it's right but get tle-------------
// ll Boredom(ll n){
//     if(n==0)return 0;
//     if(n==1)return dp[1];
//     ll a = Boredom(n-1);
//     return max(a,Boredom(n-2) + dp[n]*n);
// }
void I_Am_Here() {
    ll n;
    cin>>n;
    ll mx = INT_MIN;
    for(int i=0 ; i<n ; i++){
        ll x;
        cin>>x;
        dp[x]++;
        mx=max(mx,x);
    }
    dp2[0]=0;
    dp2[1]=dp[1];
    for(int i=2 ; i<=mx ; i++){
        ll a = dp2[i-1];
        dp2[i] = max(a,dp2[i-2] + dp[i]*i);
    }
    cout<<dp2[mx]<<endl;

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
