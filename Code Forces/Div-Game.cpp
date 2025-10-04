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
    int ans=0;
    for(int i=2 ; i*i<=n ; i++){
        int count=0;
        // cout<<i;
        while(n%i==0){
            n/=i;
            count++;
        }
        // cout<<' '<<count<<' '<<n<<endl;
        int j=1;
        while(count>=j){
            ans++;
            count-=j;
            j++;
        }
        // cout<<n<<' '<<i<<' '<<ans<<endl;
    }
    if(n>1)ans++;
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
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}