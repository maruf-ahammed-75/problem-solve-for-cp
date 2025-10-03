#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
std::vector<int>pf ;
void I_Am_Here() {
    int n;
    cin>>n;
    
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        vector < int > primes, pw;
        while(x>1){
            
            int p = pf[x];
            int cnt = 0;
            while (x % p == 0) {
                // cout<<"sdf";
                x /= p;
                cnt++;
            }
            primes.push_back(p);
            pw.push_back(cnt);
        }
        int ans=1;
        for(auto i:pw){
            ans*=(i+1);
        }
        cout<<ans<<endl;
    }
}
void calPF(int n){
    pf = vector<int>(n+1,1);
    for(int i = 2 ; i<=n ; i++){
        for(int j = i ; j<=n ; j+=i){
            if(pf[j]==1)pf[j]=i;
        }
    }
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    calPF(1000000);

    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}