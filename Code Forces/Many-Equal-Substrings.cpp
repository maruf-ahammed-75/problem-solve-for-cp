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

    int n, k;
    string t;
    cin >> n >> k >> t;

    int overlap = 0;
    for (int len = 1; len < n; len++) {
        if (t.substr(0, len) == t.substr(n - len)) {
            overlap = len;
        }
    }

    string ans = t;
    string extra = t.substr(overlap); 
    for (int i = 1; i < k; i++) ans += extra;

    cout << ans << "\n";
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
