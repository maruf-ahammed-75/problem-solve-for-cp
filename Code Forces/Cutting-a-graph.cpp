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
    int n,m,q;
    cin>>n>>m>>q;
    DSU dsu(n+1);
    
    vector<pair<int,int>>a(m);
    
    for(int i=0 ; i<m ; i++){
        cin>>a[i].ff>>a[i].ss;
    }
    
    vector<string>s(q);
    vector<pair<int,int>>qu(q);
    
    map<pair<int,int>,int>mp;
    
    for(int i=0 ; i<q ; i++){
        string c;
        int x,y;
        cin>>s[i]>>qu[i].ff>>qu[i].ss;
        if(s[i] == "cut"){
            mp[{qu[i].ff,qu[i].ss}]=1;
        }
    }
    
    for(int i=0 ; i<m ; i++){
        if(!mp[{a[i].ff,a[i].ss}] && !mp[{a[i].ss,a[i].ff}]){
            dsu.unite(a[i].ff,a[i].ss);
        }
    }
    
    vector<string>ans;
    
    for(int i=q-1 ; i>=0 ; i--){
        if(s[i]=="cut"){
            dsu.unite(qu[i].ff,qu[i].ss);
        }
        else{
            if(dsu.findParent(qu[i].ff) == dsu.findParent(qu[i].ss)){
                ans.push_back("YES");
            }
            else{
                ans.push_back("NO");
            }
        }
    }
    for(int i = ans.size() -1 ; i>=0 ; i--){
        cout<<ans[i]<<endl;
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
