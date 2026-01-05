#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define endl "\n"
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int n;
vector<int>a;
int minSum(int id , bool take = false){
    // cout<<"id: "<<id<<endl;
    if(id==n){
        return 0;
    }
    int ans = LLONG_MAX;

    //take 
    ans = min (ans, minSum(id+1,take)+(id!=n-1?abs(a[id]-a[id+1]):0));

    //not take
    if(take == 0) ans = min(ans, minSum(id+1,1))-((id!=0)?abs(a[id]-a[id-1]):0)  +((id!=0 && id!=n-1)?abs(a[id+1]-a[id-1]):0);

    // cout<<"ans: "<<ans<<endl;
    return ans;
}

void I_Am_Here() {
    
    cin>>n;
    a = vector<int>(n+1,0);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int total = 0 ;
    for(int i=0 ; i<n-1 ; i++){
        total+= abs(a[i]-a[i+1]);
    }

    int ans = LLONG_MAX;
    for(int i=0 ; i<n ; i++){
        if(i==0){
            ans = min(ans, total - abs(a[0]-a[1]));
            continue;
        }
        if(i==n-1){
            ans = min(ans, total - abs(a[n-1]-a[n-2]));
            continue;
        }
        ans = min(ans,total - abs(a[i]-a[i-1]) - abs(a[i]-a[i+1]) + abs(a[i+1]-a[i-1]));
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    


    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        // cout<<"Case "<<T<<": ";
        I_Am_Here();
    }
    return 0;
}
