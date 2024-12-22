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
    ll ans=1;
    ll cal=1;
    while(cal<n){
        ans++;
        cal+=1;
        cal*=2;
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
/////game