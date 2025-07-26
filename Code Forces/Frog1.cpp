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
int frog(int index) {

    if(index >= n ) return 0;

    int min1 = frog(index + 1) + abs(a[index] - a[index + 1]);
    int min2 = frog(index + 2) + abs(a[index] - a[index + 2]);
    
    return min(min1, min2);
}
void I_Am_Here() {
    cin>> n;
    a = vector<int>(n+1, 0);
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
