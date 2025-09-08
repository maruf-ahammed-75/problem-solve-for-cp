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
    vector<int>a(n),b(n);
    vector<vector<int>>ans(n+1,vector<int>());

    map<int ,int>mp;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        ans[a[i]].push_back(i);
        mp[a[i]]++;
    }
    bool f=1;

    for(auto x:mp){
        if(x.ss%x.ff!=0){
            f=0;
        }
    }
    if(!f){
        cout<<-1<<"\n";
        return;
    }
    int i=1;
    for(auto x:mp){
        // cout<<x.ff<<" = ";
        for(auto y : ans[x.ff]){
            // cout<<y<<' ';
            b[y]=i;
            mp[x.ff]--;
            if(mp[x.ff]%x.ff==0){
                i++;
            }
        }
        // cout<<"\n";
    }
    for(int i=0 ; i<n ; i++){
        cout<<b[i]<<' ';
    }
    cout<<"\n";

    

}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}