#include <bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    ll n,a,b;
    string s;
    cin>>n>>a>>b>>s;
    ll ans=1e18;
    
    for(ll k=0 ; k<n ; k++){
        ll sum=0;
        if(k!=0){
            sum+=(k*a);
            char c = s[0];
            s.erase(0,1);
            s+=c;
        }
        // cout<<sum<<' '<<s<<endl;
        for(ll i=0,j=n-1 ; i<n/2 ; i++,j--){
            if(s[i]!=s[j]){
                sum+=b;
            }
        }

        ans=min(ans,sum);
        // cout<<sum<<' ' <<ans<<endl<<endl;
    }
    cout<<ans<<endl;
}

int main() {

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int t=1;
    // cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
