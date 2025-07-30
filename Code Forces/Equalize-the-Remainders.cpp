#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

void I_Am_Here() {
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int>a(n);
    vector<vector<int>>b(m,vector<int>());
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        b[a[i]%m].push_back(a[i]);
    }
    // for(int i=0 ; i<m ; i++){
    //     cout<<i<<" = ";
    //     for(auto i : b[i]){
    //         cout<<i<<' ';
    //     }
    //     cout<<endl;
    // }

    vector<int>x;
    map<int,int>mp;
    for(int i=0 ; i<m ; i++){
        if(b[i].size()>n/m){
            for(int j=n/m ; j<b[i].size() ; j++){
                x.push_back(b[i][j]);
            }
        }
        if(b[i].size()<n/m){
            mp[i]=n/m-b[i].size();
        }
    }
    for(auto i:x){
        cout<<i<<' ';
    }
    cout<<endl;
    for(auto i:mp){
        cout<<i.ff<<' '<<i.ss<<endl;
    }

    int ans=0,i=0;
    for(auto j:mp){
        for(i ; i<j.ss ; i++){
            cout<<"map = "<<j.ff<<endl;
            if((x[i]%m)<=j.ff){
                ans+=j.ff-(x[i]%m);
                cout<<"1 = "<<ans<<endl;
            }
            else{
                ans+=j.ff+ m - (x[i]%m);
                 cout<<"2 = "<<ans<<endl;
            }
            
        }
    }
    cout<<ans<<endl;

    
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}