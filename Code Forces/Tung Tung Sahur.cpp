#include <bits/stdc++.h>
using namespace std;

void solve() {
    string p, s;
    cin >> p >> s;

    int i = 0, j = 0;
    while (i < p.size() && j < s.size()) {
        if (p[i] != s[j]) {
            cout << "NO\n";
            return;
        }
        int cnt_p = 1;
        int cnt_s = 1;

        while (i + 1 < p.size() && p[i] == p[i + 1]) {
            cnt_p++;
            i++;
        }

        while (j + 1 < s.size() && s[j] == s[j + 1]) {
            cnt_s++;
            j++;
        }

        if (cnt_s < cnt_p || cnt_s > cnt_p * 2) {
            cout << "NO\n";
            return;
        }

        i++;
        j++;
    }

    if (i == p.size() && j == s.size()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}