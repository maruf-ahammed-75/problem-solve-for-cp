



#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int mod = ((int)1e9 + 7);
//recursion
int n;
vector<string>a;
int count(int i,int j){
    if(i>=n || j>=n)return 0;//out of boundry
    if(a[i][j]=='*') return 0;//trap
    if(i==n-1 && j==n-1)return 1;//reached goal


    int ans=0;
    ans+=count(i+1,j);
    ans+=count(i,j+1);
    return ans;
}
void I_Am_Here() {
    cin>>n;
    a = vector<string>(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    cout<<count(0,0)<<endl;
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