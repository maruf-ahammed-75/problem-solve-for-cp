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
    vector<vector<int>>a(n,vector<int>(n));
    map<int,int>m;
    vector<int>ans(n*2 + 1,0);
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<n ; j++){
            cin>>a[i][j];
            if(!ans[i+j+2]){
                m[a[i][j]]=1;
                ans[i+j+2] = a[i][j];
            }
        }
    }
    vector<int>b;
    for(int i=1 ; i<=n*2 ; i++){
        if(!m[i]){
            b.push_back(i);
        }
    }
    int j=0;
    for(int i=1 ; i<=n*2 ; i++){
        if(ans[i]){
            cout<<ans[i]<<' ';
        }
        else{
            cout<<b[j]<< ' ' ;
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
    
    int t=1;
    cin>>t;
    for(int T=1 ; T<=t ; T++){
        I_Am_Here();
    }

    return 0;
}