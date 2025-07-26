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
    cin >> n;
    int m;
    cin >> m;
    vector<int> a(n+1,0);
    int mx=INT_MIN,mi = INT_MAX;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i]+=a[i-1];
        mx = max(mx, a[i]);
        mi = min(mi, a[i]); 
    }
    int st=0,en=0;
    if(mx<0)st = -mi , en = m;
    else if(mi>0)st =0 , en = m - mx;
    else {
        st = -mi;
        en = m - mx;
    }
    if(st>en) {
        cout << 0 << endl;
        return;
    }
    cout<<en-st+1<<endl;

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
