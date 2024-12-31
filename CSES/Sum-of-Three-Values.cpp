#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll>>a(n);
    for(int i=0 ; i<n ; i++){
        ll x ;cin>>x;
        a[i]={x,i+1};
    }
    sort(full(a));
    for(int i=0 ; i<n ; i++){
        ll sum = 0;
        ll z = i+1,j=n-1;
        while(z<j){
            // cout<<a[i]<<' '<<a[z]<<' '<<a[j]<<' ';
            sum = a[i].ff+a[z].ff+a[j].ff;
            // cout<<sum<<endl;
            if(sum==k){
                cout<<a[i].ss<<' '<<a[z].ss<<' '<<a[j].ss<<endl;
                return;
            }
            if(sum>k)j--;
            else z++;
        }
    }
    cout<<"IMPOSSIBLE\n";
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ll t=1;
    // cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
