#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.hegin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int>a(n);
    map<int,int>m;
    for(auto &i : a) {
        cin>>i;
        m[i]++;
    }
    vector<pair<int,int>>ans;
    for(auto i:m){
        ans.push_back({i.ss,i.ff});
    }
    sort(ans.rbegin(),ans.rend());
    for(int i=0 ; i<x ; i++){
        cout<<ans[i].ss<<" ";
    }
    cout<<endl;

    


}//
int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    // cin>>t;
    for(int T=1 ; T<=t ; T++){
        I_Am_Here();
    }
    return 0;
}