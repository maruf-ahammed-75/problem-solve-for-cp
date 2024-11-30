#include <bits/stdc++.h>
#define int long long
#define ff first
#define ss second
#define fuint(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    int n;
    int a,b,c;
    cin>>n>>a>>b>>c;
    //----------------------using math----------------
    // n = xa+yb+zc
    // => xa = n - (yb+zc) find x,y,z
    // int ans=0;
    // for(int y=0 ; y*b <=n ; y++){
    //     for(int z=0 ; z*c<= n ; z++){
    //         int cal = n - (y*b+ z*c);
    //         if(cal>=0){
    //             if(cal%a==0){
    //                 ans=max(ans,(y+z+(cal/a)));
    //             }
    //         }
    //     }
    // }
    // cout<<ans<<endl;


    //-----------------------using dp----------------------

    vector<int>dp(n+1);
    int ans;
    int x,y,z;
    dp[0]=0;
    for(int i=1 ; i<=n ; i++){
        x=INT_MIN;
        y=INT_MIN;
        z=INT_MIN;
        if(i>=a){
            x=dp[i-a];
        }
        if(i>=b){
            y=dp[i-b];
        }
        if(i>=c){
            z=dp[i-c];
        }
        dp[i]=max(x,max(y,z))+1;
    }
    cout<<dp[n]<<endl;
}

signed main() {
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
