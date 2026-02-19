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
    vector<int>si,parent,val;
    
    DSU(int n){
        val = vector<int>(n+1,0);
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
        
        if(si[b]>si[a]){
            swap(a,b);
        }
        si[a]+=si[b];
        parent[b]=a;
        
        val[a]+=val[b];
        
        return true;
    }
    
    void add(int x, int value){
        x = findParent(x);
        val[x]+=value;
    }
    
};
void I_Am_Here() {
    int n,m;
    cin>>n>>m;
    DSU dsu(n);
    
    for(int i=0 ; i<m ; i++){
        string s;
        cin>>s;
        
        if(s == "add"){
            int x,y;
            cin>>x>>y;
            dsu.add(x,y);
        }
        else if(s == "join"){
            int x,y;
            cin>>x>>y;
            dsu.unite(x,y);
            
        }
        else{
            int x,y;
            cin>>x;
            cout<<dsu.val[dsu.findParent(x)]<<endl;
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
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}

