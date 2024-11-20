#include<bits/stdc++.h>
#define ll long long
using namespace std;
void I_Am_Here() {
    ll n;
    cin>>n;
    vector<int>a(n+1);
    map<ll,ll>m;
    ll ans=0;
    m[0]=1;
    for(int i=1 ; i<=n ; i++){
        cin>>a[i];
        a[i]%=n;
        if(a[i]<0)a[i]+=n;
        a[i]+=a[i-1];
        a[i]%=n;
        if(m[a[i]])ans+=m[a[i]];
        m[a[i]]++;
    }
    cout<<ans<<endl;
}
 
int main() {
    int ts = 1;
    // cin >> ts;
    for (int xyz = 1; xyz <= ts; xyz++) {
        I_Am_Here();
    }
    return 0;
}
  