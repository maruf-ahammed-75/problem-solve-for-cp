#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
string s;
int n;
vector<vector<int>>dp;
int Wowfactor(int id,int state){
    if(state==3)return 1;
    if(id==n)return 0;
    if(dp[id][state]!=-1)return dp[id][state];
    int ans=0;

    ans+=Wowfactor(id+1,state);
    if(state==0 && id+1<n && s[id]=='v'&&s[id+1]=='v'){
        ans+=Wowfactor(id+1,1);
    }
    if(state==1 &&s[id]=='o'){
        ans+=Wowfactor(id+1,2);
    }
    if(state==2 && id+1<n && s[id]=='v'&&s[id+1]=='v'){
        ans+=Wowfactor(id+1,3);
    }

    return dp[id][state]=ans;
}

void I_Am_Here() {
    cin>>s;
    n = s.size();
    dp = vector<vector<int>>(n+1,vector<int>(4,-1));

    cout<<Wowfactor(0,0)<<"\n";

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
