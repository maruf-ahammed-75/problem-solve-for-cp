#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
// build time = nlog(n)
// query time = o(1)
//__lg(n) = loge^(n)
struct SparseTable {
    vector<vector<int>> st;
    int n, K;
    SparseTable() {}
    SparseTable(vector<int>a) {
        n = a.size(); K = __lg(n) + 1; 
        st = vector<vector<int>>(K, vector<int>(n));
        for(int i = 0; i < n; i++) st[0][i] = a[i];
        for (int i = 1; i < K; i++) {
            for (int j = 0; j + (1 << i) <= n; j++) {
                st[i][j] = min(st[i - 1][j], st[i - 1][j + (1 << (i - 1))]);
            }
        }
    }
    int get(int L, int R) {
        int i = __lg(R - L + 1);
        return min(st[i][L], st[i][R - (1 << i) + 1]);
    }
};

void I_Am_Here() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++)cin>>a[i];

    int q;
    cin>>q;

    SparseTable st(a);
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<st.get(l, r)<<"\n";
    }

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
