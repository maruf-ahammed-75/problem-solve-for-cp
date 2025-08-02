



#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int way[10][1000000 + 1];
//recursion
int n,m;
vector<int>a,b;


int page(int index,int total){//index,total taka return max page

    if(index==n)return 0;
    if(total==0)return 0;

    int ans=0;
    if(total-a[index]>=0)ans= max(ans,b[index]+page(index+1,total-a[index]));
    ans= max(ans,page(index+1,total));

    return ans;
}
void I_Am_Here() {
    cin>>n>>m;
    a = vector<int>(n);
    b = vector<int>(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    for(int i=0 ; i<n ; i++){
        cin>>b[i];
    }
    cout<<page(0,m)<<endl;
 
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