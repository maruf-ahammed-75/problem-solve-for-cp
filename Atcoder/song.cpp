#include <bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    ll sum=0;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        sum+=a[i];
    }
    k%=sum;
    // cout<<n<<endl;
    if(k==0){
        cout<<n<<' '<<a[n-1]<<endl;
    }
    else{
        for(int i=0 ; i<n ; i++){
            ll x=k;
            k = k -  a[i] ;
            if(k<=0){
                cout<<i+1<<' '<<x<<endl;
                break;
            }
        }
    }
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
