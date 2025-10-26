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
    // map<int,int> m;
    set<int>s;
    for(int i=0;i<n;i++){
        cin>>a[i];
        // m[a[i]]=1;
        s.insert(a[i]);
    }
    int ans = INT_MAX;
    sort(full(a));
    for(auto i : s){
        for(int k = i*2 ; ; k+=i){
            if(!binary_search(full(a),k)){
                ans = min(ans ,k);
                break;
            }
        }
    }
    cout<<ans<<"\n";


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