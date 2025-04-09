#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    int n,m;
    cin>>m;
    vector<vector<ll>>a(m,vector<ll>(500001));
    vector<ll>b(m);
    map<int,int>map;
    for(int i=0 ; i<m ; i++){
        cin>>b[i];
        for(int j=0 ; j<b[i] ; j++){
            cin>>a[i][j];
            map[a[i][j]]=i;
        }
    }
    vector<int>ans(m,0);
    for(auto i:map){
        ans[i.ss]= i.ff;
    }
    bool f=1;
    for(int i=0 ; i<m ; i++){
        if(ans[i]==0){
            f=0;
            break;
        }
    }
    if(f){
        for(int i=0 ; i<m ; i++){
            cout<<ans[i]<<" ";
        }   
    }
    else{
        cout<<-1;
    }
    cout<<endl;
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