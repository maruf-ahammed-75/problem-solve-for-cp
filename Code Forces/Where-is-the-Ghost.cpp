#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
const int mod = 1e9 + 7;
int n;
vector<int> a;
vector<vector<int>> dp;
int numberOfWay(int id,int product ){
    // cout<<id<<" "<<product<<endl;
    if(id == n){
        if(product%2520 == 0 )return 1;
        else return 0;
    }
    if(dp[id][product%2520]!=-1)return dp[id][product%2520];
    
    dp[id][product%2520] = 0;
    dp[id][product%2520] += numberOfWay(id+1,product%2520);
    dp[id][product%2520] %= mod;
    dp[id][product%2520] += numberOfWay(id+1,(product * a[id])%2520);
    dp[id][product%2520] %= mod;

    return dp[id][product%2520]%mod;
}

void I_Am_Here() {
    cin >> n;
    a = vector<int>(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    dp = vector<vector<int>>(n+1,vector<int>(2521,-1));
    cout<<numberOfWay(0,1)<<endl;
    
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
        I_Am_Here();
    }
    return 0;
}