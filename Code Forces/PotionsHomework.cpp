/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ll long long int

using namespace std;
const ll mod=1e4 + 7;
void I_Am_Here(){
    ll n;
    cin>>n;
    // cout<<n<<endl;
    vector<ll>a(n);
    vector<ll>b(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        b[i]=a[i];
        // cout<<a[i]<<' '<<b[i]<<endl;
    }
    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
    ll ans=0;
    for(int i=0 ; i<n ; i++){
        ans = (ans+((a[i])*(b[i]))%mod)%mod;
        // cout<<a[i]<<' '<<b[i]<<' '<<ans<<endl;
    }
    cout<<ans<<endl;
}
int main(){
    int ts=1;
    // cin>>ts;
    // for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
    // }
}