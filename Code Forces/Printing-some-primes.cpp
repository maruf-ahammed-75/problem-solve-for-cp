#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
vector < int > fp;
void calcFp(int n) {
    fp = vector < int > (n + 1, 1);
    for (int prime = 2; prime <= n; prime++) {
        for (int num = prime; num <= n; num += prime) {
            if (fp[num] == 1) fp[num] = prime;//stores the smallest prime number
        }
    }
}
void I_Am_Here() {
    calcFp(10000000);
    int x;
    
    while(cin>>x){
        if(x==1){
            cout<<1<<endl;
            continue;
        }

        vector<int> factors;
        while (x > 1) {
            int p = fp[x];
            factors.push_back(p);
            x /= p;
        }
        cout << 1;
        for (int p : factors) {
            cout << " x " << p;
        }
        cout << "\n";
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