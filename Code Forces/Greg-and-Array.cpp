#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(n);
    for(int i=0 ; i<n ;i++)cin>>a[i];
    vector<pair<int,pair<int,int>>>op(m);
    vector<int>q(m+1,0);
    for(int i=0 ; i<m ; i++){
        cin>>op[i].ff>>op[i].ss.ff>>op[i].ss.ss;
    }
    
    for(int i=0 ; i<k ; i++){
        int x,y;
        cin>>x>>y;
        q[x-1]++;
        q[y]--;
    }
    for(int i=0 ; i<m ; i++){
        if(i){
            q[i]+=q[i-1];
        }
        cout<<q[i]<<' ';
    }
    cout<<endl;
    for(int i=0 ; i<k ; i++){
        if(i){
            q[i]+=q[i-1];
        }
    }
    vector<int>ans(n+1,0);
    for(int i=0 ; i<m ; i++){
        // ans[]
    }
    for(int i=0 ; i<n ; i++){
        // cout<<ans[i]<<' ';
        // cout<<a[i] + (q[i]*op[i])<<' ';
    }
    cout<<endl;



    
    
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t=1;    
    // cin>>t;
    for(int T=1 ; T<=t ; T++){
        I_Am_Here();
    }
        
    
    return 0;
}
