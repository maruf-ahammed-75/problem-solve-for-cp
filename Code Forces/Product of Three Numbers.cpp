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
    int a=0,b=0,c;
    for(int i=2 ; i*i<=n ; i++){
        if(n%i==0){
            int x = n/i;
            if(x!=i){
                a = x;
                b = i;
                break;
            }
        }
    }
    if(!a || !b){
        cout<<"NO\n";
        return;
    }
    // cout<<a<<' '<<b<<endl;
    for(int i = 2 ; i*i <= a ; i++){
        if(a%i==0){
            int x = a/i;
            if(x!=b && x != i && x!=1 && i!=b){
                cout<<"YES\n";
                cout<<x<<' '<<b<<' '<<i<<endl;
                return;
            }
        }
    }


    for(int i=2 ; i*i<=b ; i++){
        if(b%i==0){
            int  x = b/i;
            if(x != a && x!=i && x!=1 && i!=a){
                cout<<"YES\n";
                cout<<x<<' '<<a<<' '<<i<<endl;
                return;
            }
        }
    }
    cout<<"NO\n";
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