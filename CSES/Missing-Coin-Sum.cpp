#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    map<ll,ll>m;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        m[a[i]]++;
    }
    sort(full(a));
    ll sum=0;
    if(a[0]!=1){
        cout<<1<<endl;
        return;
    }
    for(int i=0 ; i<n ; i++){
        sum+=a[i];
        if(sum+1<a[i+1]){
            cout<<sum+1<<endl;
            return;
        }
    }cout<<sum+1<<endl;


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
