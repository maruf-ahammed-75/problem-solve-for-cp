#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 50005; // Maximum size of the array
const int LOG = 16;      // log2(MAX_N) rounded up
int H[MAX_N];
int m[MAX_N][LOG];       // Sparse table for range maximum queries
int bin_log[MAX_N];

// Function to preprocess and build the sparse table
void preprocess(int n) {

    bin_log[1] = 0;
    for (int i = 2; i <= n; i++) {
        bin_log[i] = bin_log[i / 2] + 1;
    }

    // Build the sparse table
    for (int i = 1; i <= n; i++) { // Note: 1-based indexing
        m[i][0] = H[i];
    }
    //// Build the sparse table
    for (int k = 1; k <= bin_log[n]; k++) {
        for (int i = 1; i + (1 << k) - 1 <= n; i++) {
            m[i][k] = max(m[i][k - 1], m[i + (1 << (k - 1))][k - 1]);
        }
    }
}


int query(int L, int R) {
    int k = bin_log[R - L + 1];
    return max(m[L][k], m[R - (1 << k) + 1][k]);
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> H[i];
    }
    preprocess(n);

    
    int ans = 0;
    while (m--) {
        int A, B;
        cin >> A >> B;
        if (A > B) swap(A, B); 

        if (B - A <= 1) ans++;
         else {
            // Check if the maximum height in range [A+1, B-1] is <= H[A]
            int max_hill = query(A + 1, B - 1);
            if (max_hill <= H[A]) ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
