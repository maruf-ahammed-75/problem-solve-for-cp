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
vector<vector<int>>dp;
int minVal(int pos,int len){
    
    if(pos==0){
        if (len == 0) {
            dp[pos][len] = 0;
        }
        else dp[pos][len] = INT_MAX;
        return dp[pos][len];
    }
    if(dp[pos][len]!=-1)return dp[pos][len];
    
    if(len==0){
        dp[pos][len]=0;
        return dp[pos][len];
    }
    if(pos+1 <len){
        dp[pos][len]= INT_MAX;
        return dp[pos][len];
    }
    
    
    
    //take
    int take1=INT_MAX,take2=INT_MAX;
    if(minVal(pos-1,len-1)<a[pos]){
        take1 = a[pos];
    }
    //not take
    take2 = (minVal(pos-1,len));
    dp[pos][len] =  min(take2,take1);
    return dp[pos][len];
}
void I_Am_Here() {
    cin>>n;
    a = vector<int>(n+1);
    dp = vector<vector<int>>(n+1 , vector<int>(n+1,-1));
    
    for(int i=1 ; i<=n ; i++)cin>>a[i];
    
    for(int i=n ; i>=1 ; i--){
        int x = minVal(n,i);
        if(x!=INT_MAX){
            cout<<i<<endl;
            break;
        }
    }
}
 
int32_t main() {
    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}
