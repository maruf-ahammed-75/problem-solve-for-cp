#include <bits/stdc++.h>
#define ll long long
#define int long long int
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
using namespace std;
const long long INF = 1e18;
vector<ll>dp(1000000);
// ll cost(int n,vector<int>&a){
    
// }
void I_Am_Here() {
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    vector<ll>a(1+n);
    for(int i=1 ; i<=n ; i++){
        cin>>a[i];
    }
    dp[0]=0;dp[1]=0;
    for(int i=2 ; i<=n ; i++){
        for(int j=1; j<=min(i-1,k) ; j++){
            dp[i]=min(dp[i],(abs(a[i]-a[i-j])+ dp[i-j] ));
        }
    }
    cout<<dp[n]<<endl;
}

int32_t main() {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    fill(full(dp),INF);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": ";
        I_Am_Here();
    }
    return 0;
}
