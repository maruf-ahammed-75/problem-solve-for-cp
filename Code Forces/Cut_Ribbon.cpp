#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    int n;
    int a,b,c;
    cin>>n>>a>>b>>c;
    //----------------------using math----------------
    // n = xa+yb+zc
    // => xa = n - (yb+zc) find x,y,z

    int ans=0;
    for(int y=0 ; y*b <=n ; y++){
        for(int z=0 ; z*c<= n ; z++){
            int cal = n - (y*b+ z*c);
            if(cal>=0){
                if(cal%a==0){
                    ans=max(ans,(y+z+(cal/a)));
                }
            }
        }
    }
    cout<<ans<<endl;


    
}

int main() {
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
