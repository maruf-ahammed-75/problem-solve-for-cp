
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void I_Am_Here() {
    ll n,x;
    cin>>n>>x;
    /*------------------first solution-------------------
    vector<int>a(n);
    for(auto &i:a)cin>>i;
    map<ll,ll>m;
    ll sum=0;
    ll ans=0;
    m[0]=1;
    for(int i=0 ; i<n ; i++){
        sum+=a[i];
        m[sum]=1;
        if(m[(sum-x)])ans++;
    }
    cout<<ans<<endl;
    */


    /////------------------second soutioin-------------
    vector<int>a(n);
    for(auto &i:a)cin>>i;
    ll sum=0,ans=0;
    int l=0;
    for(int i=0 ; i<n ; i++){
        sum+=a[i];
        // cout<<sum<<endl;
        while(sum>x){
            // cout<<"while :";
            sum-=a[l];
            // cout<<sum<<endl;
            l++;
        }
        if(sum==x)ans++;
        // cout<<"ans = "<<ans<<endl;
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