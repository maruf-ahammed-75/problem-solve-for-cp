#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
vector<pair<int,int>>adj[1000000+100];
int n,a,b;
map<int,int>m;
bool ok;
void dfs0(int cur,int par,int val){
    if(cur == b)return;
    m[val]=1;
    for(auto i:adj[cur]){
        if(i.ff==par)continue;
        dfs0(i.ff,cur,i.ss^val);
    }
}
void dfs1(int cur,int par,int val){
    if(m[val] && cur != b){
        ok = 1;
    }
    for(auto i:adj[cur]){
        if(i.ff==par)continue;
        dfs1(i.ff,cur,i.ss^val);
    }
}
void I_Am_Here() {
    
    m.clear();
    cin>>n>>a>>b;
    for(int i=0 ; i<=n ; i++)adj[i].clear();
    for(int i=1 ; i<=n-1 ; i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    ok = 0;
    dfs0(a,-1,0);
    dfs1(b,-1,0);
    if(ok)cout<<"YES\n";
    else cout<<"NO\n";

}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    cin>>t;
    for(int T=1 ; T<=t ; T++){
        I_Am_Here();
    }
        

    return 0;
}
