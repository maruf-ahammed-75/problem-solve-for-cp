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
vector<int> a,b;
vector<vector<int>> dp;
vector<vector<pair<int, int>>> nx_state; // to store next state
int page(int i, int wt){
    if(dp[i][wt]!=-1)return dp[i][wt];
    if(i==n)return 0;

    int profit1 = 0;
    int profit2 = 0;
    if(wt-a[i]>=0)profit1 = page(i+1,wt-a[i])+b[i];
    profit2 = page(i+1 , wt);
    dp[i][wt] = max(profit1, profit2);


    //state 
    if(profit1>profit2){
        nx_state[i][wt] = {i+1, wt-a[i]};
    }
    else{
        nx_state[i][wt] = {i+1, wt};
    }
    return dp[i][wt];
}



void generateState(int curPos, int curCap) {
    if (curPos >= n) return;
    int nxPos = nx_state[curPos][curCap].first;
    int nxCap = nx_state[curPos][curCap].second;
    // cout << curPos << " " << nxPos  << endl;
    if (nxCap < curCap) {
        cout << "Take item " << curPos << " with price " << b[curPos] << " and weight " << a[curPos] << endl;
    }
    generateState(nxPos, nxCap);
}

void I_Am_Here() {
    cin>>n >> m;
    a = vector<int>(n);
    b = vector<int>(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    nx_state = vector<vector<pair<int, int>>>(n + 1, vector<pair<int, int>>(m + 1, {-1, -1}));

    dp = vector<vector<int>>(n + 1, vector<int>(m + 1, -1));
    page(0,m);
    cout<<dp[0][m]<<endl;

    int curPos = 0, curCap = m;
    // using recursion
    generateState(curPos, curCap);



    // while (curPos < n) {
    //     int nxPos = nx_state[curPos][curCap].first;
    //     int nxCap = nx_state[curPos][curCap].second;
    //     // cout << curPos << " " << nxPos  << endl;
    //     if (nxCap < curCap) {
    //         cout << "Take item " << curPos << " with price " << b[curPos] << " and weight " << a[curPos] << endl;
    //     }
    //     // else {
    //     //     cout << "Don't take item " << curPos << " with price " << b[curPos] << " and weight " << a[curPos] << endl;
    //     // }
    //     curPos = nxPos;
    //     curCap = nxCap;
    // }

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
