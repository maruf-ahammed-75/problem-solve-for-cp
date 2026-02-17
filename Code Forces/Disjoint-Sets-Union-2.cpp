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
    vector<int>si,parent,mx,mi;
    
    DSU(int n){
        si = vector<int>(n+1,1);
        parent = vector<int>(n+1);
        mx = vector<int>(n+1);
        mi = vector<int>(n+1);
        for(int i=0 ; i<=n ; i++){
            parent[i]=i;
            mx[i] = i;
            mi[i] = i;
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
        
        mx[a] = max(mx[a],mx[b]);
        mi[a] = min(mi[a],mi[b]);
        return true;
    }
};
void I_Am_Here() {
    int n,m;
    cin>>n>>m;
    DSU su(n);
    
    for(int i=0 ; i<m ; i++){
        string s;
        cin>>s;
        
        if(s == "union"){
            int x,y;
            cin>>x>>y;
            su.unite(x,y);
        }
        else{
            int x,y;
            cin>>x;
            x = su.findParent(x);
            cout<<su.mi[x]<<' '<<su.mx[x]<<' '<<su.si[x]<<endl;
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

