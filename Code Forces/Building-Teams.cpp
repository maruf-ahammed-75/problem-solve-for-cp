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
vector<int>par;
vector<bool>vis;
bool f=0;
vector<int>ans;
// void dfs(int i){
//     vis[i]=1;
//     for(auto x:adj[i]){
//         if(!vis[x]){
//             par[x]=i;
//             if(ans[i]==1){
//                 ans[x]=2;
//             }
//             else{
//                 ans[x]=1;
//             }
//             dfs(x);
//         }
//         else if(par[i]!=x){
//             if(ans[x]==ans[i])f=1;
//         }
//     }
// }

void bfs(int i){
    queue<int>q;
    q.push(i);
    vis[i]=1;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(auto nbr:adj[cur]){
            if(!vis[nbr]){
                par[nbr]=cur;
                vis[nbr]=1;
                if(ans[cur]==1){
                    ans[nbr]=2;
                }
                else{
                    ans[nbr]=1;
                }
                q.push(nbr);
            }
            else{
                if(ans[nbr]==ans[cur])f=1;
            }
        }
    }
}
void I_Am_Here() {
    cin>>n>>m;
    ans = vector<int>(n+1, 0);
    adj = vector<vector<int>>(n+1);
    par = vector<int>(n+1, -1);
    vis = vector<bool>(n+1, false);
    for(int i=0 ; i<m ; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1 ; i<=n ; i++){
        if(!vis[i]){
            ans[i]=1;
            bfs(i);
        }
    }
    if(f){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        for(int i=1 ; i<=n ; i++){
            cout<<ans[i]<<" ";
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
