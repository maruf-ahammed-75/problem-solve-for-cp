#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
int n,k;
bool find(int m,vector<int>&a){
    int curSum=0;
    int ans =1;
    for(int i=0 ; i<n ; i++){
        curSum+=a[i];
        if(curSum>m){
            ans++;
            curSum=a[i];
        }
    }
    // cout<<ans<<endl;
    return ans<=k;
}
void I_Am_Here(){
    
    int n,m,k;
    cin>>n>>m>>k;

    vector<int>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }

    vector<pair<int,pair<int,int>>>p(m);
    for(int i=0 ; i<m ; i++){
        cin>>p[i].ff>>p[i].ss.ff>>p[i].ss.ss;
    }
    vector<int>q(m+1,0);
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
        // cout<<q[i]<<' ';
    }
    // cout<<endl;

    vector<int>ans(n+1,0);
    for(int i=0 ; i<m ; i++){
        int f = p[i].ff;
        int s = p[i].ss.ff;
        int val = p[i].ss.ss;

        ans[f-1]+=(q[i]*val);
        ans[s]-=(q[i]*val);
        // cout<<ans[f-1]<<' '<<ans[s]<<endl;
    }
    for(int i=0 ; i<n ; i++){
        if(i){
            ans[i]+=ans[i-1];
        }
        cout<<a[i]+ans[i]<<' ';
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
    while (t--) {
        I_Am_Here();
    }
    return 0;
} 