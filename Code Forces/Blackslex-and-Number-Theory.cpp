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

void I_Am_Here() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    sort(full(a));
    cout<<max(a[0],abs(a[0]-a[1]))<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        // cout<<"Case "<<T<<": ";
        I_Am_Here();
    }
    return 0;
}