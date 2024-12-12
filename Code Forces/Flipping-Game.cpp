#include <bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;

void I_Am_Here() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    ll sum=0;
    ll ind=0;
    ll ans=0;
    ll n1=0;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        // cout<<a[i]<<" = ";
        if(a[i])n1++;
        if(a[i] && sum){
            sum--;
        }
        if(!a[i]){
            sum++;
            if(ans<sum){
                ans=sum;
                ind=i;
            }
        }
        // cout<<sum<<' '<<ans<<' '<<ind<<endl;
    }
    for(int i=ind ; i>=0 ; i--){
        if(a[i]){
            n1--;
            ans++;
        }
        if(!a[i]){
            n1++;
            ans--;
        }
        if(ans==0)break;
    }
    cout<<n1<<endl;

}

int main() {
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
