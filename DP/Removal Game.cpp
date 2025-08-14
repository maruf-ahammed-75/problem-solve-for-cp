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
vector<vector<pair<int, int>>>dp;
vector<int> a;


// pair<int,int> maxScore(int st, int end){
//     if(dp[st][end].ff != LONG_MIN)return dp[st][end];
//     if(st>end){
//         dp[st][end]={0,0};
//         return dp[st][end];
//     }

//     int p;
//     if(n%2 == (end-st+1)%2)p=1;
//     else p=0;

//     if(p){
//         int op1 = maxScore(st+1,end).ff + a[st];
//         int op2 = maxScore(st,end-1).ff + a[end];
        
//         if(op1>op2){
//             dp[st][end] =  {op1,maxScore(st+1,end).ss+0};
//         }
//         else{
//             dp[st][end] = {op2,maxScore(st,end-1).ss+0};
//         }   
//     }
//     else{
//         int op1 = maxScore(st+1,end).ss + a[st];
//         int op2 = maxScore(st,end-1).ss + a[end];
        
//         if(op1>op2){
//             dp[st][end] =  {maxScore(st+1,end).ff+0,op1};
//         }
//         else{
//             dp[st][end] = {maxScore(st,end-1).ff+0,op2};
//         }   
//     }

//     return dp[st][end];
// }
void I_Am_Here() {
    cin>>n;
    a = vector<int>(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    dp = vector<vector<pair<int, int>>>(n + 2, vector<pair<int, int>>(n + 2, {0, 0}));

    for(int st = n ; st>=1 ; st--){
        for(int end = 1 ; end<= n ; end++){
            if(st>end){
                continue;
            }
            int p;
            if(n%2 == (end-st+1)%2)p=1;
            else p=0;

            if(p){
                int op1 = dp[st+1][end].ff + a[st];
                int op2 = dp[st][end-1].ff + a[end];
                
                if(op1>op2){
                    dp[st][end] =  {op1,dp[st+1][end].ss+0};
                }
                else{
                    dp[st][end] = {op2,dp[st][end-1].ss+0};
                }   
            }
            else{
                int op1 = dp[st+1][end].ss + a[st];
                int op2 = dp[st][end-1].ss + a[end];

                if(op1>op2){
                    dp[st][end] =  {dp[st+1][end].ff+0,op1};
                }
                else{
                    dp[st][end] = {dp[st][end-1].ff+0,op2};
                }   
            }
        }
    }

    cout<<dp[1][n].ff<<endl;

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