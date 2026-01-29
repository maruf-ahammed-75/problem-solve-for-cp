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

    vector<int>a(n);

    vector<int>b(1000000,0);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        b[a[i]%m]++;
    }
    int ans = 0;

    if(b[0])ans++;
    // cout<<ans<<endl;
    for(int i=1 ;i<m ; i++){
        if(b[i]){
            int need = m - i;
            if(b[need]==0){
                ans+=b[i];
                b[i]=0;
            }
            else{
                // cout<<"else"<<endl;
                int diff = abs(b[i]-b[need]);
                if(diff>1)ans+=diff-1+1;
                else ans++;
                b[i]=0;
                b[need]=0;
            }
        }
        // cout<<i<<" "<<ans<<endl;
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
