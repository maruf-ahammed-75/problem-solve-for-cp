#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define endl "\n"
#define Y cout<<"YES\n"
#define N cout<<"NO\n"

using namespace std;
const int MOD = 1e9 + 7;

int binpow(int a, int b, int m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

void I_Am_Here() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<a[0]<<endl;
        return;
    }
    sort(full(a));
    int sum=0;
    for(int k=0 ; k<n ; k++){
        int coeff = (k+1-1)-(n-(k+1));
        // cout<<"coeff = "<<coeff<<endl;
        sum+= (coeff * a[k])%MOD;
        sum%=MOD;
    }
    // cout<<sum<<endl;
    cout<<(sum * binpow(2,n-2,MOD)%MOD)%MOD <<endl;
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