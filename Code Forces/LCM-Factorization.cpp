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
vector<int>pf;
vector<int>fact(1e6+1,1);
const int mod = 998244353;
    
void calcPf(int n) {
    pf = vector < int >(n + 1, 0);
    for (int i = 2; i <= n; i++) {
        if (pf[i] == 0) { // i is prime
            for (int j = i; j <= n; j += i) {
                if (pf[j] == 0) pf[j] = i;
            } 
        } 
    }
}
long long binpow(long long a, long long b, long long m) {
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
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i =0 ; i<n ; i++){
        cin>>a[i];
    }
    int ans=0;
    map<int,int>m;
    set<int>s;
    for(int i=0 ; i<n ; i++){
        int x = a[i];
        vector<int>prime;
        while(x>1){
            int p = pf[x];
            int count = 0 ;
            while(x%p==0){
                x/=p;
            }
            m[p]++;
            s.insert(p);
        }
    }
    // for(auto it : s){
    //     cout<<it<<' '<<m[it]<<endl;
    // }
    // cout<<endl;

    int total =  (fact[n]* (binpow(fact[k],mod-2,mod)%mod))%mod;
    total = total*(binpow(fact[n-k],mod-2,mod)%mod);
    total = total%mod;

    for(auto it : s){
        int bad = 0;
        if(n-m[it]>=k){
            bad = (fact[n - m[it]] * (binpow(fact[k], mod - 2, mod) % mod))%mod;
            bad = (bad * (binpow(fact[n - m[it] - k], mod - 2, mod) % mod)) % mod;
            bad = bad%mod;
        }
        int good = (total - bad + mod) % mod;
        ans = (ans + (good*it)%mod)%mod;
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
    
    calcPf(1e6);

    fact[0] = 1;
    for (int i = 1; i <= 1e6; i++) fact[i] = (fact[i - 1] * i) % mod;


    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}