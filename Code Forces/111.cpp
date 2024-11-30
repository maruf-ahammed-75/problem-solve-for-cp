#include <bits/stdc++.h>
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    string s;
    cin>>s;
    // cout<<s<<endl;
    bool flag=0;
    for(int i=0 ; i<s.size() ; i++){
        int x = (s[i]-'0');
        if(!flag && x==9){
            cout<<x;
            flag=1;
            continue;
        }
        if(x>=5){
            x=9-x;
        }
        flag=1;
        cout<<x;
    }
    cout<<endl;
}

signed main() {
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
