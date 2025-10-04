#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
// #define N cout<<"NO\n"
using namespace std;
// Linear Sieve for prime factorization
//time complexity: O(n)
//space complexity: O(n)
const int N = 100000000;  // up to 1e8
vector<int> lp;   // lowest prime factor
vector<int> primes;      // list of primes
void linear_sieve(int n) {
    lp = vector<int>(n + 1, 0);
    for (int i = 2; i <= n; i++) {
        if (lp[i] == 0) {        // i is prime
            lp[i] = i;
            primes.push_back(i);
        }
        for (int p : primes) {
            if (p > lp[i] || 1LL * i * p > n) break;
            lp[i * p] = p;
        }
    }
}

void I_Am_Here() {
    linear_sieve(N);
    for(int i=0 ; i<primes.size() ; i+=100){
        cout<<primes[i]<<"\n";
    }
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