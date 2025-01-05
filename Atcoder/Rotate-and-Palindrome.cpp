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
    ll sum=0;

    ll i=0,j=n-1;
    while(i<j){
        if(s[i++]!=s[j--])sum+=b;
    }
    ans=sum;
    sum=0;
    // cout<<ans<<endl;
    for(int i=0 ; i<n-1 ; i++){
        sum=0;
        sum = ((i+1)*a);
        string x = s.substr(0,i+1);
        string y = s.substr(i+1,n-1)+x;
        // cout<<x<< ' '<<y<<endl;
        // cout<<sum<<" y = "<<y<<endl;

        ll k=n-1;j=0;
        while(j<k){
            if(y[j++]!=y[k--])sum+=b;
        }
        ans=min(ans,sum);
        // cout<<"sum  = "<<sum<<endl;
    }
    cout<<ans<<endl;
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
