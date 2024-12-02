#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    map<ll,ll>m;
    ll ans=0;
    m[0]=1;
    ll sum=0;
    for(int i=0 ; i<n ; i++){
        
        ll x =  (s[i]-'0');
        x-=1;
        sum+=x;
        if(m[sum])ans+=m[sum];
        m[sum]++;
    }
    cout<<ans<<endl;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
