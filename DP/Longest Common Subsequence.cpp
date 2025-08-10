#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int n, m;
vector<int> a,b;
vector<vector<int>> dp;
vector<vector<pair<int , int>>> next_state;

int lcs(int i,int j){

    if(dp[i][j]!= -1) return dp[i][j];
    if(i==n || j==m) return 0;

    if(a[i]==b[j]){
        next_state[i][j] = {i + 1, j + 1};
        dp[i][j] = 1 + lcs(i+1,j+1);
    }
    else{
        int x = lcs(i+1,j);
        int y = lcs(i,j+1);
        if(x>y){
            next_state[i][j] = {i + 1, j};
        }
        else{
            next_state[i][j] = {i, j + 1};
        }
        dp[i][j] = max(dp[i][j],x);
        dp[i][j] = max(dp[i][j],y);
    }
    return dp[i][j];
}
void I_Am_Here() {
    cin >> n >> m;
    a = vector<int>(n);
    b = vector<int>(m);
    dp = vector<vector<int>>(n + 1, vector<int>(m + 1, -1));
    next_state = vector<vector<pair<int, int>>>(n + 1, vector<pair<int, int>>(m + 1, {0, 0}));

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    cout << lcs(0,0) << endl;

    int i=0 , j=0;
    while(i<n && j<m){
        int nxPosI=next_state[i][j].ff;
        int nxPosJ=next_state[i][j].ss;
        if(a[i]==b[j] && nxPosI==i+1 && nxPosJ==j+1){
            cout << a[i] << " ";
        }
        i = nxPosI;
        j = nxPosJ;
    }
    cout << endl;
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
