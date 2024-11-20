#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100005; // Maximum size of the array
const int LOG = 17;       // log2(MAX_N) rounded up
int a[MAX_N];
int m[MAX_N][LOG]; // Sparse table for range minimum queries
int bin_log[MAX_N]; // Precomputed logarithm values

// Function to preprocess and build the sparse table
void preprocess(int n) {
    // Compute logarithmic values
    bin_log[1] = 0;
    for (int i = 2; i <= n; i++) {
        bin_log[i] = bin_log[i / 2] + 1;
    }

    // Build the sparse table
    for (int i = 0; i < n; i++) {
        m[i][0] = a[i]; // Initialize with the array values
    }

    // Build the sparse table
    for (int k = 1; k <= bin_log[n]; k++) {
        for (int i = 0; i + (1 << k) <= n; i++) {
            m[i][k] = min(m[i][k - 1], m[i + (1 << (k - 1))][k - 1]);
        }
    }
}

// Function to handle range minimum query
int query(int L, int R) {
    int k = bin_log[R - L + 1];
    return min(m[L][k], m[R - (1 << k) + 1][k]);
}

int main() {
    // Step 1: Input the size of the array
    int n;
    cin >> n;

    // Step 2: Read the array
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Step 3: Preprocess the array to build the sparse table
    preprocess(n);

    // Step 4: Input number of queries
    int q;
    cin >> q;

    // Step 5: Answer each query
    while (q--) {
        int L, R;
        cin >> L >> R;
        cout << query(L, R) << endl;
    }

    return 0;
}
