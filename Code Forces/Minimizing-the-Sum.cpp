#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int n;
int x;
vector<int> a;
vector<vector<int>> dp;

int minSum(int id , int k){
    
    if(id==n){
        return 0;
    }

    if(dp[id][k] != -1){
        return dp[id][k];
    }

    int ans = LLONG_MAX;
    //no
    ans = min(ans,minSum(id+1,k) + a[id]);

    //right
    if(id<n-1 && k>0 )ans = min(ans,minSum(id+1,k-1)+a[id+1]);

    //left
    if(id>0 && k>0)ans = min(ans,minSum(id+1,k-1)+a[id-1]);



    return dp[id][k] = ans;

}

void I_Am_Here() {
    cin>>n;
    cin>>x;
    a = vector<int>(n);
    dp = vector<vector<int>>(n+1,vector<int>(x+1,-1));
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<minSum(0,x)<<endl;
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
        I_Am_Here();
    }
    return 0;
}