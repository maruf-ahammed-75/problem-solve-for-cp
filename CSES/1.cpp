#include <iostream>
#include <vector>
using namespace std;

// Function to determine if the exact amount X can be paid
string canPayExactly(int N, int X, vector<pair<int, int>>& coins) {
    // DP table
    vector<vector<bool>> dp(N + 1, vector<bool>(X + 1, false));
    dp[0][0] = true; // Base case: 0 yen can be achieved with no coins

    // Process each coin type
    for (int i = 1; i <= N; ++i) {
        int A = coins[i - 1].first;  // Value of the coin
        int B = coins[i - 1].second; // Maximum number of coins available

        for (int j = 0; j <= X; ++j) {
            // If we don't use the current coin type
            dp[i][j] = dp[i - 1][j];

            // Try using 1 to B coins of this type
            for (int k = 1; k <= B && j >= k * A; ++k) {
                if (dp[i - 1][j - k * A]) {
                    dp[i][j] = true;
                }
            }
        }
    }
    for(int i=0 ; i<=N ; i++){
        for(int j=0 ;j<=X ; j++)cout<<dp[i][j]<<' ';
        cout<<endl;
    }

    // Check if we can achieve exactly X yen
    return dp[N][X] ? "Yes" : "No";
}

int main() {
    int N, X;
    cin >> N >> X;

    vector<pair<int, int>> coins(N);
    for (int i = 0; i < N; ++i) {
        cin >> coins[i].first >> coins[i].second; // Read A and B
    }

    cout << canPayExactly(N, X, coins) << endl;

    return 0;
}
