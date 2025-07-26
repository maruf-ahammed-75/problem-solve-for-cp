#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
vector<int>a;
int n;
int k;
// only recursion
int frog(int index) {
    if(index >= n ) return 0;
    int ans = INT_MAX;
    for(int jump = 1 ; jump<= k ; jump++){
        if(index+jump<=n){
            int mi = frog(index + jump) + abs(a[index] - a[index + jump]);
            ans = min(ans, mi);
        }
    }
    return ans;
}

void I_Am_Here() {
    cin>> n;
    cin >> k;
    a = vector<int>(n+100, 0);
    for(int i=1 ; i<=n ; i++) {
        cin >> a[i];
    }
    cout<<frog(1)<<endl;
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
