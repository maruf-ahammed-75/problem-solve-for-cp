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
long long binpow(long long a, long long b, long long m = mod) {
    a %= m;
    long long res = 1;
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
    vector<int> fact(n+1,1);
    for(int i=2;i<=n;i++){
        fact[i]=(fact[i-1]*i)%mod;
    }
    int total = fact[n];
    int bad = 0;
    for(int i=1 ; i<=n ; i++){
        int number_of_way = (fact[n] * binpow((fact[i]*fact[n-i])%mod, mod-2, mod)) % mod; 
        number_of_way = (number_of_way*(fact[n-i]))%mod;
        if(i%2==0)number_of_way*=-1;
        bad = (bad + number_of_way + mod)%mod;
    }
    // cout<<bad<<endl;
    int good = (total - bad + mod)%mod;
    cout<<good<<endl;

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