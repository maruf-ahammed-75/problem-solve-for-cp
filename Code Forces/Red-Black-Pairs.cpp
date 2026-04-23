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
string a,b;
vector<int>dp;
int count(int id){

    if(id>=n)return 0;
    if(dp[id]!=-1)return dp[id];

    //vartical
    int ans =0;
    int cost1=0;
    int cost2=INT_MAX;
    if(a[id]!=b[id])cost1 +=(1 + count(id+1));
    else cost1 += count(id+1);


    //horizontal
    if(id+1<n){
        int inside=0;
        if(a[id]!=a[id+1])inside += 1;
        if(b[id]!=b[id+1])inside += 1;
        inside += count(id+2);
        cost2 = inside;
    }

    
    return  dp[id] = min(cost1, cost2);
}





void I_Am_Here() {
    cin>>n>>a>>b;
    dp = vector<int>(200000+10000,-1);
    cout<<count(0)<<"\n";
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