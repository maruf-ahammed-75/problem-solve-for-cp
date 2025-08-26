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
vector<vector<pair<int,int>>>a;
vector<int> ans;

void dijkstra(int src){
    ans[src]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>> , greater<pair<int,int>>>q;
    
    q.push({0,src});
    
    
    while(!q.empty()){
        pair<int,int>cur = q.top();
        q.pop();
        
        if(cur.ff>ans[cur.ss])continue;
        
        for(auto x : a[cur.ss]){
            if(ans[cur.ss] + x.ss < ans[x.ff]){
                ans[x.ff] = ans[cur.ss] + x.ss;
                q.push({ans[x.ff],x.ff});            
            }
        }
    }
}
void I_Am_Here() {
    cin >> n >> m;
    a = vector<vector<pair<int,int>>>(n+1, vector<pair<int,int>>());
    ans = vector<int>(n+1, LLONG_MAX);
    for (int j = 0; j < m; j++) {
        int x,y,z;
        cin>>x>>y>>z;
        a[x].push_back({y,z});
    }
    
    dijkstra(1);
    for(int i=1 ; i<=n ; i++){
        cout << ans[i] << " ";
    }
    cout<<"\n";
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