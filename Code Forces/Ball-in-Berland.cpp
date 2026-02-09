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
    int a,b,n;
    cin>>a>>b>>n;
    vector<int>aa(n),bb(n);
    map<int,int>ma,mb;
    map<pair<int,int>,int>mab;
    for(int i=0 ; i<n ; i++){
        cin>>aa[i];
        ma[aa[i]]++;
    }
    for(int i=0 ; i<n ; i++){
        cin>>bb[i];
        mb[bb[i]]++;
        mab[{aa[i],bb[i]}]++;
    }
    int ans =0 ;
    int nn = n;
    for(int i=0 ; i<n ; i++){
        int total = ma[aa[i]] + mb[bb[i]] - mab[{aa[i],bb[i]}];
        
        // cout<<aa[i]<<" "<<bb[i]<<endl;
        // cout<<ma[aa[i]]<<" "<<mb[bb[i]]<<" "<<mab[{aa[i],bb[i]}]<<endl;
        // cout<<total<< " "<<n-total<<endl;
        // cout<<endl;
        
        ans += (nn-total);
        ma[aa[i]]--;
        mb[bb[i]]--;
        mab[{aa[i],bb[i]}]--;
        nn--;
        
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
