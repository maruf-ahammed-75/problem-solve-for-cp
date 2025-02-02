/////iteration
#include <bits/stdc++.h>
#define int long long
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here(){
    int n;
    cin>>n;
    vector<int>a(n),b(n),c(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    vector<vector<int>>dp(3,vector<int>(n));
    dp[0][0]=a[0];
    dp[1][0]=b[0];
    dp[2][0]=c[0];

    for(int i=1 ; i<n ; i++){
        dp[0][i]=max(dp[1][i-1],dp[2][i-1])+a[i];
        dp[1][i]=max(dp[0][i-1],dp[2][i-1])+b[i];
        dp[2][i]=max(dp[1][i-1],dp[0][i-1])+c[i];
        // cout<<dp[0][i]<<' '<<dp[1][i]<<' '<<dp[2][i]<<endl;
    }
    // for(int i=0 ; i<n ; i++){
    //     cout<<dp[0][i]<<' '<<dp[1][i]<<' '<<dp[2][i]<<endl;
    // }

    cout<<max(dp[0][n-1],max(dp[1][n-1],dp[2][n-1]))<<endl;
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