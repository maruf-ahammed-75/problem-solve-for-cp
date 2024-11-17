#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
using namespace std;

void I_Am_Here(int xyz){
    ll n;
    cin>>n;

    vector<int>a(n+1,0),b(n+1,0),c(n+1,0);

    for(int i=1 ; i<=n ; i++){
        char s;
        cin>>s;
        if(s=='H'){
            a[i]+=(1+a[i-1]);
            b[i]+=b[i-1];
            c[i]+=c[i-1];
        }
        if(s=='P'){
            b[i]+=(1+b[i-1]);
            a[i]+=a[i-1];
            c[i]+=c[i-1];
        }
        if(s=='S'){
            c[i]+=(1+c[i-1]);
            b[i]+=b[i-1];
            a[i]+=a[i-1];
        }
    }
    // for(int i=1; i<=n ; i++){
    //     cout<<a[i]<<' ';
    // }
    // cout<<endl;
    // for(int i=1; i<=n ; i++){
    //     cout<<b[i]<<' ';
    // }
    // cout<<endl;
    // for(int i=1; i<=n ; i++){
    //     cout<<c[i]<<' ';
    // }
    // cout<<endl;

    int ans=-1;
    for(int i=0 ; i<=n ; i++){
        int ans1 = max((a[n]-a[i]),max((b[n]-b[i]),(c[n]-c[i])));
        int ans2 = max(a[i],max(b[i],c[i]));
        // cout<<i<<endl;
        // cout<<a[n]<<' '<<a[i]<<' '<<a[n]-a[i]<<endl;
        // cout<<b[n]<<' '<<b[i]<<' '<<b[n]-b[i]<<endl;
        // cout<<c[n]<<' '<<c[i]<<' '<<c[n]-c[i]<<endl;
        // cout<<ans1<<' '<<ans2<<endl;
        ans=max(ans,(ans1+ans2));
    }
    cout<<ans<<endl;
}

int main(){
     freopen("hps.in", "r", stdin);
     freopen("hps.out", "w", stdout);
    int ts=1;
    // cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here(xyz);
    }
}   