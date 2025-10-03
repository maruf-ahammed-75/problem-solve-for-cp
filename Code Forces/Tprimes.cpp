#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
const int M = 1000000+10;
bool isPrime[M];
vector<int> primes;
void sieve() {
    if (M < 2) return;
    isPrime[0] = 1;
    isPrime[1] = 1;
    for (int i = 2; 1LL * i * i <= M; ++i) {
        if (!isPrime[i]) {
            for (int j = i * i * 1LL; j <= M; j += i)
                isPrime[j] = 1;
        }
    }
    
}
void I_Am_Here() {
    sieve();
    int n;
    cin >> n;
    for(int i=0,x ; i<n ; i++){
        cin>>x;
        int y = sqrt(x);
        if(y*y == x && !isPrime[y]) cout<<"YES\n";
        else cout<<"NO\n";
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