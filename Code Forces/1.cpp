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
vector<vector<int>>adj;
vector<bool>vis;
vector<int>dp;


int dfs(int s){

    if(vis[s])return dp[s];

    int mx = 0;
    vis[s]=1;
    for(auto v:adj[s]){
        mx =max(mx,dfs(v)+1);
    }
    return dp[s]=mx;
}
void I_Am_Here() {
    int ans=0;
    cin>>n>>m;
    adj = vector<vector<int>>(n+1,vector<int>());
    for(int i=0 ; i<m ; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    vis = vector<bool>(n+1,false);
    dp = vector<int>(n+1,0);

    for(int i=1 ; i<=n ; i++){
        // cout<<i<<" = "<<dfs(i)<<endl;
        ans = max(ans,dfs(i));
    }
    cout<<ans<<endl;
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
