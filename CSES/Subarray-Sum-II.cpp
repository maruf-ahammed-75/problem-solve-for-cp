
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void I_Am_Here() {
    ll n,x;
    cin>>n>>x;
   
    vector<int>a(n);
    for(auto &i:a)cin>>i;
    map<ll,ll>m;
    ll sum=0;
    ll ans=0;
    m[0]=1;
    for(int i=0 ; i<n ; i++){
        sum+=a[i];
        ans+=m[(sum-x)];
        m[sum]+=1;
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