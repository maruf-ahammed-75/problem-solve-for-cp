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
    vector<int> mp(1000001,0);
    int maxVal = -1;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        maxVal = max(maxVal,a[i]);
        mp[a[i]]++;
    }

    int ans=1;
    for(int i=maxVal ; i>=2 ; i--){
        int count = 0;
        for(int j=i ; j<=maxVal ; j+=i){
           if(mp[j])count++;
           if(count>1 || mp[i]>1){
                ans = max(ans,i);
                cout<<ans<<endl;
                return;
            }
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