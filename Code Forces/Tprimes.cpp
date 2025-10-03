#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
bool prime(int n) {
   if(n < 2) return false;
   if(n == 2) return true;
   for(int i = 2; i * i <= n; i++) {
       if(n % i == 0)
           return false;
   }
   return true;
}
void I_Am_Here() {
    int n;
    cin >> n;
    for(int i=0,x ; i<n ; i++){
        cin>>x;
        int y = sqrt(x);
        if(y*y == x && prime(y)) cout<<"YES\n";
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