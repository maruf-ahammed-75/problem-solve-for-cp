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
vector<int>stor;
void dfs(int i){
    vis[i]=1;
    for(auto x : adj[i]){
        if(!vis[x]){
            dfs(x);
        }
    }
}
void I_Am_Here() {
    cin>>n>>m;
    adj = vector<vector<int>>(n+1);
    vis = vector<bool>(n+1, false);
    vector<int>ans;
   for(int i=0 ; i<m ; i++){
       int u,v;
       cin>>u>>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
   }
   for(int i=1 ; i<=n ; i++){
       if(!vis[i]){
           dfs(i);
           stor.push_back(i);
       }
   }
//    for(auto i:stor){
//         cout<<i<<" ";
//    }
    cout<<stor.size()-1<< endl;
   for(int i=1 ; i<stor.size() ; i++){
       cout<<stor[0]<<" "<<stor[i]<<endl;
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