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

    vector<int>a;

    for(int i = 1 ; i*i<=n ; i++){
        if(n%i==0){
            a.push_back(i);
            a.push_back(n/i);
        }
    }
    sort(a.begin(),a.end(),greater<int>());

    for(int i=0 ; i<a.size() ; i++){
        if(a[i]<=m){
            cout<<n/a[i]<<"\n";
            return;
        }
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
