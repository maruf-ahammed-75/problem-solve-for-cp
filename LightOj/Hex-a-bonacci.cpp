#include <bits/stdc++.h>
#define ll long long
#define int long long int
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
using namespace std;
const int M = 10000007;
int a, b, c, d, e, f;

// int fn(int n, vector<ll> &dp) {
//     if (n == 0) return a % M;
//     if (n == 1) return b % M;
//     if (n == 2) return c % M;
//     if (n == 3) return d % M;
//     if (n == 4) return e % M;
//     if (n == 5) return f % M;

//     if (dp[n] != -1) return dp[n];

//     dp[n] = (fn(n - 1, dp) + fn(n - 2, dp) + fn(n - 3, dp) + fn(n - 4, dp) + fn(n - 5, dp) + fn(n - 6, dp)) % M;
//     return dp[n];
// }

void I_Am_Here() {
    int n;
    cin >> a >> b >> c >> d >> e >> f >> n;
    vector<ll> dp(n + 1, 0);

    // cout << fn(n, dp) << endl;


    /////iterative 

    for(int i=0 ; i<= n ; i++){
        if( i == 0 ) {
			dp[i] = a;
			continue;
		}
	    if( i == 1 ) {
			dp[i] = b;
			continue;
		}
    	if( i == 2 ) {
			dp[i] = c;
			continue;
		}
	    if( i == 3 ) {
			dp[i] = d;
			continue;
		}
    	if( i == 4 ) {
			dp[i] = e;
			continue;
		}
	    if( i == 5 ) {
			dp[i] = f;
			continue;
		}

        dp[i] = dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4] + dp[i-5] + dp[i-6];
		dp[i] = dp[i] % M;
    }

    cout<<dp[n]%M<<endl;
}

int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ": ";
        I_Am_Here();
    }
    return 0;
}
