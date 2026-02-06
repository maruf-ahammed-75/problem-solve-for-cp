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
    vector<int> a = {4,8,15,16,23,42};
    map<int,pair<int,int>>mp;

    
    for(int i=0 ; i<6 ; i++){
        for(int j=i+1 ; j<6 ; j++){
            mp[a[i]*a[j]] = {a[i], a[j]};
        }
    }
    vector<int>ans;
    for(int i=1,x ; i<=6 ; i+=2){
        cout<<"? "<<i<<" "<<i+1<<endl;
        cin>>x;

        pair<int,int>p=mp[x];
        ans.push_back(p.ff);
        ans.push_back(p.ss);
    }
    cout<<"! ";
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
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
