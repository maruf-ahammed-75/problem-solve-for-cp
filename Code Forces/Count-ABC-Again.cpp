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
    int q;
    cin>>q;
    string s;
    cin>>s;
    int ans = 0;
    auto isABC = [&](int j){
        if(j<0 || j+2>=n) return false;
        return s[j] == 'A' && s[j+1] == 'B' && s[j+2] == 'C';
    };
    for(int i=0 ; i<n-2 ; i++){
        if(isABC(i)){
            ans++;
        }
    }
    for(int i=0 ; i<q ; i++){
        int x;
        char c;
        cin>>x>>c;x--;
        for(int i=x-2 ; i<=x+2 ; i++){
            if(isABC(i)){
                ans--;
            }
        }
        s[x] = c;
        for(int i=x-2 ; i<=x+2 ; i++){
            if(isABC(i)){
                ans++;
            }
        }
        cout<<ans<<"\n";
    }

}
int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    // cin>>t;
    for(int T=1 ; T<=t ; T++){
        I_Am_Here();
    }

    return 0;
}