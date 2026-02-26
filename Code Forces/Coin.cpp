#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int n;
int sum;
vector<int>a;
vector<int>dp;
const int mod = 1e9+7;

int way(int sum){
    
    if(sum==0)return 1;
    if(sum<0) return 0;
    if(dp[sum]!=-1)return dp[sum];
    
    int ans =0;
    for(int i=0 ; i<n ; i++){
        ans+=way(sum-a[i]);
        ans %= mod;
    }
    
    return dp[sum] = ans;
}


void I_Am_Here(int T) {
    cin>>n>>sum;
    a = vector<int>(n);
    dp = vector<int>(sum+1,-1);
    
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    cout<<way(sum)<<endl;
}

int32_t main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here(T);
    }
    return 0;
}
