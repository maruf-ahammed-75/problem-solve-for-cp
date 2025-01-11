#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
bool slop(ll Ax,ll Ay,ll Bx,ll By,ll Cx,ll Cy){
    return ((By-Ay))*(Cx-Bx) - (Cy-By)*(Bx-Ax)<0;
}
void I_Am_Here(){
    ll ax,ay,bx,by,cx,cy,dx,dy;
    cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;
 
    if(slop(ax,ay,bx,by,cx,cy) and slop(bx,by,cx,cy,dx,dy) and slop(cx,cy,dx,dy,ax,ay) and slop(dx,dy,ax,ay,bx,by)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
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
