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
    vector<pair<int,int>>a(n);
    int temp , x=-1;
    for(int i=0 ; i<n ; i++){
        cin>>a[i].ff;
        a[i].ss = i+1;
    }
    sort(full(a));
    if(a[0].ff==a[n-1].ff){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        int f = 0,l=0;
        for(int i=0 ; i<n-1 ; i++){
            if(a[i].ff!=a[0].ff){
                cout<<a[0].ss<<' '<<a[i].ss<<endl;
            }
            else{
                cout<<a[i].ss<<' '<<a[n-1].ss<<endl;
            }
        }
    }
    
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
