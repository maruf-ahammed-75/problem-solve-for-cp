#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here(int T) {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0 ; i<n ;i++){
        cin>>a[i];
    }
    multiset<int>s;

    s.insert(a[0]);

    
    for(int i=1 ; i<n ; i++){

        int last_val = *s.rbegin();
        
        if(last_val<=a[i]){
            // cout<<"if = ";
            s.insert(a[i]);
        }
        else{
            // cout<<"else = ";
            int x = *s.upper_bound(a[i]);
            // cout<<"x = "<<x<<endl;
            s.erase(s.find(x));
            s.insert(a[i]);
        }
        // cout<<"last_val: "<<last_val<<" a[i]: "<<a[i]<<endl;
        // cout<<"Set: ";
        // for(auto it:s){
        //     cout<<it<<' ';

        // }
        // cout<<endl;
        
    }

    cout<<s.size()<<endl;
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
        I_Am_Here(T);
    }
    return 0;
}
