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
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(full(a));

    int low = 0, high = n, mex = 0;

    while (low <= high) {
        int mid = (low+high)/2;
        
        vector<bool>flag(mid+1000, false);
        vector<int> avi;

        for (int i : a) {
            if (i < mid && !flag[i]) {
                flag[i] = true;
            } else {
                avi.push_back(i);
            }
        }

        int id = 0;
        bool isok = true;

        for (int i = 0; i < mid ; ++i) {
            if (!flag[i]) {
                while (id < avi.size() && avi[id] < 2 * i + 1) {
                    id++;
                }
                if (id == avi.size()) {
                    isok = false;
                    break;
                }
                id++;
            }
        }

        if (isok) {
            mex = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << mex << "\n";
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