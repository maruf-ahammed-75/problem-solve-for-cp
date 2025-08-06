#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
vector<bool>vis;
vector<int>ans;
vector<vector<int>>adj;
vector<int>in, out;
void dfs(int s){
    in[s]=ans.size();
    
    ans.push_back(s);
    vis[s]=true;

     sort(full(adj[s]));
    for(int v : adj[s]){
        if(!vis[v]){
            dfs(v);
            
        }
    }
    out[s]=ans.size()-1;
}
void I_Am_Here() {
    int n;
    int m;
    cin>>n>>m;
    adj = vector<vector<int>>(n+1,vector<int>());
    vis = vector<bool>(n+1,0);
    in = vector<int>(n+1,0);
    out = vector<int>(n+1,0);
    map<int,int>mp;
    adj[1].push_back(1);
    
    for(int i=2 ;i<=n ; i++){
        int x;
        cin>>x;
        adj[i].push_back(x);
        adj[x].push_back(i);
    }
    ans = vector<int>();
    dfs(1);
    for(int i=1 ; i<=n ; i++){
        cout<<i<<": "<<in[i]<<" "<<out[i]<<endl;
    }



    // for(auto i : ans){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    for(int j=0 ; j<m ; j++){
        int x,y;
        cin>>x>>y;
        
    }
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
