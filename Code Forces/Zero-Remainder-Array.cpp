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
    int n , k;
    cin>>n>>k;
    multiset<int> s;
    for(int i=0,x ; i<n ; i++){
        cin>>x;
        if(x%k){
            s.insert(k-x%k);
        }
    }
    
    if(!s.size()){
        cout<<0<<"\n";
        return;
    }

    int ans =0;
    int x=0;
    // for(auto i:s){
    //     cout<<i<<' ';
    // }
    // cout<<endl;

    // int val = *lower_bound(s.begin(),s.end(),5);
    // cout<<val<<endl;
    // cout<<*s.rbegin()<<endl;

    while(s.size()){
        int last = *s.rbegin();
        if(last>=x){
            int val = *s.lower_bound(x);
            if(x == val){
                // cout<<"if = ";
                ans++;
                x+=1;
                
            }
            else{
                // cout<<"else = ";
                ans += val - x + 1;
                x = val + 1;
            }
            // cout<<val<<' '<<x<<' '<<ans<<endl;
            s.erase(s.find(val));
            x%=k;
        }
        else{
            ans += (k - x);
            x = 0;
            int val = *s.lower_bound(x);
            if(x == val){
                // cout<<"if = ";
                ans++;
                x+=1;
                
            }
            else{
                // cout<<"else = ";
                ans += val - x + 1;
                x = val + 1;
            }
            // cout<<val<<' '<<x<<' '<<ans<<endl;
            s.erase(s.find(val));
            x%=k;
        }
        // for(auto i:s){
        //     cout<<i<<' ';
        // }
        // cout<<endl;
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
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}
