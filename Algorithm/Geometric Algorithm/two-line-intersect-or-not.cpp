#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
ll slop(ll x1,ll y1,ll x2,ll y2,ll x3,ll y3){
    ll val =  (y2-y1)*(x3-x2) - (y3-y2)*(x2-x1);
    if (val == 0) return 0; 
    return (val > 0) ? 1 : 2;
}
bool validProjection(int a, int b, int c, int d) {
    if (a > b) swap(a, b);
    if (c > d) swap(c, d);
    return max(a, c) <= min(b, d);
}
void I_Am_Here(){
    ll x1,x2,x3,y1,y2,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
 
    ll slopABC = slop(x1,y1,x2,y2,x3,y3);
    ll slopABD = slop(x1,y1,x2,y2,x4,y4);
    ll slopCDA = slop(x3,y3,x4,y4,x1,y1);
    ll slopCDB = slop(x3,y3,x4,y4,x2,y2);
    
    if(slopABC!=slopABD && slopCDA != slopCDB){
        cout<<"YES\n";
        return;
    }
    if(slopABC==0 and slopCDB==0){
        if(validProjection(x1,x2,x3,x4) and validProjection(y1,y2,y3,y4)){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n"; 
}
 
int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
