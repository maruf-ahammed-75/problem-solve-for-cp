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
    cin >> n;
    int k;
    cin>>k;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int x = 0;
    int y =0 ;

    for(int i=0 ; i<n ; i++){
        if(a[i]==1){
            x=i+1;
            break;
        }
    }
    for(int i=n-1 ; i>=0 ; i--){
        if(a[i]==1){
            y=i+1;
            break;
        }
    }
    int ans =0;
    // cout<<x<<' '<<y<<endl;
    if(y && x){
        ans  = abs(x-y)+1;
    }
    // cout<<ans<<endl;
    if(ans<=k){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}

int32_t main() {
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
