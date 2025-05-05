#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        long long minA = *min_element(a.begin(), a.end());
        long long moves = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] <= minA + k)
                moves += a[i] - minA;
        }

        cout << (moves % 2 ? "Tom\n" : "Jerry\n");
    }

    return 0;
}
