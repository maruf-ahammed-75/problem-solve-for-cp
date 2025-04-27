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
vector<int>vis(1e5,0);
vector<int>level(1e5,0);
void bfs(int s){
    vis[s]=1;
    level[s]=1;
    queue<int>q;
    q.push(s);
    while(q.size()){
        int cur = q.front();
        q.pop();
        for(auto i:a[cur]){
           
            if(!vis[i]){
                level[i]=level[cur]+1;
                vis[i]=1;
                q.push(i);
            }
            
        }
    }
}
void I_Am_Here() {
    int n;
    
    cin>>n;
    vector<int>root;
    for(int i=1,u ;i<=n; i++){
        cin>>u;
        if(u==-1){
            root.push_back(i);
            continue;
        }
        a[u].push_back(i);
        a[i].push_back(u);
    }
    for(auto i:root){
        if(!vis[i]){
            bfs(i);
        }
    }
    
    // for(int i=1 ; i<=n ; i++)cout<<level[i]<<' ';
    cout<<*max_element(full(level))<<endl;
}
int32_t main() {
    int t=1;
    // cin>>t;
    for(int T=1 ; T<=t ; T++){
        I_Am_Here();
    }
    return 0;
}