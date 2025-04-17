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
    cin>>n;
    vector<int> a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        if(i){
            a[i] +=a[i-1];
        }
        // cout<<a[i]<< ' ';
    }
    // cout<<'\n';
    int m;
    cin>>m;
    for(int i=0 ; i<m ; i++){
        int x;
        cin>>x;
        int ans = lower_bound(a.begin(), a.end(), x) - a.begin();
        cout<<ans+1<<'\n';
    }

}
int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    // cin>>t;
    for(int T=1 ; T<=t ; T++){
        I_Am_Here();
    }

    return 0;
}