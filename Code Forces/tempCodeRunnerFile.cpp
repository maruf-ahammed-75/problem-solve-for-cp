#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
string a,b;
int n;
vector<int>dp;
int totalcost(int i){
    if(i>=n)return 0;
    if(dp[i]!=-1)return dp[i];


    //virtical
    int cost = (a[i]!=b[i]);
    int ans = cost + totalcost(i+1);

    //horizontal
    if(i+1<n){
        int cost2=0;
        if(a[i]!=a[i+1])cost2++;
        if(b[i]!=b[i+1])cost2++;

        ans = min(ans,cost2 + totalcost(i+2) );
    }

    return dp[i]=ans; 
}
void I_Am_Here() {
    
    cin>>n;
    cin>>a>>b;
    dp = vector<int>(n+10,-1);
    cout<<totalcost(0)<<"\n";

    
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
