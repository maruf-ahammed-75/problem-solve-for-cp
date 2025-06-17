#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));
        int max_val = 0;

        // Read the matrix and find the max value
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
                max_val = max(max_val, a[i][j]);
            }

        // Store all positions with the max value
        vector<pair<int, int>> max_positions;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                if (a[i][j] == max_val)
                    max_positions.emplace_back(i, j);

        int result = max_val;

        // Try all max positions as (r, c) for operation
        for (auto [r, c] : max_positions) {
            int curr_max = 0;

            // Simulate the matrix after reducing row r and column c
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    int val = a[i][j];
                    if (i == r || j == c) val--; // Decrease if in row or column
                    curr_max = max(curr_max, val);
                }
            }

            result = min(result, curr_max);
        }

        cout << result << '\n';
    }

    return 0;
}
