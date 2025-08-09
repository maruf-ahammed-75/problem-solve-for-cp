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
vector<int>subtree;
vector<int>pos;

int dfs(int s){
    int si = 1;
    ans.push_back(s);
    pos[s] = ans.size();
    vis[s]=true;
    for(int v : adj[s]){
        if(!vis[v]){
            si += dfs(v); 
        }
    }
    subtree[s] = si;
    return si;
}
void I_Am_Here() {
    int n;
    int m;
    cin>>n>>m;
    adj = vector<vector<int>>(n+1,vector<int>());
    vis = vector<bool>(n+1,0);
    pos = vector<int>(n+1,0);
    ans = vector<int>();
    subtree = vector<int>(n+1,0);

    for(int i=2 ;i<=n ; i++){
        int x;
        cin>>x;
        adj[x].push_back(i);
    }
    
    
    dfs(1);
   

    for(int j=0 ; j<m ; j++){
        int x,y;
        cin>>x>>y;
       
        if(subtree[x]< y ){
            cout<<-1<<endl;
        }
        else{
            cout<<ans[pos[x]-1+y-1]<<endl;
        }
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