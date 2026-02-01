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

    int a=0,b=0;

    for(int i=2 ; i*i<=n ; i++){
        if(n%i==0){
            a = i;
            b = n/i;
            break;
        }
    }
    if(a==0){
        cout<<"NO\n";
        return;
    }
    for(int i=2 ; i*i<=b ; i++){
        if(b%i==0 && i!=a && (b/i)!=a && (b/i)!=i){
            cout<<"YES\n";
            cout<<a<<" "<<i<<" "<<b/i<<"\n";
            return;
        }
    }

    cout<<"NO\n";

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
