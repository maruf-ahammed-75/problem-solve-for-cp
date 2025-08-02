#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int n,m;
vector<int>a,b;

bool ExactCoinChang(int index,int sum){


    for(int i=0 ; i<b[index] ; i++){
        
    }
    ExactCoinChang(index,sum-a[index]);

}
void I_Am_Here() {
    cin>>n>>m;
    a = vector<int>(n+1);
    b = vector<int>(n+1);
    for(int i=1 ; i<=n ; i++){
        cin>>a[i];
    }
    for(int i=1 ; i<=n ; i++){
        cin>>b[i];
    }

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