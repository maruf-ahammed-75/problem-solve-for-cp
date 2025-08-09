#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 1000000007;
int n, x;
vector<int> coins;
vector<vector<int>> dp;  // dp[index][sum]
 
// int solve(int index, int sum) {
//     if (sum == 0) return 1;
//     if (sum < 0 || index == n) return 0;
 
//     if (dp[index][sum] != -1) return dp[index][sum];
 
 
 
//     int take = solve(index, sum - coins[index]) % MOD;
//     int notTake = solve(index + 1, sum) % MOD;
 
//     return dp[index][sum] = (take + notTake) % MOD;
// }
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    cin >> n >> x;
    coins = vector<int>(n);
    for (int i = 0; i < n; i++) cin >> coins[i];

    dp = vector<vector<int>>(n + 1, vector<int>(x + 1, 0));
    // cout << solve(0, x) << "\n";



    for(int index=n ; index>=0; index--){
        for(int sum=0; sum<=x; sum++){
            if(sum==0){
                dp[index][sum] = 1;
                continue;
            }
            if(n==index){
                dp[index][sum] = 0;
                continue;
            }
            //take
            int take=0;
            if (sum - coins[index] >= 0) take = dp[index][sum - coins[index]];
            //not take
            int NotTake=dp[index + 1][sum];
            dp[index][sum] = (take + NotTake) % MOD; //not take
            
        }
    }
    cout<<dp[0][x]<<"\n";



}