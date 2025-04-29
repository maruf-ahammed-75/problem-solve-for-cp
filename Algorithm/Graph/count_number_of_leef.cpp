//undricted cycle
#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
vector<vector<int>>a(1e6,vector<int>());
vector<int>vis(1e6,0);
vector<int>val(1e6,0);
void dfs(int s,int par){
    bool ok =1;
    for(auto x : a[s]){
        if(x==par){
            continue;
        }
        dfs(x,s);
        val[s]+=val[x];
        ok=0;
    }
    if(ok){
        val[s]=1;
    }
}
void I_Am_Here() {
    

    int n;
    cin>>n;
    for(int i=0 ; i<n-1 ; i++){
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    dfs(1,1);
    int q;
    cin>>q;
    while(q--){
        int u,v;
        cin>>u>>v;
        cout<<val[u]*val[v]<<"\n";
    }
    for(int i=0 ; i<=n ; i++){
        a[i].clear();
        val[i]=0;
    }
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