#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here(){
    ll n,x;
    cin>>n>>x;
    vector<ll>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    // sort(full(a));
    ll l=0,r=1e18;
    // cout<<" l = "<<l<<" r = "<<r<<endl;
    while(r-l>1){
        ll mid = (l+r)/2;
        ll  sum=0;
        
        for(int i=0  ; i<n ; i++){
            sum+=mid/a[i];
            if(sum>x)break;
        }
        // cout<<"mid = "<<mid<<"  sum = "<<sum<<endl;
        if(sum<x){
            l=mid;
        }
        else{
            r = mid;
        }
        // cout<<" l = "<<l<<" r = "<<r<<endl;
    }
    cout<<r<<endl;
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
