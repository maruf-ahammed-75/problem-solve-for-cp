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
    vector<int>a(n),b(n);
    for(int i=0 ; i<n ; i++)cin>>a[i];
    for(int i=0 ; i<n ; i++)cin>>b[i];

    int i=0,j=0;
    int ans =0 ;
    vector<int>vis(n+1,0);
    while(i<n && j<n){
        if(a[i]==b[j] || vis[a[i]]){
            j++;
            vis[a[i]]=1;
        }
        else{
            while(j<n){
                vis[b[j]]=1;
                if(b[j]==a[i]){
                    vis[b[j]]=1;
                    j++;
                    break;
                }
                ans++;
                j++;
            }
            // cout<<a[i]<<' '<<ans<<' ' << j <<endl;
        }
        i++;
    }
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
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}
