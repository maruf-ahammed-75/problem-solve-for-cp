#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    int n;
    cin>>n;
    int x = n;
    int ans=0;
    int si=0;
    while(x){
        si++;
        int y = x%10;
        if(y)ans++;
        x /=10;
        // cout<<x<<' '<<y<<endl;
    }
    cout<<ans<<endl;
    si=0;
    while(n){
        
        int y = n%10;
        if(y){
            cout<<y;
            for(int i=0 ; i<si ; i++)cout<<0;
            cout<<' ';
        }
        
        n/=10;
        si++;
    }
    cout<<endl;

}

int32_t main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

  

    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}