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
vector<vector<int>> adj;
vector<bool> vis;
vector<int> dist;
void dfs(int s){
    vis[s]=1;
    for(auto x:adj[s]){
        if(!vis[x]){
           dist[x]=dist[s]+1;
           dfs(x); 
        }
    }
}
void I_Am_Here() {
    cin>>n;
    adj = vector<vector<int>>(n+1);
    vis = vector<bool>(n+1,false);
    dist = vector<int>(n+1,0);
    for(int i=0 ; i<n-1 ; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    int max = -1;
    int node = 1;
    for(int i=1 ; i<=n ; i++){
        if(dist[i]>max){
            max = dist[i];
            node = i;
        }
        // cout<<i<<" = "<<dist[i]<<endl;
    
    }
    dist = vector<int>(n+1,0);
    vis = vector<bool>(n+1,false);
    
    dfs(node);
    max = -1;
    for(int i=1 ; i<=n ; i++){
        if(dist[i]>max){
            max = dist[i];
            node = i;
        }
        // cout<<i<<" = "<<dist[i]<<endl;
    
    }
    cout<<max<<endl;

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