#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    int n;
    cin>>n;
    vector<int>a(n);
    int x = INT_MAX;
    map<int,int>m;

    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        x = min(x,a[i]);
        m[a[i]]++;
    }

    cout<<n-m[x]<<endl;
    
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    cin>>t;
    for(int T=1 ; T<=t ; T++){
        I_Am_Here();
    }
        
    
    return 0;
}
