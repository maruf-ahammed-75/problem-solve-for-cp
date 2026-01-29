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
    string s;
    cin>>s;

    int zero = 0;
    for(auto i:s){
        if( i=='0' )zero++;
    }

    if(zero%2==0 && (zero/2)%2==0){
        cout<<"DRAW"<<endl;
    }
    else if(zero%2==1){
        cout<<"ALICE"<<endl;
    }
    else cout<<"BOB"<<endl;
}

int32_t main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}
