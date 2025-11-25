#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define endl "\n"
#define Y cout<<"YES\n"
#define N cout<<"NO\n"

using namespace std;
const int mod = 998244353;
void I_Am_Here() {
    int n,k;
    cin>>n>>k;
    vector<int>a(k+1);
    for(int i=1 ; i<=k ; i++){
        cin>>a[i];
    }
    int total_combination = 1<<k;
    map<int,int>m;
    for(int mask = 1 ; mask<total_combination ; mask++){
        int x = 0;
        int temp = n;
        int ans=0;
        for(int i=1 ; i<= k; i++){
            if(mask & (1<<(i-1))){
                x++;
                temp = temp / a[i];
            }
        }
        // cout<<"mask: "<<mask<<" temp: "<<temp<<endl;
        m[x] += temp;
    }
    int ans =0;
    for(auto x:m){
        if(x.ff %2 == 1){
            ans += x.ss;
        }
        else{
            ans -= x.ss;
        }
    }
    cout << ans << endl;
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