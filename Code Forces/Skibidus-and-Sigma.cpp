#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,pair<int,int>>>a(n);
    
    for(int i=0 ; i<n ; i++){
        vector<int>b(m,0);
        ll sum =0;
        for(int j=0 ;j<m ; j++){
            cin>>b[j];
            if(j){
                b[j]+=b[j-1];
            }
            sum+=b[j];
        }
        a[i]={b[m-1],{sum,i}};
    }
    // if(m==1){
    //     ll sum=0;
    //     for(int i=0 ; i<n ; i++){
    //         sum+=a[i].ff;
    //     }
    //     cout<<sum<<endl;
    //     // return;
    // }
    sort(a.rbegin(),a.rend());

    // for(int i=0 ; i<n ; i++){
    //     cout<<a[i].ff<<' '<<a[i].ss.ff<<' '<<a[i].ss.ss<<endl;
    // }
    // cout<<endl;

    ll ans=0;
    ll mul = (n*m)-m;
    for(int i=0 ; i<n ; i++){
        ans+=a[i].ss.ff+(a[i].ff*mul);
        mul-=m;
    }
    cout<<ans<<endl;
}

int32_t main() {
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