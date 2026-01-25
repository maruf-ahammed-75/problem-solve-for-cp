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
    vector<int>a(n);
    map<int,int>mp;
    int ans = 0;
    for(int x,i=0; i<n; i++) {
        cin>>x;
        if(mp[x+1]>0){
            mp[x+1]--;
            mp[x]++;
        }
        else{
            mp[x]++;
            ans++;
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
