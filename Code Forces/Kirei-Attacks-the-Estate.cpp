#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

vector<int> ans;
vector<vector<int>> adj;
vector<int> a;

void dfs(int u, int p, int sum, int x, int y) {
    sum = a[u] - sum;
    ans[u] = sum + x;
    for (auto v : adj[u]) {
        if (v != p) {
            dfs(v, u, sum, max(sum, y) , x);  // ✅ Fixed parameter order
        }
    }
}

void I_Am_Here() {
    int n;
    cin >> n;
    a = vector<int>(n + 1);
    adj = vector<vector<int>>(n + 1, vector<int>());
    ans = vector<int>(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(0, -1, 0, 0, 0);
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int32_t main() {
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
