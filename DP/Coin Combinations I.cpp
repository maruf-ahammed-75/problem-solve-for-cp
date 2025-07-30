#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

//recursion
// int way(int sum){
//     if(sum==0)return 1;
//     if(sum<0)return 0;
//     int ans=0;
//     for(int i=0 ; i<n ; i++){
//         ans+=way(sum-a[i]);
//     }
//     return ans;
// }
void I_Am_Here() {
    int n;
    vector<int>a;
    int m;
    cin>>n>>m;
    vector<int>way(m+1,0);
    a = vector<int>(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    // cout<<way(m)<<endl;
    way[0]=1;
    for(int sum=1 ; sum<=m ; sum++){
        for(int i=0 ; i<n ; i++){
            if(sum-a[i]>=0)way[sum] = (way[sum-a[i]]+way[sum])%1000000007;
        }
    }
    cout<<way[m]<<endl;
}

int32_t main() {
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