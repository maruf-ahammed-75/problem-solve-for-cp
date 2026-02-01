#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;


void I_Am_Here() {
    int n;
    string s;
    cin>>s;
    n = s.size();

    vector<vector<int>>dp(n+1,vector<int>(4,0));

    for(int i =0 ; i<=n ; i++){
        dp[i][0]=1;
    }

    for(int i=1 ; i<n ; i++){
        if(s[i-1]=='v' && s[i]=='v'){
            dp[]
        }
        else{
            dp[i+1][1] = dp[i][1];
        }
    }


}

int32_t main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

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
