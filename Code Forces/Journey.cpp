#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    ll ans = (n/(a+b+c))*3;
    n %=(a+b+c);
    if(n){
        n-=a;
        ans++;
        if(n<=0){
            cout<<ans<<endl;
            return;
        }
        n-=b;
        ans++;
        if(n<=0){
            cout<<ans<<endl;
            return;
        }
        n-=c;
        ans++;
    }
    cout<<ans<<endl;

}

int main() {
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