#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

int n;
int mod = 1e9 + 7;
vector<vector<int>> dp;


int ways(int num,int sum){
    
    if(dp[num][sum]!= -1)return dp[num][sum];
    if(num > n){
        dp[num][sum]=0;
        return dp[num][sum];
    }
    if(sum==0){
        dp[num][sum]=1;
        return dp[num][sum];
    }

    int ans = 0; 
    //take
    dp[num][sum]=0;
    if(sum-num>=0)dp[num][sum] += ways(num+1,sum-num);
    dp[num][sum] %= mod;

    //not take 
    dp[num][sum] += ways(num+1,sum);
    dp[num][sum] %= mod;

    return dp[num][sum];
}
void I_Am_Here() {
    cin>>n;
    
    int sum = (n*(n+1))/2;
    dp = vector<vector<int>>(n+10, vector<int>(sum/2+10, -1));
    if(sum%2){
        cout<<0<<endl;
    }
    else{
        cout<<ways(1,sum/2)<<endl;
    }
    
}
 
int32_t main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}