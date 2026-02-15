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
//__lg(n) = logeˆ(n)
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
                        st[i][j] = max(st[i - 1][j], st[i - 1][j+ (1 << (i - 1))]);
                }
            }
    }

    int get(int L, int R) {
        int i = __lg(R - L + 1);
        return max(st[i][L], st[i][R - (1 << i) + 1]);
    }
};

void I_Am_Here() {
    int n,q;
    cin>>n>>q;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }    
    SparseTable s(a);
    int ans =0;
    while(q--){
        int l,r;
        cin>>l>>r;
        l--,r--;
        int comp = a[l];
        if(l>r) swap(l,r);
        if(r-l<=1) ans++ ;
        else{
            if(s.get(l+1,r-1)<=comp) ans++;
        }
        // cout<<"ans = "<<ans<<endl;
    }
    cout<<ans<<endl;
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
