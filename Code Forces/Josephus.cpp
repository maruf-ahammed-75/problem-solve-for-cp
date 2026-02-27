#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define endl "\n"
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

void I_Am_Here() {
    int n;
    cin>>n;
    queue<int>s;
    for(int i=1 ; i<=n ; i++){
        s.push(i);
    }
    while(!s.empty()){
        int fi = s.front();
        s.pop();
        if(s.size()>=1){
            int se = s.front();
            s.pop();
            cout<<se<<' ';
            s.push(fi);
        }
        else{
            cout<<fi<<' ';
        }
        
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