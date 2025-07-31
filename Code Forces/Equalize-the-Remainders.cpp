//error
#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

void I_Am_Here() {
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<pair<int,int>>a(n);
    vector<vector<int>>stor(m+1,vector<int>());
    vector<int>extra;
    for(int i=0 ; i<n ; i++){
        cin>>a[i].ff;

        if(stor[a[i].ff%m].size()<(n/m)){
            // cout<<stor[a[i].ff%m].size()<<" "<<(n/m)<<endl;
            stor[a[i].ff%m].push_back(i);
            a[i].ss=1;
        }
        else{
            a[i].ss=-1;
            extra.push_back(i);
        }
    }

    // cout<<"store"<<endl;
    // for(int i=0 ; i<m ; i++){
    //     cout<<i<<" = ";
    //     for(int j=0 ; j<stor[i].size() ; j++){
    //         cout<<stor[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }


    map<int,int>mp;
    for(int i=0 ; i<m ; i++){
        if(stor[i].size()<n/m){
            mp[i]= n/m - stor[i].size();
        }
    }

    // cout<<"map = "<<endl;
    // for(auto i:mp){
    //     cout<<i.ff<<' '<<i.ss<<endl;
    // }
    // cout<<"extra = ";
    // for(int i=0 ; i<extra.size() ; i++){
    //     cout<<extra[i]<<' ';
    // }
    // cout<<endl;



    stack<int>ex;
    for(auto i:extra){
        ex.push(i);
    }
    int need=0;
    vector<int>ans;
    for(auto i:mp){
        while(i.ss--){
            int x = a[ex.top()].ff%m;
            // cout<<x<<endl;
            if(x<=i.ff){
                need+=i.ff-x;
                ans.push_back(i.ff-x);
            }
            else{

                need+=i.ff + m - x;
                ans.push_back(i.ff + m - x);
            }
            ex.pop();
        }
    }
    cout<<need<<endl;
    // cout<<"ans = "<<endl;
    // for(auto i:ans){
    //     cout<<i<<' ';
    // }
    // cout<<endl;
    int j=0;
    for(int i=0 ; i<n ; i++){
        if(a[i].ss==1){
            cout<<a[i].ff<<' ';
        }
        else{
            cout<<a[i].ff+ans[j]<<' ';
            j++;
        }
    }
    cout<<endl;



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