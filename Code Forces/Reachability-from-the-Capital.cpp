#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int n,m,s;
vector<vector<int>>adj;
vector<bool>vis;
void dfs(int s){
    vis[s]=1;
    for(auto v :adj[s]){
        if(!vis[v])dfs(v);
    }
}

void I_Am_Here() {
    stack<int>st;
    cin>>n>>m>>s;
    adj = vector<vector<int>>(n+1,vector<int>());
    vis = vector<bool>(n+1,false);
    for(int i=0 ; i<m ; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    dfs(s);
    int ans=0;
    for(int i=1 ; i<=n ; i++){
        if(!vis[i]){
            dfs(i);
            st.push(i);
        }
    }
    vis = vector<bool>(n+1,false);
    dfs(s);
    while(!st.empty()){
        int x = st.top();
        if(!vis[x]){
            ans++;
            dfs(x);
        }
        st.pop();
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