#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
double slop(double x1,double y1,double x2,double y2){
    return (y2-y1)/(x2-x1);
}
void I_Am_Here(){
    double ax,ay,bx,by,cx,cy,dx,dy;
    cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;

    double slopAB = slop(ax,ay,bx,by);
    double slopBC = slop(bx,by,cx,cy);
    double slopBD = slop
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
