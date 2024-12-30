#include <bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    for(int i=0 ; i<n ; i++){
        cin>>b[i];
    }
    ll ans=a[n-1];
    ll sum=0;
    for(int i=0 ; i<n-1 ; i++){
        if(a[i]>b[i+1])ans+=a[i]-b[i+1];
        
    }
    cout<<ans<<endl;
   
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ll t=1;
    cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}