#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
const int M = 1000000;
bool isPrime[M+100];
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
    cin>>n;
    if(n>2)cout<<2<<endl;
    else cout<<1<<endl;
    for(int i=2 ; i<=n+1 ; i++){
        if(!isPrime[i])cout<<1<<' ';
        else{
            cout<<2<< ' '  ;
        }
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