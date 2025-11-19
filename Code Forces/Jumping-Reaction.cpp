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
    int q;
    cin>>n>>q;
    vector<int>a(n),sum(n+1,0),squre(n+1,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum[i+1]=sum[i]+a[i];
        squre[i+1]=squre[i]+(a[i]*a[i]);
    }
    // for(int i=1 ; i<=n ; i++){
    //     cout<<sum[i]<<" "<<squre[i]<<endl;
    // }

    while(q--){
        int l,r;
        cin>>l>>r;
        int x = sum[r]-sum[l-1];
        int y = squre[r]-squre[l-1];
        cout<<(x*x - y)/2<<endl;
    }
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