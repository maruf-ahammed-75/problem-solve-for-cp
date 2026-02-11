#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int connected_components=0;
int maximum_size=0;
struct DSU{
    vector<int>parent,com_size;
    
    DSU(int n){
        connected_components = n;
        maximum_size = 1;
        parent = vector<int>(n);
        com_size = vector<int>(n);
        for(int i=0 ; i<n ; i++){
            parent[i]=i;
            com_size[i]=1;
        }
    }
    
    int find_parent(int a){
        if(parent[a]==a){
            return a;
        }
        else{
            parent[a] = find_parent(parent[a]);
            return parent[a];
        }
    }
    
    bool Unite(int a,int b){
        a = find_parent(a);
        b = find_parent(b);
        if(a==b)return false;
        
        connected_components--;
        if(com_size[a]<com_size[b])swap(a,b);
        com_size[a]+=com_size[b];
        parent[b]=a;
        maximum_size = max(maximum_size,com_size[a]);
        
        return true;
    }
};

void I_Am_Here() {
    int n,m;
    cin>>n>>m;
    DSU dsu(n);

    while(m--){
        int u,v;
        cin>>u>>v;
        dsu.Unite(--u,--v);
        cout<<connected_components<<" "<<maximum_size<<"\n";
    }

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
