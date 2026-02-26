#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define endl "\n"
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int connected_components;
int maximum_size;
struct DSU {  
    vector<int> parent, component_size,rank;
    // O(N)
    DSU(int _n) {
        connected_components = _n;
        maximum_size = 1;
        parent = vector<int>(_n);
        component_size = vector<int>(_n);
        rank = vector<int>(_n);
        for(int i = 0; i < _n; i++) {
            parent[i] = i;
            component_size[i] = 1;
            rank[i] = 0;
        }
    }
    int find_parent(int a) {
        if(parent[a] == a) return a;
        else {
            int temp = find_parent(parent[a]);
            parent[a] = temp;
            return parent[a];
        }
    }

    // by size
    bool unite(int a, int b) {
        a = find_parent(a);
        b = find_parent(b);
        if(a == b) return false;
        connected_components--;

        // if(component_size[b] > component_size[a]) swap(a, b);
        // component_size[a] += component_size[b];
        // maximum_size = max(maximum_size, component_size[a]);
        parent[b] = a;  // now the components of a and b have been merged

        return true;
    }

    //by rank
    // bool unite(int a, int b) {
    //     a = find_parent(a);
    //     b = find_parent(b);
    //     if(a == b) return false;

    //     if(rank[a] < rank[b]) swap(a, b);
    //     parent[b] = a;
    //     component_size[a] += component_size[b];
    //     if(rank[a] == rank[b]) rank[a]++;
    //     return true;
    // }
        
};
void I_Am_Here() {
    int n;
    cin>>n;
    int q;
    cin>>q;
    vector<int> a(n+1);
    vector<vector<int>>stor(100000+10,vector<int>());

    DSU dsu(100000+11);
    for(int  i=1 ; i<=n ; i++){
        cin>>a[i];
        stor[a[i]].push_back(i);
        dsu.unite(a[i],i);
    }
    // cout<<dsu.find_parent(2)<<endl;
    while(q--){
        int aa;
        cin>>aa;
        if(aa == 1){
            int x,y;
            cin>>x>>y;
            for(int i=0 ; i<stor[x].size() ; i++){
                dsu.unite(y,stor[x][i]);

                stor[y].push_back(stor[x][i]);
                stor[x][i]=0;
            }

        }
        else{
            int x;
            cin>>x;
            cout<<dsu.find_parent(x)<<endl;
        }
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
    cin >> t;   
    for (int T = 1; T <= t; T++) {
        cout<<"Case "<<T<<":\n";
        I_Am_Here();
    }
    return 0;
}