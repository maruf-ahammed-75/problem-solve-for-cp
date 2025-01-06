#include <bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
vector<ll>a(1000000);
ll n, x;
vector<vector<bool>>dp(1000,vector<bool>(100000,false));
bool Check(){
    for(int i=0 ; i<n ; i++){
        dp[i][0]=1;
    }
    for(int i=1; i<=n ; i++){
        for(int j=1 ; j<=x ; j++){
            if(j<a[i-1]){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-1]];
            }
        }
    }
    return dp[n][x];
}
void I_Am_Here() {
    
    cin>>n>>x;
    
    for(int i=0 ; i<n ;i++){
        cin>>a[i];
    }
    cout<<(Check()?"YES":"NO")<<endl;
}

int main() {

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
