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
    string s;
    cin>>s;
    int n = s.size();
    int ans = 0;
    int count = 0;
    ll last =0;
    for(int i=n-1 ; i>=0 ; i--){
        if(s[i]!='0'){
            last = i;
            break;
        }
    }
    for(int i=last -1 ; i>=0 ; i--){
        if(s[i] != '0'){
            ans++;
        }
    }
    cout<<ans + (n- last-1)<<"\n"; 
}
int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    cin>>t;
    for(int T=1 ; T<=t ; T++){
        I_Am_Here();
    }

    return 0;
}