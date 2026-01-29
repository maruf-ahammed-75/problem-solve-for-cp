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
    for(int i=0,x; i<n ; i++){
        cin>>x;
        a[i] = {x,i+1};
    }
    sort(full(a));
    
    int mx = n + n-1;
    int ans=0;
    for(int i=0 ; i<n-1 ; i++){
        if(mx<(a[i].ff*a[i+1].ff))break;
        // 
        for(int j=i+1 ; j<n ; j++){
            if(mx<(a[i].ff*a[j].ff))break;
            // cout<<"working "<<endl;
            if((a[i].ff*a[j].ff)==(a[i].ss + a[j].ss)){
                ans++;
            }
            // cout<<a[i].ff<< ' '<<a[i].ss<<" and "<<a[j].ff<< ' '<<a[j].ss <<endl;
            // cout<<a[i].ff*a[j].ff<< ' '<<a[i].ss + a[j].ss<<endl;
        }
    }
    cout<<ans<<endl;

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
