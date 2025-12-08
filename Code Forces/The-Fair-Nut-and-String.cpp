#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define endl "\n"
#define Y cout<<"YES\n"
#define N cout<<"NO\n"

using namespace std;
const int MOD = 1e9 + 7;


void I_Am_Here() {
    string s;
    cin>>s;
    int ans = 1;
    int count =0;
    int f=0;
    for(auto i : s){
        if(i!='b' && i != 'a')continue;
        
        if(i=='a'){
            f=1;
            count++;
        }
        else{
            ans = (ans*(count+1))%MOD;
            count = 0;
        }
        // cout<<i<<' '<<count<<' '<<ans<<endl;
        
    }
    ans = (ans*(count+1))%MOD;
    if(f==0)ans=0;
    else ans = (ans-1+MOD)%MOD;
    cout<<ans<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


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