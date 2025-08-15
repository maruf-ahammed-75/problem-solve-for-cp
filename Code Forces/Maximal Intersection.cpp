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
    vector<pair<int,int>> v(n);
    for(int i=0 ; i<n ; i++){
        cin>>v[i].ff>>v[i].ss;
    }
    sort(full(v));
    if(n==2){
        cout<<max(v[0].ss-v[0].ff,v[1].ss-v[1].ff);
        return;
    }
    int end = INT_MAX;
    int st = v[n-2].ff;
    int ans = 0;
    int inEnd=0;
    for(int i=0 ; i<n-1 ; i++){
        if(end>v[i].ss){
            inEnd=i;
            end = v[i].ss;
        }
    }
    if(st>end){
        ans=0;
    }
    else{
        ans=end-st;
    }


    end = INT_MAX;
    st = v[n-1].ff;

    for(int i=0 ; i<n ; i++){
        if(i==inEnd)continue;
        end = min(end, v[i].ss);
    }
    if(end>st){
        ans = max(ans, end-st);
    }
    cout<<ans<<"\n";

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
