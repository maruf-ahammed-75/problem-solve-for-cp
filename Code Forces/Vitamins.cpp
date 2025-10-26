#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
vector<int> cost;
vector<string> s;
int n;
int dp[1000+10][2][2][2];
int cal(int id,int sum,bool a,bool b,bool c){
    
    if(a&&b&&c){
        return sum;
    }
    if(id == n)return INT_MAX;

    int ans = INT_MAX;
    //skip
    ans = min(ans,cal(id+1,sum,a,b,c));

    //take
    bool x=0,y=0,z=0;
    for(auto i: s[id]){
        if(i=='A')x=1;
        if(i=='B')y=1;
        if(i=='C')z=1;
    }

    ans = min(ans,cal(id+1,sum+cost[id],a|x,b|y,c|z));

    return ans;
}

void I_Am_Here() {
    cin>>n;
    cost = vector<int>(n);
    s = vector<string>(n);
    for(int i=0 ; i<n ; i++){
        cin>>cost[i]>>s[i];
    }
    int x = cal(0,0,0,0,0);
    if(x == INT_MAX){
        cout<<-1<<"\n";
        return;
    }
    cout<<x<<"\n";






    // vector<int> a,b,c,ab,ac,bc,abc;
    // for(int i=0 ; i<n ; i++){
    //     int x;
    //     string s;
    //     cin>>x>>s;
    //     sort(full(s));
    //     if(s=="A"){
    //         a.push_back(x);
    //     }
    //     else if(s=="B"){
    //         b.push_back(x);
    //     }
    //     else if(s=="C"){
    //         c.push_back(x);
    //     }
    //     else if(s=="AB"){
    //         ab.push_back(x);
    //     }
    //     else if(s=="BC"){
    //         bc.push_back(x);
    //     }
    //     else if(s=="AC"){
    //         ac.push_back(x);
    //     }
    //     else if(s=="ABC"){
    //         abc.push_back(x);
    //     }
    // }
    // sort(full(a));
    // sort(full(b));
    // sort(full(c));
    // sort(full(ab));
    // sort(full(ac));
    // sort(full(bc));
    // sort(full(abc));
    // int ans = INT_MAX;
    // if(a.size() && b.size() && c.size()){
    //     ans = min(ans , a[0] + b[0] + c[0]);
    // }
    // if(abc.size()){
    //     ans = min(ans , abc[0]);
    // }
    // if(ab.size() && c.size()){
    //     ans = min(ans , ab[0] + c[0]);
    // }
    // if(bc.size() && a.size()){
    //     ans = min(ans , bc[0] + a[0]);
    // }
    // if(ac.size() && b.size()){
    //     ans = min(ans , ac[0] + b[0]);
    // }
    // if(ac.size() && bc.size()){
    //     ans = min(ans , ac[0] + bc[0]);
    // }
    // if(ab.size() && ac.size()){
    //     ans = min(ans , ab[0] + ac[0]);
    // }
    // if(ab.size() && bc.size()){
    //     ans = min(ans , ab[0] + bc[0]);
    // }
    // if(ans == INT_MAX){
    //     ans = -1;
    // }
    // cout<<ans<<"\n";

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