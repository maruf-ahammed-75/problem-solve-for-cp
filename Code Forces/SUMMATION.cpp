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

vector<int>fact(1e3+1,1);
const int mod = 100000007;

int binpow(int a, int b, int m=100000007) {
    a %= m;
    int res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

void I_Am_Here() {
    int n;
    cin>>n;
    vector<int>a(n);
    int sum = 0;
    for(int i =0 ; i<n ; i++){
        cin>>a[i];
        sum += a[i];
    }
    sum%=mod;
    int ans = sum*2;
    ans%=mod;

    
    for(int step = 2 ; step<n ; step++){
        int total = (fact[n]* binpow(fact[n-step],mod-2))%mod;
        total = (total * binpow(fact[step],mod-2)) % mod;

        //with out step
        int without = (fact[n-1]* binpow(fact[n-1-step],mod-2))%mod;
        without = (without * binpow(fact[step],mod-2)) % mod;

        int with = (total - without + mod)%mod;
        ans = (ans + (with * sum)%mod)%mod;
    }
    cout<<ans<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    

    fact[0] = 1;
    for (int i = 1; i <= 1e3; i++) fact[i] = (fact[i - 1] * i) % mod;


    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        cout<<"Case "<<T<<": ";
        I_Am_Here();
    }
    return 0;
}