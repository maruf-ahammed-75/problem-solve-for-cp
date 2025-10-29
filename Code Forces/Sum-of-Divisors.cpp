#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
#define i128 __int128_t
using namespace std;



void I_Am_Here() {
    int MOD = 1e9 + 7;
   int n;
   cin>>n;
   int i=1;
    int ans=0;
    i128 q;
    while(i<=n){
        q = n/i;
        int nexti = n/q + 1;
        i128 x = (nexti-1-i+1);
        i128 y = (nexti-1+i);
        i128 total = (x*y)/2;
        total%=MOD;
        total = (total*q)%MOD;
        
        ans+=(long long)total;
        ans%=MOD;
        i=nexti;
    }
    cout<<ans%MOD<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}