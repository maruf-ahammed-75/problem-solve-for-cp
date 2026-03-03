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
vector<vector<int>>a(1000+100,vector<int>(1000+100,0));

void I_Am_Here() {
    int n,m;
    cin>>n>>m;
    
    for(int i=1 ; i<=n ; i++){
        string s;
        cin>>s;
        for(int j=0 ; j<n ; j++){
            if(s[j] == '*' ){
                a[i][j+1]=1;
            }
        }
    }
    
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n ; j++){
          a[i][j] += (a[i-1][j] + a[i][j-1] - a[i-1][j-1]);
        }
    }
    
    // for(int i=1 ; i<=n ; i++){
    //     for(int j=1 ; j<=n ; j++){
    //       cout<<a[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }
    
    while(m--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        cout<<a[x2][y2] + a[x1-1][y1-1] - a[x1-1][y2] - a[x2][y1-1]<<endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

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