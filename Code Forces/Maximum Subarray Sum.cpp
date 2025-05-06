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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mx = 0;
    int res = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] != '0') {
            mx = max(a[i], mx + a[i]);
            res = max(res, mx);
        } else {
            mx = 0;
        }
    }

    if (res > k) {
        cout << "No\n";
        return;
    }

    if (res == k) {
        cout << "Yes\n";
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                a[i] = -1e18;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << ' ';
        }
        cout << endl;
        return;
    }

    int zer = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            zer = i;
            break;
        }
    }

    if (zer == -1) {
        cout << "No\n";
        return;
    }

    cout << "YES\n";
    ll pref = 0;
    ll psum = 0;
    ll ssum = 0;

    for (int i = zer - 1; i >= 0; i--) {
        if (s[i] == '0') {
            break;
        } else {
            psum += a[i];
            pref = max(psum, pref);
        }
    }

    ll suff = 0;
    for (int i = zer + 1; i < n; i++) {
        if (s[i] == '0') {
            break;
        } else {
            ssum += a[i];
            suff = max(ssum, suff);
        }
    }
    a[zer] = k - pref - suff;

    for (ll i = 0; i < n; i++) {
        if (s[i] == '0' && i != zer) {
            a[i] = -1e18; 
        }
        cout << a[i] << ' ';
    }
    cout << endl;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    cin>>t;
    for(int T=1 ; T<=t ; T++){
        I_Am_Here();
    }

    return 0;
}