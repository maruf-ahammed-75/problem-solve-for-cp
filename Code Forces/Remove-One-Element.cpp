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
vector<int>a;

int Combinations(int index,int sum){

    if(sum<0)return 0;
    if(sum==0)return 1;
    if(index>n)return 0;

    int ans=0;
    ans+=Combinations(index,sum-a[index])
    ans+=Combinations(index+1,sum)

    return ans;
}


void I_Am_Here() {
    

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