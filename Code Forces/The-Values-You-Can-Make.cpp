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
vector<int> a;
vector<vector<vector<int>>> dp;
// if sum and subset_SUm is 0 then this value is possible
// bool value(int id,int sum,int subset_sum){// 2 ta ak sathe 0 hole possible
//     if(sum ==0 && subset_sum==0){
//         return true;
//     }
//     if(sum==0)return false;
//     if(id==n || sum<0 || subset_sum < 0 ) return false;

//     if(dp[id][sum][subset_sum] != -1) return dp[id][sum][subset_sum];

//     bool ok = 0;
//     //skip
//     ok |= value(id+1 , sum,subset_sum);
    
//     //only down sum
//     ok |=value(id+1 , sum - a[id],subset_sum);
    
//     //all down
//     ok |=value(id+1 , sum- a[id],subset_sum- a[id]);

//     return dp[id][sum][subset_sum] = ok;
// }


void I_Am_Here() {
    cin>>n;
    int x;
    cin>>x;
    a = vector<int>(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    dp = vector<vector<vector<int>>>(2,vector<vector<int>>(x+1,vector<int>(x+1,0)));
    set<int> st;
    for(int id=n ; id>=0 ; id--){
        for(int sum=0 ; sum<=x ; sum++){
            for(int subset_sum=0 ; subset_sum<=x ; subset_sum++){
                
                if(sum ==0 && subset_sum==0){
                    dp[id%2][sum][subset_sum] = 1; 
                }
                else if(sum==0){
                    dp[id%2][sum][subset_sum] = 0;
                }
                else if(id==n ) {
                    dp[id%2][sum][subset_sum] = 0;
                }
                else{
                    int ok = 0;
                    //skip
                    ok |= dp[(id+1)%2][sum][subset_sum];
                    
                    //only down sum
                    if(sum - a[id] >= 0) ok |= dp[(id+1)%2][sum - a[id]][subset_sum];

                    //all down
                    if(subset_sum - a[id] >= 0 && sum - a[id] >= 0) ok |= dp[(id+1)%2][sum- a[id]][subset_sum- a[id]];
                    dp[id%2][sum][subset_sum] = ok;
                }
            }
        }
    }
    for(int sum=0 ; sum<=x ; sum++){
        if(dp[0][x][sum]) st.insert(sum);
    }
    cout<<st.size()<<endl;
    for(auto it: st){
        cout<<it<<" ";
    }
    cout<<endl;
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