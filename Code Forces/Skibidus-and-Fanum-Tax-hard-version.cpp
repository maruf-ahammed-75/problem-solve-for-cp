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
    vector<int>a(n);
    vector<int>b(m);
    for(auto &i:a)cin>>i;
    for(auto &i:b)cin>>i;
    sort(full(b));
    int x = b[0]-a[0];
    if(x<a[0])a[0]=x;
    for(int i=1 ; i<n ; i++){
        // x - a[i] = a[i-1] ;
        x = a[i-1]+a[i];
        // cout<<"x = "<<x<<endl;
        int in = lower_bound(b.begin(),b.end(),x)-b.begin();
        if(in < m  && b[in]-a[i]>=a[i-1]){
            // cout<<a[i]<<' '<<b[in]-a[i]<<endl;
            int y = min(a[i],b[in]-a[i]);
            if(y>=a[i-1])a[i]=y;
            else{
                if(b[in]-a[i]>=a[i-1])a[i]=b[in]-a[i];
            }
        }
    }
    bool f=1;
    // cout<<a[0]<<' ';
    for(int i=1 ; i<n ; i++){
        // cout<<a[i]<< ' ';
        if(a[i-1]>a[i]){
            f=0;
            // break;
        }
    }
    // cout<<endl;
    if(f){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
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