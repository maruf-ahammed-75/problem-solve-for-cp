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
    while(cin>>n && n){
        vector<int> st(n+12, -1);
        bool ok = true;

        for (int i = 0; i < n; i++) {
            int c;
            long long p;
            cin >> c >> p;

            int st_op = i + p;

            if (st_op < 0 || st_op >= n || st[st_op] != -1) {
                ok = false;
            } else {
                st[st_op] = c   ;
            }
        }

        if (!ok) {
            cout << "-1\n";
        } else {
            for (int i = 0; i < n; i++) {
                if (i) cout << " ";
                cout << st[i];
            }
            cout << "\n";
        }
    }
}

int32_t main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}
