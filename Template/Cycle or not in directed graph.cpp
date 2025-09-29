//cse round tirp 
#include <bits/stdc++.h>
#define ll long long
#define int long long unsigned int
#define intu long long unsigned int
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
vector<vector<int>>adj;
vector<int>vis;
vector<int>parent;
int n,m;
bool isCycle = 0;
int start,End;
void dfs(int s){
    vis[s]=1;
    for(auto child : adj[s]){
        if(!vis[child]){
            parent[child]=s;
            dfs(child);
            if(isCycle)return;
        }
        else if (vis[child]==1){
            isCycle=1;
            start = child;
            End = s;
            return;
        }
    }
    vis[s]=2;
}

void I_Am_Here() {
    cin>>n>>m;
    adj = vector<vector<int>>(n+1,vector<int>());
    vis = vector<int>(n+1,0);
    parent = vector<int>(n+1,0);

    for(int i=0,x,y ; i<m ; i++){
        cin>>x>>y;
        adj[x].push_back(y);
    }
    for(int i=1 ; i<=n ; i++){
        if(!vis[i]){
            dfs(i);
        }
        if(isCycle){
            break;
        }
    }
    if(!isCycle){
        cout<<"IMPOSSIBLE"<<endl;
        return ;
    }
    // for(int i=1 ; i<=n ; i++){
    //     cout<<i<<" = "<<parent[i]<<endl;
    // }
    vector<int>ans;
    ans.push_back(start);
    ans.push_back(End);
    while(start != End){
        End = parent[End];
        ans.push_back(End);
    }
    reverse(full(ans));
    cout<<ans.size()<<endl;
    for(auto i:ans){
        cout<<i<<' ';
    }
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
