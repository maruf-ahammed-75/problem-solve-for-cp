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
int x;
vector<int> a;
vector<vector<int>> dp;

int minSum(int id , int k){
    
    if(id==n){
        return 0;
    }
    
    if(dp[id][k] != INT_MAX){
        return dp[id][k];
    }
    int ans = LLONG_MAX;
    
    //no change
    ans = min(ans , minSum(id+1 , k)) + a[id];

    //right change
    for(int i= id+1 ; i<n && k>0 ; i++){
        ans = min(ans , minSum(i , k-1)) + a[id];
    }

    //left change
    for(int i= id-1 ; i>=0 && k>0 ; i--){
        ans = min(ans , minSum(i , k-1)) + a[id];
    }

    return dp[id][k] = ans;

}

void I_Am_Here() {
    cin>>n;
    cin>>x;
    a = vector<int>(n);
    dp = vector<vector<int>>(n+1,vector<int>(x+1,INT_MAX));
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<minSum(0,x)<<endl;
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