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
vector<vector<int>>adj ;
vector<int>vis,downDis,upDis;

void dfsUp(int s){
    vis[s]=1;
    set<pair<int,int>>stor;
    for(auto i :adj[s]){
        if(!vis[i])
            stor.insert({downDis[i],i});
    }
    
    for(auto i : adj[s]){
        if(!vis[i]){
            stor.erase({downDis[i],i});
            int mx=0;
            if(stor.size()){
                mx = stor.rbegin()->first+2;
            }
            upDis[i] = max(mx,upDis[s]+1);
            stor.insert({downDis[i],i});
            dfsUp(i);
        }
    }
}

void dfsDown(int s){
    vis[s]=1;
    int ans = 0;
    for(auto i : adj[s]){
        if(!vis[i]){
            dfsDown(i);
            ans = max(ans,downDis[i]+1);
        }
    }
    downDis[s]=ans;
}
// 7
// 1 2 
// 1 3 
// 2 4 
// 2 5 
// 3 6 
// 6 7





void I_Am_Here() {
    cin>>n;
    vis = vector<int>(n+1,0);
    downDis = vector<int>(n+1,0);
    upDis = vector<int>(n+1,0);
    adj = vector<vector<int>>(n+1, vector<int>());
    for(int i=1,u,v ; i<=n-1 ; i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfsDown(1);
    
    // cout<<endl;
    // for(int i=1 ; i<=n ; i++){
    //     cout<<i<<"th node max distance = "<<downDis[i]<<endl;
    // }
    
    
    vis = vector<int>(n+1,0);
    dfsUp(1);

    for(int i=1 ; i<=n ; i++){
        cout<<max(downDis[i],upDis[i])<<" ";
    }
    cout<<endl;
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