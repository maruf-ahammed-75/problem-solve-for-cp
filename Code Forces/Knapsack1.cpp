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
int knapsack(int index,int capacity){

    if(index == 0 || capacity == 0) {
        return 0; // Base case: no items or no capacity left
    }

    int income1=0;
    int income2=0;
    if(capacity>=w[index]) {
        income1 = v[index] + knapsack(index-1, capacity - w[index]);
    }
    income2 = knapsack(index-1, capacity);
    
    return max(income1, income2);
}
void I_Am_Here() {
    cin>> n >> c;
    v = vector<int>(n+1,0);
    w = vector<int>(n+1,0);
    for(int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }    
    cout<<knapsack(n, c) << endl; // Call the knapsack function and print the result
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
