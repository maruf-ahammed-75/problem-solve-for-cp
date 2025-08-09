#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int n,m;
vector<int> a,b;
vector<vector<int>> dp;

int page(int i, int wt){
    if(dp[i][wt]!=-1)return dp[i][wt];
    if(i==n)return 0;

    
    if(wt-a[i]>=0)dp[i][wt] = max(dp[i][wt], page(i+1,wt-a[i])+b[i]);

    dp[i][wt] = max(dp[i][wt], page(i+1 , wt));

    return dp[i][wt];
}
void I_Am_Here() {
    cin>>n >> m;
    a = vector<int>(n);
    b = vector<int>(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    dp = vector<vector<int>>(n + 1, vector<int>(m + 1, -1));
    page(0,m);
    cout<<dp[0][m]<<endl;
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
