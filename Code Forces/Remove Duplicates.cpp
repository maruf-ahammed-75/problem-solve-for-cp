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
    set<int>a;
    vector<int>b;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        a.insert(x);
        b.push_back(x);
    }
    cout<<a.size()<<endl;
    vector<int>c;
    for(int i=n-1 ; i>=0 ; i--){
        if(a.find(b[i])!=a.end()){
            c.push_back(b[i]);
            a.erase(b[i]);
        }
    }
    for(int i=c.size()-1 ; i>=0 ; i--)cout<<c[i]<<' ';
    cout<<endl;

}

int32_t main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

  

    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}