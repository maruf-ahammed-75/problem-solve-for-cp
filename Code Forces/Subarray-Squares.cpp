#include <bits/stdc++.h>
#define ll long long
#define int long long int
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
unsigned
int n;
int k;
vector<int> a;
vector<vector<int>> dp;
vector<int> prefix_sum; 
int  sum (int l , int r){
    return prefix_sum[r] - prefix_sum[l-1];
}
int square_sum(int id , int k){
    if(k == 1){
        return sum(id,n)*sum(id,n);
    }
    cout<<id<<" "<<k<<endl;
    if(n - id + 1 < k){ 
        return LLONG_MAX; 
    }
    

    if(dp[id][k] != LLONG_MAX){
        return dp[id][k];
    }
    int ans = LLONG_MAX;
    for(int i=id ; i<= n - k+1 ; i++){
        long long nxt = square_sum(i+1, k-1);
        if(nxt == LLONG_MAX) continue;
        ans = min(ans,sum(id,i)*sum(id,i)+nxt);
    }
    return dp[id][k] = ans;
}
void I_Am_Here() {
    cin>>n;
    cin>>k;
    a = vector<int>(n);
    prefix_sum = vector<int>(n+1,0);
    dp = vector<vector<int>>(n+1,vector<int>(k+1,LLONG_MAX));
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    for(int i=1;i<=n;i++){
        prefix_sum[i] = prefix_sum[i-1] + a[i-1];
    }
    cout<<square_sum(1,k)<<endl;
    
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