#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
// recursion
int n,m;
vector<int>a;
int distWay(int index,int sum){

    if(sum==0)return 1;
    if(sum<0)return 0;
    if(index>n)return 0;

    int ans=0;
    ans+=distWay(index,sum-a[index]);
    ans+=distWay(index+1,sum);

    return ans;
}


void I_Am_Here() {
    cin>>n>>m;
    a = vector<int>(n+1);
    for(int i=1 ; i<=n ; i++){
        cin>>a[i];
    }
    cout<<distWay(1,m)<<endl;
    
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