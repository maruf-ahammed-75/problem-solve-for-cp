#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        int k;
        cin >> n >> k;
        k--;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<int> b;
        b.push_back(a[k]);
        for (int i = 0; i < n; i++) {
            if (a[i] > a[k] ) b.push_back(a[i]);
        }
        sort(b.begin(), b.end());

        int x = 0;
        bool f = 1;
        // for (int i = 0; i < (int)b.size(); i++) {
        //     cout << b[i] << "  ";
        // }
        // cout << endl;

        for (int i = 1; i < (int)b.size(); i++) {
            x += abs(b[i] - b[i - 1]);
            // cout<<b[i-1]<<' ';
            if (x > b[i - 1]) {
                f = 0;
                break;
            }
            // cout << x << endl;
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}