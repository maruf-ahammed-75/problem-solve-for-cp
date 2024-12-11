#include <bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
vector<vector<ll>>a(100000+2324);
vector<bool>vis(a.size(),false);
vector<int>b(1000000);
//------------------using bfs-----------------
// int bfs(ll s,ll m){

//     queue<pair<ll,ll>>q;
//     vis[s]=1;
//     q.push({s,b[s]});
//     ll ans=0;

//     while(!q.empty()){
        
//         ll node = q.front().ff;
//         ll cat = q.front().ss;
        
//         q.pop();
//         // cout<<cat<<' '<<node<<endl;
//         if(cat>m){
//             // cout<<' '<<"continue"<<endl;
//             continue;
//         }
//         bool f=1;
        
//         for(ll x :a[node]){
//             if(!vis[x]){
//                 vis[x] = true;
//                 f=0;
//                 ll Ncat = (b[x]==1 ? cat+1:0);
//                 q.push({x,Ncat});
//                 // cout<<"x = "<<x<<' '<<"cat = "<<Ncat<<endl;
//             }
//         }
//         // cout<<endl;

//         if(node!=1 && f)ans++;
//         // cout<<"ans = "<<ans<<endl;
//     }
//     return ans;
// }


// -------------using dfs--------------

ll m;
ll ans=0;
void dfs(ll s,ll count){
    vis[s]=1;
    if(b[s]){
        count++;
    }
    else{
        count=0;
    }
    if(count>m){return;}
    bool f=1;
    for(ll x:a[s]){
        if(!vis[x]){
            f=0;
            dfs(x,count);
        }
    }
    if(f)ans++;
}
void I_Am_Here() {
    ll n;
    cin>>n>>m;
    for(int i=1 ; i<=n ; i++){
        cin>>b[i];
    }
    for(int i=0 ; i<n-1 ; i++){
        ll x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    dfs(1,0);
    cout<<ans<<endl;
}

int main() {    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    // cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}