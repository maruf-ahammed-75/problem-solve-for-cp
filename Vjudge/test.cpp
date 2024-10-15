#include <bits/stdc++.h>
using namespace std;

#define ll long long int

const ll MOD = 1e9+7;

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
    ll n; cin >> n;
    if(n == 1){
        cout << 2 << '\n';
    }   
    else{

        if(n == 2){
            cout << 3 << '\n';
        }
        else{

            ll x = n - 2;
            x *= 2;
            x += 4;

            cout << x % MOD << '\n';
        }
    }
    return;
}

int32_t main()
{
    NEED_FOR_SPEED;
    int t = 1;
    // cin >> t;

    while(t--){
        solve();
    }
    return 0;
}