#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
ll slop(ll x1,ll y1,ll x2,ll y2,ll x3,ll y3){
    return (y2-y1)*(x3-x2) - (y3-y2)*(x2-x1);
}
void I_Am_Here(){
    ll x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    ll slopABCD = slop(x1,y1,x2,y2,x3,y3);
    // cout<<slopABCD<<' ';
    if(slopABCD==0){
        cout<<"TOUCH";
    }
    else if(slopABCD>0){
        cout<<"RIGHT";
    }
    else{
        cout<<"LEFT";
    }
    cout<<endl;
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
