#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;


void I_Am_Here() {
    int n;
    int sum=0 ; 
    cin>>n;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        sum+=a[i];
    }
    int mx = INT_MIN;
    int ans = INT_MIN;

    for(int i=1 ; i<n ; i++){
        mx = max(a[i], mx + a[i]);
        ans = max(ans, mx);
    }
    mx = INT_MIN;
    for(int i=0 ; i<n-1 ; i++){
        mx = max(a[i], mx + a[i]);
        ans = max(ans, mx);
    }

    if(ans>=sum){
        N;
    }
    else{
        Y;
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
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}
