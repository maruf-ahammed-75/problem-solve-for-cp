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
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(full(a));
    int ans=0;
    int i=0;
    int sum=0;
    int x = 2;
    while(i<n){
        // cout<<a[i];
        if(x>a[i]){
            // cout<<" if = ";
            sum++;
            i++;
        }
        else{
            // cout<<" else = "<<sum<<" ";
            ans +=(sum*(sum-1))/2;
            sum=0;
            x*=2;
        }
        // cout<<" "<<ans<<"\n";
    }
    ans +=(sum*(sum-1))/2;
    cout<<ans<<"\n";
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
