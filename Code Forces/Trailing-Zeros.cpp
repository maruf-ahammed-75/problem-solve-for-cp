#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ull unsigned long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define endl "\n"
#define Y cout<<"YES\n"
#define N cout<<"NO\n"

using namespace std;
int count(int n){
    if(n<5) return 0;
    int ans =0;
    ans += count(n/5) + n/5;
    return ans;
}
void I_Am_Here() {
    int n;
    cin>>n;
    cout<<count(n)<<endl;
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