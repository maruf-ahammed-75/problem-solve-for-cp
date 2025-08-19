#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
#define endl "\n"
using namespace std;


int n,m;
vector<vector<int>>adj;
vector<bool>vis;
vector<int> parent;

void bfs(int s){
    queue<int> q;
    q.push(s);
    vis[s] = true;


    while(!q.empty()){
        int cur = q.front();
        q.pop();
        // cout<<cur<<' ';
        for(auto x : adj[cur]){
            if(!vis[x]){
                parent[x] = cur;
                vis[x]=1;
                q.push(x);
            }
        }
    }
}


void I_Am_Here() {
    cin>>n>>m;
    adj = vector<vector<int>>(n+1);
    vis = vector<bool>(n+1, false);
    parent = vector<int>(n+1, -1);

    for(int i=0 ; i<m ; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    // cout<<endl;
    // for(int i=1; i<=n; i++){
    //     cout<<i<<' '<<parent[i]<<endl;
    // }
    if(!vis[n]){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        vector<int>path;
        while(n!=-1){
            path.push_back(n);
            n = parent[n];
        }
        cout<<path.size()<<endl;
        for(int i=path.size()-1; i>=0; i--){
            cout<<path[i]<<' ';
        }
        cout<<endl;
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