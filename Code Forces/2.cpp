#include <bits/stdc++.h>
using namespace std;
int get_mex(int l, int r, const vector<int>& a, int n) {
    int sz = a.size();
    while (l >= 0 && r < sz && a[l] == a[r]) {
        l--;
        r++;
    }
    l++;
    r--;

    if (l > r) return 0;

    vector<int> c(n + 1, 0);
    for (int k = l; k <= r; k++) {
        if (a[k] < n) {
            c[a[k]] = 1;
        }
    }

    int m = 0;
    while (c[m]) {
        m++;
    }

    return m;
}

void solve() {
    int n;
    cin >> n;
    int sz = 2 * n;
    vector<int> a(sz);
    int p1 = -1, p2 = -1;

    for (int i = 0; i < sz; i++) {
        cin >> a[i];
        if (a[i] == 0) {
            if (p1 == -1) p1 = i;
            else p2 = i;
        }
    }
    cout<<p1<<' '<<p2<<endl;
    int ans = 0;
    int ans1 = max(ans, get_mex(p1, p1, a, n));
    int ans2 = max(ans, get_mex(p2, p2, a, n));
    int ans3 = max(ans, get_mex((p1 + p2) / 2, (p1 + p2 + 1) / 2, a, n));
    cout<<ans1<<' '<<ans2<<' '<<ans3<<endl;
    cout << max({ans1, ans2, ans3}) << "\n";
}
int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        solve();
    }
    
    return 0;
}