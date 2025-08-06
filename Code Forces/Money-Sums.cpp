#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int n;
vector<int>a;
set<int>s;
vector<vector<int>>dp;
void sums(int index,int sum) {
    if(dp[index][sum])return;
 
    if(sum)s.insert(sum);
    
    if(index==n)return;
    dp[index][sum] = 1;
    sums(index + 1, sum + a[index]);
    sums(index + 1, sum);
}
void I_Am_Here() {
    cin>>n;
    a = vector<int>(n);
    int all =0;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        all += a[i];
    }
    dp = vector<vector<int>>(n + 1, vector<int>(all + 1, 0));
    sort(full(a));
    sums(0,0);
    cout<<s.size()<<endl;
    for(auto it : s) {
        cout<<it<<" ";
    }
    cout<<endl;
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