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
    string s;
    cin>>s;
    bool ans =0;
    map<char, int> mp;
    for (int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    for(int i=1 ; i<n-1 ; i++){
        if(mp[s[i]]>1){
            ans=1;
        }
    }
    if(ans){
        cout<<"Yes\n"; 
    } else {
        cout<<"No\n";
    }

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