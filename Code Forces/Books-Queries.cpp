#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
#define endl "\n"
using namespace std;
void I_Am_Here() {
    int n;
    cin>>n;
    vector<pair<int,int>> a;
    map<int,int>m;
    int left = 0 ;
    int right = 0 ;
    int i=0;
    while(n--){
        int x;
        char c;
        cin>>c>>x;
        if(i==0){
            m[x] = 0;
            i=1;
            continue;
        }
        if(c == 'R'){
            right++;
            m[x] = right;
        }
        else if(c == 'L'){
            left--;
            m[x] = left;
        }
        else{
            // cout<<m[x]<<' '<<left<<' '<<right<<endl;
            cout<<min(m[x]-left,right-m[x])<<endl;
        }
    }
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
