#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

const int MOD = 1e9 + 7;


ll Binary_Exponentiation(ll a, ll b,int MOD=1e9+7) {//use this in programming
    ll result = 1;
    while (b > 0) {
        if (b & 1) { // If b is odd
            result = (result * a) % MOD; 
        }
        a = (a * a) % MOD; // Square a with mod
        b /= 2; // Divide b by 2
    }
    return result%MOD;
}
void I_Am_Here() {
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        cin>>a[i].second;
    }
    int numDiv=1;
    for(int i=0 ; i<n ; i++){
        numDiv*=(a[i].second+1);
        numDiv%=MOD;
    }
    cout<<numDiv;

    int sumDiv=1;
    int number = 1;
    for(int i=0 ; i<n ; i++){
        number*=Binary_Exponentiation(a[i].first,a[i].second,MOD);
        int nomi = Binary_Exponentiation(a[i].first,a[i].second+1,MOD);
        if(!nomi)nomi+=MOD;
        nomi-=1;
        nomi%=MOD;
        int domi = Binary_Exponentiation(a[i].first-1,MOD-2,MOD);
        domi%=MOD;
        sumDiv=sumDiv*((nomi*domi)%MOD);
        sumDiv%=MOD;
    }
    cout<<' '<<sumDiv;


    int div_prod=1;
    int div_cnt2=1;
    for(int i=0 ; i<n ; i++){
    div_prod = Binary_Exponentiation(div_prod, a[i].second + 1) *
                    Binary_Exponentiation(Binary_Exponentiation(a[i].first, (a[i].second * (a[i].second + 1) / 2)), div_cnt2) % MOD;
    div_cnt2 = div_cnt2 * (a[i].second + 1) % (MOD - 1);

    }
    cout<<' '<<div_prod<<endl;

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