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
    string a,b;
    cin>>a>>b;
    cout<<a<<' '<<b<<endl;
    int n;
    cin>>n;
    vector<string> s1(n),s2(n);
    for(int i=0 ; i<n ; i++){
        cin>>s1[i]>>s2[i];
        if(a==s1[i]){
            a = s2[i];
        }
        else if(b==s1[i]){
            b = s2[i];
        }
        cout<<a<<' '<<b<<endl;
    }
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}