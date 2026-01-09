#include <bits/stdc++.h>
#define ll long long
// #define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

int t,n,m;
int ans = 0;
vector<vector<int>>dp;
void fullNess(int sum,int use){
    if(sum>t)return;

    if(dp[sum][use]!=-1)return;

    ans = max(ans,sum);
    dp[sum][use] = 1;

    fullNess(sum+n, use);
    fullNess(sum+m, use);
    if(!use)fullNess(sum/2,1);
}

void I_Am_Here() {
   
    
}

int32_t main() {
    ifstream fin("feast.in");
    ofstream fout("feast.out");

     fin>>t>>n>>m;
    dp = vector<vector<int>>(t+1,vector<int>(2,-1));
    fullNess(0,0);
    fout<<ans<<"\n";
    return 0;
}