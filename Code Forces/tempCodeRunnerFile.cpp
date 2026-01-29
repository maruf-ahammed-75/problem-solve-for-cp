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

    map<int,int>mp;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        mp[a[i]%m]++;
    }
    int ans =0;

    for(auto i:mp){
        int firstval = i.ff; 
        int lastval = m - i.ff;
        if(firstval == lastval && i.ss>0){
            ans++;
            mp[firstval]=0;
        }
        else if(i.ff == 0 && i.ss>0){
            ans++;
        }
        else if(i.ss>0){
            int total = i.ss;
            int total2 = mp[lastval];
            if(total2==0){
                ans++;
                mp[i.ff]=0;
            }
            else{
                int diff = abs(total - total2);
                if(diff>1){
                    ans+=2;
                    mp[i.ff]=0;
                    mp[lastval]=0;
                }
                else{
                    ans++;
                    mp[i.ff]=0;
                    mp[lastval]=0;
                }
            }
        }
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
