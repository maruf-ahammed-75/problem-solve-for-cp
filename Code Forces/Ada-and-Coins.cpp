#include <bits/stdc++.h>
#define ll long long
// #define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;


void I_Am_Here() {
    int n,m;
    scanf("%d %d",&n,&m);
    
    bitset<100001>x;
    x[0]=1;
    for(int i=0,a ; i<n ; i++){
        scanf("%d",&a);
        x = (x | (x<<a));
    }
    vector<int>res(100000+ 100 , 0);

    for(int i=1 ; i<=100000 ; i++){
        res[i] = res[i-1] + (x[i]==1?1:0);
    }
    while(m--){
        int l,r;
        scanf("%d %d",&l,&r);
        printf("%d\n", res[r]-res[l-1]);
    }
    
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}