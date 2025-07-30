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
    int k;
    cin>>k;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int i=0,j=n-1;
    int ans=0;
    while (i<=j)
    {
        if(a[i]<=k){
            ans++;
            i++;
        }
        else if(a[j]<=k){
            ans++;
            j--;
        }
        else{
            break;
        }
    }
    cout<<ans<<endl;

}

int32_t main() {
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