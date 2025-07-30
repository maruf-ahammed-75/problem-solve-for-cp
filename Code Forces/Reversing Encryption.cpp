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
    string s;
    cin>>s;
    vector<int>a;
    for(int i=1 ; i*i<=n ; i++){
        if(n%i==0){
            a.push_back(i);
            if(i!=n/i){
                a.push_back(n/i);
            }
        }
    }
    sort(a.begin(),a.end());
    // for(auto i:a){
    //     cout<<i<<endl;
    // }

    for(auto i:a){
        reverse(s.begin()+0,s.begin()+i);
        // cout<<i<<endl;
        // cout<<s<<endl;
    }
    cout<<s<<endl;

    
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif



    // string b = "abcdfes";
    // reverse(b.begin()+0,b.begin()+2);
    // cout<<b<<endl;



    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}