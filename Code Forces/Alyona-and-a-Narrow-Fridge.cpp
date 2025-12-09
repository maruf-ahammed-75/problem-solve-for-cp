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
string s;
int n;
std::vector<vector<int>>dp ;
int solve(int i,int st=0){
    
    if(st==3)return 1;
    if(i==n)return 0;
    if(dp[i][st]!=-1)return dp[i][st];
    
    int ans=0;
    dp[i][st]=0;
    //find first w
    if(st == 0){
        if(i+1<n && s[i]=='v' && s[i+1]=='v'){
            dp[i][st] += solve(i+1,st+1);
        }
    }
    //find o
    if(st==1){
        if(s[i]=='o')dp[i][st] += solve(i+1,st+1);
    }
    //find last 'w'
    if(st==2){
        if(i+1<n && s[i]=='v' && s[i+1]=='v'){
            dp[i][st] += solve(i+1,st+1);
        }
    }
    
    //skip
    dp[i][st] += solve(i+1,st);
    
    return dp[i][st];
}

void I_Am_Here() {
    cin>>s;
    n = s.size();
    dp = vector<vector<int>>(n+1,vector<int>(4,-1));
    cout<<solve(0)<<endl;
    
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);



    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        // cout<<"Case "<<T<<": ";
        I_Am_Here();
    }
    return 0;
}