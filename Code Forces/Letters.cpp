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
    vector<int>a(n+1,0);
    a[0]=0;
    for(int i=1 ; i<=n ; i++){
        cin>>a[i];
        a[i]+=a[i-1];
    }
    // for(int i=1 ; i<=n ; i++)cout<<a[i]<<' ';
    // cout<<endl;

    int sum=0;
    for(int i=0 ; i<m ; i++){
        int x;
        cin>>x;
        sum+=x;
        int in = lower_bound(a.begin(),a.end(),x)-a.begin();
        // cout<<"sum = "<<sum<< ' '<<"x  ="<<x<<endl;
        cout<<in<<' '<<abs(x-a[in-1])<<endl;
        // if(sum<=a[1])cout<<x<<endl;
        // else{
        //     cout<<abs(sum-a[in-1])<<endl;
        //     cout<<endl;
        //     cout<<a[in]<<' '<<a[in-1]<<endl;
        // }

    }

}

int32_t main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

  

    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}