#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first 
#define ss second
using namespace std;
void Solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i].ff>>a[i].ss;
    }
    if(n==1){
        if(a[0].ff<a[0].ss){
            cout<<"NO\n";
            return; 
        }
    }
    for(int i=1 ; i<n ; i++){
        if(abs(a[i].ff-a[i-1].ff)< abs(a[i].ss-a[i-1].ss)){
            cout<<"NO\n";
            return;
        }
        if(a[i].ff==a[i-1].ff && a[i].ss!=a[i-1].ss){
            cout<<"NO\n";
            return;
        }
        if(a[i].ff<a[i].ss || a[i-1].ff<a[i-1].ss || a[i].ff<a[i-1].ff || a[i].ss<a[i-1].ss){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int ts = 1;
    cin >> ts;
    while (ts--)
    {
        Solve();
    }

    return 0;
}
