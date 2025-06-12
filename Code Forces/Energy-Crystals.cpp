#include <iostream>
#include <vector>
using namespace std;

// Function to output operations to rotate row `i` by `shift` positions
void applyCyclicShift(int i, int shift, int n, vector<tuple<int, int, int>> &ops) {
    if (shift == 0) return;

    // Reverse first part [1, shift]
    ops.emplace_back(i, 1, shift);
    // Reverse second part [shift+1, n]
    ops.emplace_back(i, shift + 1, n);
    // Reverse the whole row [1, n]
    ops.emplace_back(i, 1, n);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<tuple<int, int, int>> ops;

        for (int i = 1; i <= n; ++i) {
            int shift = (i - 1) % n;
            applyCyclicShift(i, shift, n, ops);
        }

        // Output number of operations
        cout << ops.size() << '\n';
        for (auto &[row, l, r] : ops) {
            cout << row << " " << l << " " << r << '\n';
        }
    }

    return 0;
}
