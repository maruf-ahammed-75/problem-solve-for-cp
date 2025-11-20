#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define endl "\n"
#define Y cout<<"YES\n"
#define N cout<<"NO\n"

using namespace std;
const int mod = 1e9 + 7;
vector<int>dp(1000000+9,0);

int modpow(int a, int e,int MOD) {
    int r = 1;
    while (e) {
        if (e & 1) r = r * a % MOD;
        a = a * a % MOD;
        e >>= 1;
    }
    return r;
}
void I_Am_Here() {
    dp[0]=1;
    dp[1]=1;
    int n;
    cin>>n;
    // cout<<n<<endl;
    if(n%2==1){
        cout<<0<<endl;
        return;
    }
    for(int i=0 ; i<n/2 ; i++){
        // int num = (2*(2*i+1))%mod;
        // int den = (i+2)%mod;
        dp[i+1] = (((2*(2*i + 1))%mod*dp[i])%mod * modpow(i+2,mod-2,mod))%mod;
    }
    // for(int i=0 ; i<=n/2 ; i++){
    //     cout<<dp[i]<<" ";
    // }
    cout<<dp[n/2]<<endl;
    
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


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