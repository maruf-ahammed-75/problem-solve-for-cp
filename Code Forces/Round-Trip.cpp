#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
vector < vector < int > > adj;
vector < bool > vis;
vector < int > parent;
bool isCycle = 0;
// vector<int>next_state;
int stop;
int start;
void dfs(int s,int p){
    vis[s]=1;
    parent[s]=p;
    for(auto x : adj[s]){
        if(vis[x]){
            if(parent[s]==x){
                continue;//agar tar thake aysi
            }
            else{
                isCycle = 1;
                start = x;
                stop = s;
                return;
            }
        }
        else{
            dfs(x,s);
        }
    }
}
void I_Am_Here() {
    int n;
    cin>> n;
    int m;
    cin>>m;
    adj = vector < vector < int > >(n + 1, vector < int > ());
    vis = vector < bool > (n + 1, false);
    parent = vector < int > (n + 1, 0);


    for(int i=0 ; i<m ; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=1 ; i<=n ; i++){
        if(!vis[i]){
            dfs(i,0);
            if(isCycle) break;
        }
    }
    if(!isCycle){
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }
    int t = start;
    vector<int>ans;
    ans.push_back(start);
    while(start != stop){
        start = parent[start];
        ans.push_back(start);
    }
    ans.push_back(t);
    cout<<ans.size()<<endl;
    for(auto x : ans) cout<<x<<" ";
    cout<<endl;

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