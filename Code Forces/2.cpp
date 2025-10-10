#include <bits/stdc++.h>
#define ll long long
#define int long long
#define pb push_back
#define all(a) a.begin(), a.end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

void solve() {
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 2; i * i <= n; i++) {
        int count = 0;
        while (n % i == 0) {
            n /= i;
            count++;
        }
        int j = 1;
        while (count >= j) {
            ans++;
            count -= j;
            j++;
        }
    }
    if (n > 1) ans++;
    cout << ans << '\n';
}

int32_t main() {
    fastio
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}