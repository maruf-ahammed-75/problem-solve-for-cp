#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int n,c;
vector<int>v,w;
// Function to solve the Knapsack problem using recursion 
// int knapsack(int index,int value){
  
//     if( value == 0) {
//         return 0; // Base case: no items or no capacity left
//     }
//     if(index > n) {
//         return INT_MAX; // If we have considered all items
//     }
//     int weight1  = INT_MAX;
//     int weight2  = INT_MAX;

//     if(value-v[index] >= 0){
//         weight1 = w[index] + knapsack(index+1,value - v[index]);
//     }
//     weight2 = knapsack(index+1,value);

//     return min(weight1,weight2);
// }
vector<vector<int>>knapsack;
void I_Am_Here() {
    cin>> n >> c;
    v = vector<int>(n+1,0);
    w = vector<int>(n+1,0);
    int total = 0;
    for(int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
        total += v[i];
    }
    knapsack = vector<vector<int>>(n+100,vector<int>(total+100, INT_MAX));    
    knapsack[n+1][0] = 0; // Base case: no value means no weight
    // int ans = 0 ;
    // cout<< "Total value: " << total << endl;
    // for(int i=0 ; i<= total; i++) {
    //     if(knapsack(1,i) <= c) {
    //         // cout << "Value: " << i << " Weight: " << knapsack(1,i) << endl;
    //         ans = i;
    //     }
    // }
    // cout << ans << endl;

    // for dynamic programming
    int ans =0;
    for(int index = n ; index >=1 ; index--) {
        for(int value = 0; value <= total; value++){
            if(value == 0) {
                knapsack[index][value] = 0; // Base case: no value means no weight
                continue;
            }
            int weight1 = INT_MAX;
            int weight2 = INT_MAX;
            if(value-v[index]>=0){
                weight1 = w[index] + knapsack[index+1][value - v[index]];
            }
            weight2 = knapsack[index+1][value];
            knapsack[index][value] = min(weight1, weight2);
            
            // for the answer
            if(knapsack[index][value] <= c) {
                ans = max(ans, value);
            }
        }

    }
    // for(int index = 1; index <= n; index++) {
    //     for(int value = 0; value <= total; value++) {
    //         if(knapsack[index][value] <=c) cout<<value<<" ";
    //     }
    //     cout<<endl;
    // }


    cout<<ans<<endl;
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