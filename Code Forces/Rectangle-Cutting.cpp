
 
#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int n,m;
vector<vector<int>>dp;
int Rectangle(int a,int b){

    if(a==b)return 0;
    // if(a<=0 || b<=0)return INT_MAX;
    if(dp[a][b]!=INT_MAX)return dp[a][b];

    


    for(int i=1 ; i<a ; i++){
        dp[a][b] = min(dp[a][b],1 + Rectangle(a-i,b) + Rectangle(i,b));

    }
    for(int i=1 ; i<b ; i++){
        dp[a][b] = min(dp[a][b],1 + Rectangle(a,b-i) + Rectangle(a,i));
    }

    return dp[a][b];
    
}

void I_Am_Here() {
    cin>>n>>m;
    dp = vector<vector<int>>(n+1,vector<int>(m+1,INT_MAX));
    cout<<Rectangle(n,m)<<endl;
    vector<int>c;
}
 
int32_t main() {
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