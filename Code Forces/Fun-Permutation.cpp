#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

void I_Am_Here(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0 ; i<n ; i++)cin>>a[i];
    if(n==2){
        if(a[0]==1)cout<<2<<' ' ;
        else cout<<1<<' ' ;

        if(a[1]==2)cout<<1<<' ' ;
        else cout<<2<<' ' ;
        cout<<"\n";
        return;
    }
    for(int i=0 ; i<n ; i++){
        cout<<n - a[i]%n<<' ' ;
    }
    cout<<"\n";
}
 
int32_t main() {

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