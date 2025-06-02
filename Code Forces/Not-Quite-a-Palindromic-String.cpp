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
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    int z=0, o=0;
    for(int i=0 ; i<n ; i++){
        if(s[i]=='0') z++;
        else o++;
    }
    // cout<<z<<' ' <<o<<endl;
    for(int i=1 ; i<=m ; i++){
        if(z>=o){
            z-=2;
        }
        else {
            o-=2;
        }
    }
    // cout<<z<<' '<<o<<endl;
    if(o==z && o>=0){
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }
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