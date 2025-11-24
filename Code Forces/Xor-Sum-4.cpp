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
const int mod = 1e9 + 7;
void I_Am_Here() {
    int n;
    cin>>n;
    vector<int>a(n);
    map<int, int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        bitset<60> bs(a[i]);
        for(int j=0;j<60;j++){
            if(bs[j]){
                mp[j]++;
            }
        }
    }
    int ans=0;
    int pow2=1;
    for(int i=0 ; i<60 ; i++){
        // cout<<i.ff<< ' '<< i.ss << endl;
        int one = mp[i];
        int zero = abs(n - one);
        int total_pair = (one * zero) % mod;
        ans += (total_pair * pow2) % mod;
        ans %= mod;
        pow2 = (pow2 * 2) % mod;
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}