#include <bits/stdc++.h>
#define ll long long 
#define int long long 
using namespace std;
ll N=101,Wight=1e5 +10;
vector<ll>v(N);
vector<ll>w(N);
vector<vector<ll>>dp(N,vector<ll>(Wight));
ll n,W;
void I_Am_Here() {
    cin>>n>>W;
    for(int i=0 ; i<n ; i++){
        cin>>w[i]>>v[i];
    }

    for(int i=0 ; i<=n ; i++){
        for(int j=0 ; j<=W ; j++){
            if(i==0 || j==0 ){
                dp[i][j]=0;
            }
            else if(w[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=max(v[i-1]+dp[i-1][j-w[i-1]],dp[i-1][j]);
            }
        }
    }
    cout<<dp[n][W]<<endl; 
    
}

int32_t main() {

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    for(int i=0 ; i<N ; i++){
        fill(dp[i].begin(),dp[i].end(),-1);
    }
    int t=1;
    // cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
