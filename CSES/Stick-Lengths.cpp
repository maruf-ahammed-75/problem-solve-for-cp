#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0 ;i<n ; i++)cin>>a[i];
    sort(full(a));
    ll sum=0;
    for(int i=0 ; i<n ; i++)sum+=abs(a[i]-a[n/2]);
    cout<<sum<<endl;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    // cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
