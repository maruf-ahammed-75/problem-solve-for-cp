#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first 
#define ss second
using namespace std;
void Solve(){
    int n;
    cin>>n;
    vector<int>a;
    map<int,int>m;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        if(i==0 || a[a.size()-1]!=x){
            a.push_back(x);
            m[x]++;
        }
    }
    n = a.size();
    if( m.size()==1){
        cout<<0<<endl;
        return;
    }
    if((a[0]==a[n-1] && m[a[0]]==2) || m[a[0]]==1 || m[a[n-1]]==1){
        cout<<1<<endl;
        return;
    }
    
    ll ans=INT_MAX;
    for(auto i :m){
        if(i.ff == a[0]){
            ans = min(ans,i.ss+1-1);
            if(i.ff==a[n-1]){
                ans = min(ans,i.ss+1-2);
            }
        }
        if(i.ff==a[n-1]){
            ans = min(ans,i.ss+1-1);
        }
        ans = min(ans,i.ss+1);
    }
    cout<<ans<<endl;
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
