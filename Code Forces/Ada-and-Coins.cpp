#include <bits/stdc++.h>
// #define ll long long
// #define int long long
// #define ff first
// #define ss second
// #define full(a) a.begin(), a.end()
// #define Y cout<<"YES\n"
// #define N cout<<"NO\n"
using namespace std;
int n;
vector<int> a;

void I_Am_Here() {
    scanf("%d", &n);
    int m;
    scanf("%d", &m);
    a = vector<int>(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    bitset<100009>dp;
    dp[0]=1;
    for(auto i : a){
        dp = (dp | (dp << i));
    }
    vector<int>prefixSum(100009,0);
    for(int i=1 ; i<=100000 ; i++){
        prefixSum[i]=prefixSum[i-1]+dp[i];
    }
    while (m--){
        int a,b;
        scanf("%d %d", &a, &b);
        printf("%d\n", prefixSum[b]-prefixSum[a-1]);
    }
    
}

int32_t main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}