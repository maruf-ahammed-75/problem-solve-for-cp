#include <bits/stdc++.h>
#define ll long long
using namespace std;

void I_Am_Here() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int> freq(10, 0);
    for (char c : s) {
        freq[c - '0']++;
    }

    int max_single = *max_element(freq.begin(), freq.end());

    // Check alternating pairs
    int max_alternating = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == j) continue;
            int count = 0;
            bool expect_i = true;
            for (char c : s) {
                if (expect_i && c - '0' == i) {
                    count++;
                    expect_i = false;
                } else if (!expect_i && c - '0' == j) {
                    count++;
                    expect_i = true;
                }
            }
            max_alternating = max(max_alternating, count / 2 * 2); // Only even-length pairs
        }
    }

    // Compute the result
    int max_len = max(max_single, max_alternating);
    cout << n - max_len << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
