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
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sum+=m;
    sort(full(a));
    int mx = a[n-1]+m;
    int sit = (sum+n-1)/n;
    for(int i=0 ; i<n ; i++){
        if(a[i]<sit && m>0){
            a[i]=sit;
            m-=(sit - a[i]);
        }
    }
    sort(full(a));
    cout<<a[n-1]<<" "<<mx<<"\n";

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