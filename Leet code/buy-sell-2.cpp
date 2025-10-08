#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
class Solution {
public:
    vector<int>a;
    vector<vector<int>>dp;
    int n;
    int CalMaxProfite(int id , bool stock){
        if(id>=n)return 0;
        if(dp[id][stock] != -1)return dp[id][stock];
        
        if(!stock){//stock no product==0
            int buy = -a[id] + CalMaxProfite(id+1,1);
            int skip = CalMaxProfite(id+1,0);
            return dp[id][stock] = max(buy,skip);
        }
        else{//stock = 1
            int sell = a[id] + CalMaxProfite(id+1,0);
            int hold = CalMaxProfite(id+1,1);
            return dp[id][stock] = max(sell,hold);
        }
    }
    
    
    
    int maxProfit(vector<int>& prices) {
        a = prices;
        n = a.size();
        dp = vector<vector<int>>(n+1 , vector<int>(2,-1));
        int x = CalMaxProfite(0,0);
        cout<<x<<endl;
        return x;
    }
};

void I_Am_Here() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++)cin>>a[i];
    Solution x;
    x.maxProfit(a);
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}