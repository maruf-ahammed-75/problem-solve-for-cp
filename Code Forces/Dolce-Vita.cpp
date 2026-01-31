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
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    sort(full(a));

    int ans = 0;

    for(int i=0 ; i<n ; i++){
        if(i){
            a[i]+= a[i-1];
        }
    }
    for(int i=0 ; i<n ; i++){
        if(a[i]<=x){
            int left = x - a[i];
            ans+= 1 + (left/(i+1));
        }
    }
    cout<<ans<<endl;
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
