#include <bits/stdc++.h>
#define ll long long
#define int long long int
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
using namespace std;
const long long INF = 1e18;
vector<ll>dp(1000000);
void I_Am_Here() {
    ll n;
    cin>>n;
    vector<ll>a(n+1);
    for(int i=1 ; i<=n ; i++){
        cin>>a[i];
    }
    dp[0]=0;
    dp[1]=0;
    for(int i=2 ; i<=n ; i++){
        dp[i]=min( dp[i-1]+ abs(a[i]-a[i-1]),dp[i]);
        // cout<<dp[i-1]<<' '<<a[i]<<' '<<'-'<<a[i-1]<<' '<<abs(a[i]-a[i-1])<<' '<<dp[i]<<endl;
        if(i!=2){
            // cout<<"if= "<<' ';
            dp[i]=min(dp[i-2]+abs(a[i]-a[i-2]),dp[i]);
            // cout<<dp[i-2]<<' '<<a[i]<<' '<<'-'<<a[i-2]<<' '<<abs(a[i]-a[i-2])<<' '<<dp[i]<<endl;
        }
        // cout<<i<<' '<<dp[i]<<' '<<endl;
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
