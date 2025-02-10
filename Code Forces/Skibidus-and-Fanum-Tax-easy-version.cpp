#include <bits/stdc++.h>
#define int long long
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here(){
    int n,m;cin>>n>>m;
    vector<int>a(n);
    for(auto &i:a)cin>>i;
    int b;
    cin>>b;
    int mx=0;
    int y = b-a[0];
    if(a[0]>y)a[0]=y;

    for(int i=1 ; i<n ; i++){
        int x = b-a[i];
        int temp=a[i];
        if(x>=a[i-1])temp = x;
        int mn = min(x,a[i]);
        if(mn>=a[i-1])temp = mn;
        a[i]=temp;
    }
    for(int i= ; i<n ;i++){
        // cout<<a[i]<<' ';
        if(a[i-1]>a[i]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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