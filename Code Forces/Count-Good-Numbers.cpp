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

void I_Am_Here() {
    int a,b;
    cin>>a>>b;
    int total = b-a + 1;
    int ans = (b/2) + (b/3) + (b/5) + (b/7);
    ans -= (b/6 + b/10 + b/14 + b/15 + b/21 + b/35);
    ans += (b/30 + b/42 + b/70 + b/105);
    ans -= (b/210);

    a--;
    int ans1 = (a/2) + (a/3) + (a/5) + (a/7);
    ans1 -= (a/6 + a/10 + a/14 + a/15 + a/21 + a/35);
    ans1 += (a/30 + a/42 + a/70 + a/105);
    ans1 -= (a/210);
    // cout<<total<<' '<<ans<<' '<<ans1<<endl;
    cout<<total - ans + ans1<<endl;

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


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