#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100005; // Updated to handle constraints
const int LOG = 17;       // Updated to handle up to 2 * 10^5
int a[MAX_N];
int m[MAX_N][LOG];        // m[i][j] stores the minimum in the range [i, i + 2^j - 1]
int bin_log[MAX_N];

int query(int L, int R) { // O(1)
    int length = R - L + 1;
    int k = bin_log[length];
    return min(m[L][k], m[R - (1 << k) + 1][k]);
}

int main() {
    // Step 1: Read input
    int n, q;
    cin >> n >> q;

    // Precompute logarithms
    bin_log[1] = 0;
    for (int i = 2; i <= n; i++) {
        bin_log[i] = bin_log[i / 2] + 1;
    }

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m[i][0] = a[i];
    }

    // Step 2: Preprocessing (O(N * log(N)))
    for (int k = 1; k < LOG; k++) {
        for (int i = 0; i + (1 << k) <= n; i++) {
            m[i][k] = min(m[i][k - 1], m[i + (1 << (k - 1))][k - 1]);
        }
    }

    // Step 3: Answer queries
    while (q--) {
        int L, R;
        cin >> L >> R;  // Read 1-based indices
        L--;            // Convert to 0-based indexing
        R--;
        cout << query(L, R) << endl;
    }

    return 0;
}
