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
string a,b;
int ans=0;
int ansB=0;
int proba = 0;

void TotalCombi(int id,int sum){
    // cout<<id<<' '<<sum<<' '<<ans<<endl;
    if(sum==ans && id==n){
        proba++;
    }
    if(id==n)return;
    

    if(b[id]=='+'){
        TotalCombi(id+1,sum+1);
    }
    else if(b[id]=='-'){
        TotalCombi(id+1,sum-1);
    }
    else if(b[id]=='?'){
        TotalCombi(id+1,sum-1);
        TotalCombi(id+1,sum+1);
    }
}


void I_Am_Here() {
    cin>>a>>b;
    n = a.size();
    int count =0 ;

    for(int i=0 ; i<n ; i++){
        if(a[i]=='+')ans++;
        else ans--;
    }

    // for(int i=0 ; i<n ; i++){
    //     if(b[i]=='+')ansB++;
    //     else ansB--;
    // }


    for(auto i : b){
        if(i=='?')count++;
    }
    int total = 1<<count;



    TotalCombi(0,0);
    // cout<<proba<<endl;

    cout<<fixed<<setprecision(12)<<(double)proba/(double)total<<endl;
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