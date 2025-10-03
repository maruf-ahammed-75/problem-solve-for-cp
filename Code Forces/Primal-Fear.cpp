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
bool isPrime[M + 100 ];
vector<int> primes(M + 100 ,0);
void sieve() {
    isPrime[0] = 1;
    isPrime[1] = 1;
    for (int i = 2; 1LL * i * i <= M; ++i) {
        if (!isPrime[i]) {
            for (int j = i * i * 1LL; j <= M; j += i)
                isPrime[j] = 1;
        }
    }
    // cout<<"yes"<<endl;
    for (int j = 1 ; j <= M; ++j){
        int i = j;
        if (!isPrime[j]){
            bool f=1;
            bool ok=1;
            while(i){
                int x = i%10;
                if(x==0){
                    f=0;
                    // break;
                }
                if(isPrime[x]){
                    ok=0;
                }
                i/=10;
            }
            if(f || ok) primes[j]=1;
        }
        primes[j]+=primes[j-1];
    }
           
}
void I_Am_Here() {
    
    // cout<<"Size: "<<primes.size()<<endl;
    int n;
    cin>>n;
    cout<<primes[n]<<endl;

}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    sieve();

    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}