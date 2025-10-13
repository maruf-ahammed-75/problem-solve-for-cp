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
vector<int> a;
vector<vector<int>> dp;

int SkipPoint(int id,int move=1){
    if(id>=n)return 0;

    if(dp[id][move]!=INT_MAX)return dp[id][move];

    int ans = INT_MAX;
    if(move){
        dp[id][move] = min(dp[id][move],SkipPoint(id+1,0) + a[id]); 
        if(id+1<n)dp[id][move] = min(dp[id][move],SkipPoint(id+2,0) + a[id]+a[id+1]);
    }
    else{
        dp[id][move] = min(dp[id][move],SkipPoint(id+1,1));
        if(id+1<n)dp[id][move] = min(dp[id][move],SkipPoint(id+2,1));
    }
    return dp[id][move];
}
void I_Am_Here() {
    cin >> n;
    a = vector<int>(n);
    dp = vector<vector<int>>(n,vector<int>(2,INT_MAX));
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout<<SkipPoint(0,1)<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
   

    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}