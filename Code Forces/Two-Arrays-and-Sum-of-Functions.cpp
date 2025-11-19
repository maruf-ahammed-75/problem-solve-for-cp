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
const int mod = 998244353;
void I_Am_Here() {
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    vector<int>c(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]=((n-i)*(i+1)) * a[i];
    }
    for(int i=0 ; i<n ; i++){
        cin>>b[i];
    }
    sort(b.rbegin(),b.rend());
    sort(full(a));
    int sum=0;
    for(int i=0 ; i<n ; i++){
        sum+= (a[i]%mod * b[i]%mod)%mod;
        sum%=mod;
    }
    cout<<sum<<endl;
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