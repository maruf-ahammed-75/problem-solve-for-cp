#include <bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    ll n;
    ll x;
    cin>>n>>x;
    vector<pair<ll,ll>>a(n);
    for(int i=0 ; i<n ;i++){
        cin>>a[i].first>>a[i].second;
    }
    vector<vector<bool>> dp(n+1, vector<bool>(x+1, false));
    
    for(int i=0 ; i<=n ; i++){
        dp[i][0]=true;
     }
    for(int i=1 ; i<=n ; i++){
        ll A = a[i-1].ff;
        ll B = a[i-1].ss;
        
        for(int j=0 ; j<=x ; j++){
            dp[i][j]=dp[i-1][j];

            for(ll k=1 ; k<=B && j>=k*A ; k++){
                dp[i][j] = dp[i][j] || dp[i-1][j-k*A];
            }
        }
    }
    
    // for(int i=0 ; i<=n ; i++){
    //     for(int j=0 ; j<=x ; j++){
    //         cout<<dp[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }
    cout<<(dp[n][x] ? "Yes":"No")<<endl;

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
