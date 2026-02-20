#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

struct DSU {  
    vector<int>si,parent;
    int com=0;
    DSU(int n){
        com = n;
        si = vector<int>(n+1,1);
        parent = vector<int>(n+1);
        for(int i=0 ; i<=n ; i++){
            parent[i]=i;
        }
    }
    int findParent(int a){
        if(parent[a]==a)return a;
        else{
            parent[a] = findParent(parent[a]);
            return parent[a];
        }
    }
    
    bool unite(int a,int b){
        a = findParent(a);
        b = findParent(b);
        
        if(a==b)return false;
        com--;
        if(si[b]>si[a]){
            swap(a,b);
        }
        si[a]+=si[b];
        parent[b]=a;
        
        return true;
    }
};

void I_Am_Here() {
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>a(m);
    for(int i=0 ; i<m ; i++){
        cin>>a[i].ff>>a[i].ss;
    }

    int q;
    cin>>q;
    vector<int>remo(q);
    vector<int>order(m+1,0);
    for(int i=0 ; i<q ; i++){
        cin>>remo[i];
        remo[i]--;
        order[remo[i]]=1;
    }

    DSU dsu(n+1);
    for(int i=0 ; i<m ; i++){
        if(order[i]==0){
            dsu.unite(a[i].ff,a[i].ss);
        }
    }
    vector<int>ans(q);
    for(int i= q-1 ; i>=0 ; i--){
        ans[i]=dsu.com-1;
        dsu.unite(a[remo[i]].ff,a[remo[i]].ss);
    }
    for(int i=0 ; i<q ; i++){
        cout<<ans[i]<<"\n";
    }
}

int32_t main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}
