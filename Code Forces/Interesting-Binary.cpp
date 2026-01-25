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

int cost(int id, int pval){

    if(id>n)return 0;


    int ans = INT_MAX;

    if(a[id] == pval){
        return cost(id+1, a[id]+1)+1;
    }
    else{
        return cost(id+1, a[id]);
    }

    return ans;
}

void I_Am_Here() {
    cin>>n;
    a = vector<int>(n+1);

    for(int i=1 ; i<=n ; i++){
        cin>>a[i];
    }
    a[0]=-1;

    cout<<cost(1, a[0])<<endl;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}
