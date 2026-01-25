#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int n,m;
vector<int>a;
bool f = 0;
vector<vector<int>>dp;
void modSum(int id,int sum,bool take=false){
    if(sum==0 && take){
        f=1;
        return;
    }
    if(dp[id][sum]!=-1)return;
    dp[id][sum]=1;

    if(id==n)return;

    //not take
    modSum(id+1,sum%m,take);

    //take
    modSum(id+1,(sum+a[id])%m,true);
}

void I_Am_Here() {
    
    cin>>n>>m;
    a = vector<int>(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    if(n>m){
        Y;
        return;
    }

    dp = vector<vector<int>>(n+1,vector<int>(m+1,-1));

    modSum(0,0);
    if(f)Y;
    else N;
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
