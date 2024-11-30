#include <bits/stdc++.h>
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    cout<<min( n*a ,min( (n/m)*b + (n%m)*a,(n/m)*b + b) )<<endl;
}

signed main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    // cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
