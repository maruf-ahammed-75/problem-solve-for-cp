#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

vector<vector<int>> adj;
vector<bool >vis(1e6,false);
vector<int>dp;
int mx = -1;
int dfs(int s){
    if(vis[s])return dp[s];
    vis[s]=1;
    // cout<<s<<" "<<level<<endl;
    int mx = 0;
    for(int v:adj[s]){
        mx = max(mx,1+dfs(v));
    }
    return dp[s] = mx;
}

void I_Am_Here() {
    int n, m;
    cin >> n >> m;
    adj = vector<vector<int>>(n+1);
    dp = vector<int>(n+1, 0);
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    int ans = 0;

    for(int i=1 ; i<=n ; i++){
        ans = max(ans, dfs(i));
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
