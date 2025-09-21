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
    vector<int> a(n);
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        ans+=a[i];
    }
    vector<int> b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(full(a),greater<int>());
    sort(full(b));
    for(int i=0,j=0; i<n ; i++,j++){
        if(j<m){
            while(b[j]--){
                i++;
            }
            i--;
            if(i<n){
                ans-=a[i];
            }
            else{
                break;
            }
            // cout<<a[i]<<' ';
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
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}