#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here(){
    ll ax,ay,bx,by,cx,cy,dx,dy;
    cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;

    ll SlopABCPoint = (by-ay)*(cx-bx) - (cy-by)*(bx-ax);
    ll slopABDPoint = (by-ay)*(dx-bx) - (dy-by)*(bx-ax);
    ll x = SlopABCPoint;
    ll y = slopABDPoint;

    if((x>0 && y>0) || (x<0 && y<0))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int32_t main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    int t=1;
    // cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
