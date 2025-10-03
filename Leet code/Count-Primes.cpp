#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
const int NN = 5000000+100;
vector<int> isPrime(NN,0);
vector<int>Prefix_Prime(NN,0);
void sieve() {
    isPrime[0] = 1;
    isPrime[1] = 1;
    for(int i = 2; i * i <= NN; i++){
        if(!isPrime[i]){
            for(int j = i * i; j <= NN; j += i){
                isPrime[j] = 1;
            }
        } 
    }
    for(int i=1 ; i<=NN ; i++){
        Prefix_Prime[i] += Prefix_Prime[i-1] + (isPrime[i]==0 ? 1 : 0);
    }
}
void I_Am_Here() {
    sieve();
    int n;
    cin>>n;
    cout<<Prefix_Prime[n]<<"\n";
}

int32_t main() {
   
    
    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}

