#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

// vector<bool>vis(10000,0);
// void dfs(int s){
//     vis[s]=1;
//     for(auto i :a[s]){
//         if(!vis[i]){
//             dfs(i);
//         }
//     }
// }
void I_Am_Here() {
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<vector<int>>a(n+1,vector<int>());
    for(int i=0,u,v; i<n-1 ; i++){
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    if(a[x].size()<=1){
        cout<<"Ayush"<<endl;
    }
    else{
        if(n&1){
            cout<<"Ashish\n"<<endl;
        }
        else{
            cout<<"Ayush"<<endl;
        }
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