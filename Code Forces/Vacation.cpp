#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
vector<int>a,b,c;
vector<vector<int>>dp;
int n;

int point(int id,int use){
    
    if(id==n)return 0;
    
    if(dp[id][use]!=-1)return dp[id][use];
    
    if(use!=1){
       dp[id][use] = max(dp[id][use], point(id+1,1)+a[id]);
    }
    if(use!=2){
        dp[id][use] = max(dp[id][use], point(id+1,2)+b[id]);
    }
    if(use!=3){
        dp[id][use] = max(dp[id][use],point(id+1,3)+c[id]);
    }
    
    return dp[id][use];
}

void I_Am_Here() {
    cin>>n;
    a = vector<int>(n);
    b = vector<int>(n);
    c = vector<int>(n);
    
    dp = vector<vector<int>>(n+1,vector<int>(4,-1));
    
    for(int i=0 ; i<n ; i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    cout<<point(0,0)<<endl;
    
    
}

int32_t main() {
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
